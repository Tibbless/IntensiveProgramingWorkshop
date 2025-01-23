CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic

all: main

main: main.o Point.o
	$(CXX) $(CXXFLAGS) main.o Point.o -o main

Point.o: Point.cpp Point.h 
	$(CXX) $(CXXFLAGS) -c Point.cpp

main.o: main.cpp Point.h 
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f *.o main
