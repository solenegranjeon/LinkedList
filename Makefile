all: main

main: main.o Vector.o Node.o List.o
	g++ main.o Vector.o Node.o List.o -o main -g
	
main.o: main.cpp Node.h Vector.h List.h
	g++ -c main.cpp -o main.o -std=c++11 -g

List.o: List.cpp Node.h Vector.h List.h
	g++ -c List.cpp -o List.o -std=c++11 -g
	
Node.o: Node.cpp  Vector.h Node.h
	g++ -c Node.cpp -o Node.o -std=c++11 -g

Vector.o: Vector.cpp Vector.h
	g++ -c Vector.cpp -o Vector.o -std=c++11 -g
 
clean:
	rm *.o
