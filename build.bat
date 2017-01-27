@echo off
cls

g++ -c Matrix.cpp
g++ -c Keyboard.cpp
g++ -c Random.cpp
g++ -c String.cpp
g++ -c Tokens.cpp
g++ -c ReadFile.cpp
g++ -c WriteFile.cpp
g++ -c Lab02Driver.cpp

g++ -o Lab02.exe Lab02Driver.o ReadFile.o WriteFile.o String.o Tokens.o Keyboard.o Random.o Matrix.o

::runs the .exe
Lab02.exe
out.txt
