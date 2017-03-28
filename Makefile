lab2_main:lab2_class.o lab2_main.o
	g++ -o lab2_main lab2_class.o lab2_main.o

lab2_class.o:lab2_class.h lab2_class.cpp
	g++ -c lab2_class.h lab2_class.cpp

lab2_main.o:lab2_class.h lab2_main.cpp
	g++ -c lab2_class.h lab2_main.cpp

clean:
	rm -f lab2_main.o
	rm -f lab2_class.o
	rm -f lab2_class.h.gch

