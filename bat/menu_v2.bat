@echo off
cls
echo Ready
:main
title Main menu v2.0 - Home
cls
echo  ******************************************************************************************************************
echo.
@rem                NON ROMPETE SE NON È CENTRATO, CHISSENEFREGA PER ORA!
echo                             Main menu v2.0
echo.
echo  ******************************************************************************************************************
echo.
echo  Seleziona app da aprire:
echo.
echo   [1]:  Calcolatrice
echo   [2]:  Prompt dei comandi (nuova finestra)
echo   [3]:  Crea virus in %username%\Documents
echo   [4]:  Task manager
echo   [5]:  Blocco note
echo   [6]:  Esplora file
echo   [7]:  Visiona versione di java installata (se presente)
echo   [8]:  Riaprimi qui
echo   [9]:  Aprimi in una nuova finestra
echo   [10]: Apri un programma personalizzato
echo   [0]:  Esci
echo.
@rem di base le variabili sono a 0, la imposto a -1 cosicché se l'input è nullo va in errore e non esce o riesegue l'operazione precedente
set opzione=-1
set /p opzione=  Inserisci numero dell'opzione corrispondente:
if %opzione% == 1 call :app calc "Calcolatrice"
if %opzione% == 2 call :app cmd "Prompt dei comandi" " " "(nuova finestra)"
if %opzione% == 3 goto virus
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
pause >>nul
goto main
:virus
set file=%USERPROFILE%\Documents\virus.bat
set angle=">"
echo @echo off >%file%
echo echo press a key to start >>%file%
echo pause %angle%nul >>%file%
echo :main >>%file%
echo Start "Infettato da xxx" cmd >>%file%
echo Start "Infettato da xxx" cmd >>%file%
echo Start "Infettato da xxx" cmd >>%file%
echo Start "Infettato da xxx" cmd >>%file%
echo Start "Infettato da xxx" cmd >>%file%
echo echo aperto 5 finestre >>%file%
echo goto main >>%file%
echo fatto!
set /P c="Vuoi avviarlo ora? (Y/N): "
if %c%==Y Start "Virus - Avvio in corso..." %file%
if %c%==y Start "Virus - Avvio in corso..." %file%
echo Premi un tasto per tornare al menu
pause >nul
goto main
:invalid
echo.
color 04
if %opzione% == -1 goto nullInput
echo Bad input, press a key to repeat
pause >nul
color 0F
goto main
:nullInput
echo Non hai inserito un numero!
echo.
echo Riprova!
echo.
echo Premi un tasto qualsiasi per tornare al menu principale
pause >nul
color 0F
goto main
:exit
echo.
echo Premi un tasto per uscire
pause >nul
exit
