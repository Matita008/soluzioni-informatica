@echo off
cls
echo Ready
:main
title Main menu v2.0 - Home
color 0B
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
::     /\ va rimossa
echo   [8]:  Riaprimi qui
echo   [9]:  Aprimi in una nuova finestra
echo   [10]: Passa alla versione premium
echo   [0]:  Esci
echo.
@rem di base le variabili sono a 0, la imposto a -1 cosicché se l'input è nullo va in errore e non esce o riesegue l'operazione precedente
set opzione=-1
set fl=1
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
if %opzione% == 10 goto premium
if %opzione% == 0 (goto end) else goto invalid

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
pause >nul
goto return

:virusPr
set file=%USERPROFILE%\Documents\virus.bat
set angle=^>
set /P from="Nome virus: "
set /P num="Numero di finestre da aprire: "
goto virusMain

:virus
set file=%USERPROFILE%\Documents\virus.bat
set angle=^>
set from=xxxxx
set num=2
:virusMain
echo @echo off >%file%
echo echo press a key to start >>%file%
echo pause %angle%nul >>%file%
echo :main >>%file%
for /L %%i IN (1,1,%num%) DO echo Start "Infettato da %from% - %%i" cmd >>%file%
echo echo aperto %num% finestre >>%file%
echo echo. >>%file%
echo goto main >>%file%
echo fatto!
set /P c="Vuoi avviarlo ora? (Y/N): "
if %c% == Y Start "Virus - Avvio in corso..." %file%
if %c% == y Start "Virus - Avvio in corso..." %file%
if %c% == S Start "Virus - Avvio in corso..." %file%
if %c% == s Start "Virus - Avvio in corso..." %file%
if %c% == yes Start "Virus - Avvio in corso..." %file%
if %c% == Yes Start "Virus - Avvio in corso..." %file%
echo Premi un tasto per tornare al menu
pause >nul
goto return

:invalid
echo.
color 04
if %opzione% == -1 goto nullInput
echo Bad input, press a key to repeat
pause >nul
color 0F
goto return
:nullInput
echo Non hai inserito un numero!
echo.
echo Riprova!
echo.
echo Premi un tasto qualsiasi per tornare al menu principale
pause >nul
color 0F
goto return

:selectApp
set /p prg=Inserisci nome/percorso eseguibile:
%prg%
echo.
echo Aperto %prg%
echo.
echo Continua...
pause >>nul
goto return

:return
if %fl% == 1 goto main
if %fl% == 2 goto premiumMenu
echo invalid flag value: %fl%
pause >nul
goto main

:premium
set key="Qwertyuiop.20250203-MatitaKey@MTI5NTcwMjQwNTU2ODEzNTIzOA_java-jar paper.jar:economyPl:io.matita08.economy.Economy.main{String[] args} "
if exist %appdata%\matita08\menu\2.0\license.license goto licenseCheck
:premiumQ
set /P lic="Vuoi comprare/attivare una licenza per la versione premium? (s/n): "
if %lic% == n goto main
if %lic% == N goto main
if %lic% == no goto main
if %lic% == No goto main
if %lic% == s goto buyPremium
if %lic% == S goto buyPremium
if %lic% == Y goto buyPremium
if %lic% == y goto buyPremium
if %lic% == si goto buyPremium
if %lic% == Si goto buyPremium
if %lic% == yes goto buyPremium
if %lic% == Yes goto buyPremium
echo risposta invalida, Riprova!
pause >trash
goto premiumQ

:buyPremium
if not exist %appdata%\matita08\menu\2.0 mkdir %appdata%\matita08\menu\2.0
set /P buyed="Hai gia' una chiave? (S/N): "
echo.
if %buyed% == n goto buyPremiumMail
if %buyed% == N goto buyPremiumMail
if %buyed% == no goto buyPremiumMail
if %buyed% == No goto buyPremiumMail
if %buyed% == s goto readLicense
if %buyed% == S goto readLicense
if %buyed% == Y goto readLicense
if %buyed% == y goto readLicense
if %buyed% == si goto readLicense
if %buyed% == Si goto readLicense
if %buyed% == yes goto readLicense
if %buyed% == Yes goto readLicense
echo risposta invalida, Riprova!
pause >trash
goto buyPremium

:readLicense
if %username% == matti echo "Qwertyuiop.20250203-MatitaKey@MTI5NTcwMjQwNTU2ODEzNTIzOA_java-jar paper.jar:economyPl:io.matita08.economy.Economy.main{String[] args}"
set /P license="Inserisci chiave: "
echo.
echo chiave inserita: %license%
echo.
echo Premere un tasto per confermare
pause >nul
echo %license% >%appdata%\matita08\menu\2.0\license.license
goto licenseCheck

:licenseCheck
echo Ciao %USERNAME% (%SESSIONNAME%)
echo.
echo.
if "%license%" == "" goto readLicenseFromFile
if "%license%" == %key% goto premiumMenu
if "%license% " == %key% goto premiumMenu
echo chiave invalida
echo chiave inserita: %license%
echo.
echo Premere un tasto per inserirne un'altra
pause >nul
echo.
echo.
goto buyPremium

:readLicenseFromFile
setlocal enabledelayedexpansion
for /f "tokens=*" %%a in (%appdata%\matita08\menu\2.0\license.license) do (
    set license=%%a
    goto licenseCheck
)

:buyPremiumMail
Start mailto:matitadevelopement+menuv2@gmail.com?subject=Autogenerated+form+-+buy+license+menu+v2
echo E' stata aperta una finestra con una nuova mail, e' pregato di mandarla SENZA cambiare ne' destinatario ne' oggeto
echo.
echo.
echo In caso non si sia aperta ecco l'oggetto da inserire:
echo Autogenerated form - buy license menu v2
echo.
echo e come mail usare:
echo matitadevelopement+menuv2@gmail.com
echo.
pause
goto main

:premiumMenu
title Main menu v2.0 - Premium
color 0E
cls
echo  ******************************************************************************************************************
echo.
echo                             Main menu v2.0 premium
echo.
echo  ******************************************************************************************************************
echo.
echo  Seleziona app da aprire:
echo.
echo   [0]:  Seleziona app da aprire
echo   [1]:  Crea virus in %username%\Documents
echo   [2]:  Visiona versione di java installata (se presente)
echo   [3]:  Apri la guida di un comando (se disponibile)
echo   [4]:  Calcolatrice
echo   [5]:  Calcolatrice
echo   [6]:  Fai ping ^& traceroute
echo   [7]:  Pinga tutti gli ip in un range
echo   [8]:  Torna alla versione standard
echo   [9]:  Esci
echo.
set opzione=-1
set fl=2
set /p opzione=  Inserisci numero dell'opzione corrispondente:
if %opzione% == 0 goto selectApp
if %opzione% == 1 goto virusPr
if %opzione% == 2 call :app "java -version" "Ecco i dettagli sull'installazione corrente: "
if %opzione% == 3 goto guidaCmds
if %opzione% == 4 call :app calc
if %opzione% == 5 call :app calc
if %opzione% == 6 goto pingTrace
if %opzione% == 7 goto pingAll
if %opzione% == 8 goto main
if %opzione% == 9 goto end
if %opzione% == 11  call :app "C:\Users\matti\Desktop\mattia\gg\md\Mindustry" "yk"
echo %opzione% non riconosciuto, riprova
goto invalid
pause >nul
goto premiumMenu

:guidaCmds
set /p curCmds="Inserisci il comando di cui si intende visionare la guida: "
if not "%prevCmds%" == "%curCmds%" (set par=/?) else set par=-help
echo.
%curCmds% %par%
::echo %errorlevel%
echo.
echo Fine guida!
echo In caso non ci fosse la guida riprova
echo E se dopo due tentativi non la mostra -,- mi spiace, non so come mostrarla \_:,:_/
echo.
::echo %prevCmds% / %curCmds%
set prevCmds=%curCmds%
echo Premi un tasto per tornare al menu...
echo.
pause >nul
goto return

:pingAll
set /p ip="ip(no trailing '.'): "
for /L %%I in (0,1,255) do ping %ip%.%%I
echo Premi un tasto per tornare al menu...
echo.
pause >nul
goto return

:pingTrace
set /p ip=ip:
ping %ip%
traceroute %ip%	
echo Premi un tasto per tornare al menu...
echo.
pause >nul
goto return

:end
echo.
echo Premi un tasto per terminare
pause >nul
pause >nul
echo Mi spiace sia un pochino difficile uscire....
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
echo ma sei ancora qua?
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
echo che perseveranza
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
exit /B 0
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
pause >nul
echo Spiace, ma cosa sbirci?
pause >nul
exit