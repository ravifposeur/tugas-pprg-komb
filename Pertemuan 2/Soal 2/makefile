soal2 : soal2.o
	g++ -o soal2 soal2.cpp 

soal2.o : soal2.cpp
	g++ -c soal2.cpp

.PHONY : run
run : soal2
	./soal2

.PHONY : clean
clean :
	del -f soal2.o
