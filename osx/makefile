CXX=g++
CFLAGS=-c -g -Wall 
LFLAGS=-Wall -std=c++11  -o
VPATH=Calculator

CalculatorApp: main.o MainMenu.o
	$(CXX) $(LFLAGS) $@ $^

MainMenu.o: MainMenu.cpp 
	$(CXX) $(CFLAGS) $^

main.o: main.cpp 
	$(CXX) $(CFLAGS) $^	

clean:
	rm -rf *.o CalculatorApp

