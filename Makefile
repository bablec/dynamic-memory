main: main.o mrs.o
	g++ -o main main.o mrs.o
	
main.o: main.cc mrs.h
	g++ -c main.cc
	
mrs.o: mrs.cc mrs.h
	g++ -c mrs.cc
