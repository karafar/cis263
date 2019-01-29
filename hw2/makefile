MyStack: karadsheh.o main.o
	g++ -std=c++11 -o MyStack main.o karadsheh.o

karadsheh.o: karadsheh.cpp MyStack.h
	g++ -std=c++11 -c karadsheh.cpp

main.o: karadsheh.cpp main.cpp
	g++ -std=c++11 -c main.cpp karadsheh.cpp

run:
	./MyStack

clean:
	rm -f karadsheh.o main.o