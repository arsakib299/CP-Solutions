@echo off

git add .

for /f "delims=" %%i in ('git diff --cached --name-only') do set filename=%%i

git commit -m "Solved %filename%"

git push

pause