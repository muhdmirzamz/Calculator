CXX=g++
CFLAGS=-c -Wall -std=c++11
LFLAGS=-Wall -o
VPATH=Calculator

CalculatorApp: main.o MainMenu.o MathsOp.o
	$(CXX) $(LFLAGS) $@ $^

MathsOp.o: MathsOp.cpp
	$(CXX) $(CFLAGS) $^
	@echo "MathsOp.cpp compiled correctly"

MainMenu.o: MainMenu.cpp
	$(CXX) $(CFLAGS) $^
	@echo "MainMenu.cpp compiled correctly"

main.o: main.cpp
	$(CXX) $(CFLAGS)  $^
	@echo "main.cpp compiled correctly"

clean:
	rm -rf *.o CalculatorApp