Matrix.o: Matrix.cpp Matrix.h
	g++ -c Matrix.cpp

client0.o: client0.cpp
	g++ -c client0.cpp

client0: client0.o Matrix.o
	g++ Matrix.o client0.o -o client0

run0: client0
	./client0

client1.o: client1.cpp
	g++ -c client1.cpp

client1: client1.o Matrix.o
	g++ Matrix.o client1.o -o client1

run1: client1
	./client1

client2.o: client2.cpp
	g++ -c client2.cpp

client2: client2.o Matrix.o
	g++ Matrix.o client2.o -o client2

run2: client2
	./client2

client3.o: client3.cpp
	g++ -c client3.cpp

client3: client3.o Matrix.o
	g++ Matrix.o client3.o -o client3

run3: client3
	./client3 < input3.txt

client4.o: client4.cpp
	g++ -c client4.cpp

client4: client4.o Matrix.o
	g++ Matrix.o client4.o -o client4

run4: client4
	./client4 < input4.txt

client5.o: client5.cpp
	g++ -c client5.cpp

client5: client5.o Matrix.o
	g++ Matrix.o client5.o -o client5

run5: client5
	./client5 < input5.txt

client6.o: client6.cpp
	g++ -c client6.cpp

client6: client6.o Matrix.o
	g++ Matrix.o client6.o -o client6

run6: client6
	./client6 < input6.txt

client7.o: client7.cpp
	g++ -c client7.cpp

client7: client7.o Matrix.o
	g++ Matrix.o client7.o -o client7

run7: client7
	./client7 < input7.txt

client8.o: client8.cpp
	g++ -c client8.cpp

client8: client8.o Matrix.o
	g++ Matrix.o client8.o -o client8

run8: client8
	./client8 < input8.txt

client9.o: client9.cpp
	g++ -c client9.cpp

client9: client9.o Matrix.o
	g++ Matrix.o client9.o -o client9

run9: client9
	./client9 < input9.txt

client10.o: client10.cpp
	g++ -c client10.cpp

client10: client10.o Matrix.o
	g++ Matrix.o client10.o -o client10

run10: client10
	./client10 < input10.txt

client11.o: client11.cpp
	g++ -c client11.cpp

client11: client11.o Matrix.o
	g++ Matrix.o client11.o -o client11

run11: client11
	./client11 < input11.txt

client12.o: client12.cpp
	g++ -c client12.cpp

client12: client12.o Matrix.o
	g++ Matrix.o client12.o -o client12

run12: client12
	./client12 < input12.txt

Equation_solving.o: Equation_solving.cpp
	g++ -c Equation_solving.cpp

client13.o: client13.cpp
	g++ -c client13.cpp

client13: Matrix.o Equation_solving.o client13.o
	g++ Matrix.o Equation_solving.o client13.o -o client13

run13: client13
	./client13 < input13.txt
