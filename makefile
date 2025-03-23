main: main.o capacitor.o
	g++ -o main main.o capacitor.o -std=c++11
main.o: main.cpp
	g++ -c main.cpp -std=c++11
capacitor.o: capacitor.cpp
	g++ -c capacitor.cpp -std=c++11
