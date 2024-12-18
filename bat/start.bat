@echo off
if "%1" == "" goto empty
@rem apre %1 con tutti i parametri inseriti durante la chiamata a start eccetto per %0 & %1
%*
goto end
:empty
echo.
echo ERRORE!
echo.
echo IL primo parametro e' nullo!
echo.
pause>>nul
:end