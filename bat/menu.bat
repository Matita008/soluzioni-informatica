@echo off
echo configurazione scheda di rete: 
ipconfig
@rem pause
cls
echo seleziona app da aprire: 
echo 1: Calcolatrice
echo 2: Prompt dei comandi (qua)
echo 3: Prompt dei comandi (nuova finestra)
echo 4: task manager
echo 5: Blocco note
set /p opzione=Seleziona:  
if %opzione% == 1 calc
if %opzione% == 2 cmd
if %opzione% == 3 Start "" "cmd"
if %opzione% == 4 taskmgr
if %opzione% == 4 notepad
echo hai selezionato l'opzione: %opzione%
pause
exit
