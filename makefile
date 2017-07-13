all:
	g++ -g -std=c++11 main.cpp agent.cpp map.cpp item.cpp -o Survival -lm

run:
	./Survival

winrun: 
	.\Survival.exe

buildrun:
	g++ -std=c++14 main.cpp agent.cpp map.cpp  item.cpp -o Survival && ./Survival

winbuildrun:
	g++ main.cpp agent.cpp map.cpp  item.cpp -o Survival && .\Survival.exe