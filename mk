# simple makefile
# define target, its dependencies and files

HEADS= Machine.h Parser.h Instruction.h Alpha.h String.h Char.h Number.h Real.h Numeric.h

run: Machine.o Parser.o Instruction.o Alpha.o String.o Char.o Number.o Real.o Numeric.o $(HEADS)
	g++ -o -std=c++14 Machine.o Parser.o Instruction.o Alpha.o Number.o String.o Char.o Numeric.o Real.o

Machine.o: Machine.cpp $(HEADS)
	g++ -c -std=c++14 Machine.cpp

Parser.o: Parser.cpp Parser.h 
	g++ -c -std=c++14 Parser.cpp

Instruction.o: Instruction.cpp Instruction.h
	g++ -c -std=c++14 Instruction.cpp

VAR.o: VAR.cpp VAR.h
	g++ -c -std=c++14 VAR.cpp

Alpha.o: Alpha.cpp $(HEADS)
	g++ -c -std=c++14 Alpha.cpp

Number.o: Number.cpp $(HEADS)
	g++ -c -std=c++14 Number.cpp

Char.o: Char.cpp $(HEADS)
	g++ -c -std=c++14 Char.cpp

String.o: String.cpp $(HEADS)
	g++ -c -std=c++14 String.cpp

Real.o:	Real.cpp $(HEADS)
	g++ -c -std=c++14 Real.cpp

Numeric.o: Numeric.cpp $(HEADS)
	g++ -c -std=c++14 Numeric.cpp