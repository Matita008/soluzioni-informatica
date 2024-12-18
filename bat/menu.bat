@echo off
REM cls
echo Ready
echo.
echo %0
echo.
echo %1
@rem nul è nullo,quello che viene messo come output di pause è dove va a scrivere "Premere un tasto per continuare"
REM pause>prova.txt
:main
cls
echo  ******************************************************************************************************************
echo.
echo                             Main menu
echo.
echo  ******************************************************************************************************************
echo.
echo  Seleziona app da aprire:
echo.
echo   [1]:  Calcolatrice
echo   [2]:  Prompt dei comandi (qua)
echo   [3]:  Prompt dei comandi (nuova finestra)
echo   [4]:  Task manager
echo   [5]:  Blocco note
echo   [6]:  Esplora file
echo   [7]:  Visiona versione di java installata (se presente)
echo   [8]:  Riaprimi qui
echo   [9]:  Aprimi in una nuova finestra
echo   [10]: Apri un programma personalizzato
echo   [0]: Esci
echo.
@rem di base le variabili sono a 0, la imposto a -1 cosicché se l'input è nullo va in errore e non esce o riesegue l'operazione precedente
set opzione=-1
set /p opzione=  Inserisci numero dell'opzione corrispondente:
if %opzione% == 1 call :app calc "Calcolatrice"
if %opzione% == 2 call :app cmd "Prompt dei comandi" "/B /WAIT"
if %opzione% == 3 call :app cmd "Prompt dei comandi" " " "(nuova finestra)"
if %opzione% == 4 call :app taskmgr
if %opzione% == 5 call :app notepad "Il peggior editor di sempre"
if %opzione% == 6 call :app explorer "Esplora file"
if %opzione% == 7 call :app "java -version" "Ecco i dettagli sull'installazione corrente: "
if %opzione% == 8 call :app menu
if %opzione% == 9 call :app menu "Menu.bat" "/B" "In una nuova finestra"
if %opzione% == 10 goto selectApp
if %opzione% == 202  call :app "C:\Users\matti\Desktop\mattia\gg\md\Mindustry" "yk"
if %opzione% == 0 (goto exit) else goto invalid
echo.
echo HOW?
echo.
goto invalid
:app
REM @echo on
set name=%~2
if "%name%"=="" set name=%~1
echo.
echo Hai aperto %name% %~4
if "%~3"=="" goto appIf
start "%~2" %~3 %~1
goto appIfEnd
:appIf
%~1
:appIfEnd
REM @echo off
echo.
echo Continua...
pause>>nul
goto main
:selectApp
set /p prg=Inserisci nome/percorso eseguibile:
%prg%
echo.
echo Aperto %prg%
echo.
echo Continua...
pause>>nul
goto main
:invalid
echo.
color 04
if %opzione% == -1 goto nullInput
echo Bad input, press a key to repeat
pause>nul
color 0F
goto main
:nullInput
echo Non hai inserito un numero!
echo.
echo Riprova!
echo.
echo Premi un tasto qualsiasi per tornare al menu principale
pause>nul
color 0F
goto main
:exit
echo.
echo Premi un tasto per uscire
pause>nul
exit
