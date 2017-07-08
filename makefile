all:
	g++ -std=c++14 main.cpp agent.cpp map.cpp item.cpp -o Survival

run:
	./Survival

buildRun:
	g++ -std=c++14 main.cpp agent.cpp map.cpp  item.cpp -o Survival && ./Survival