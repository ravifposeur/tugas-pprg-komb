soal1 : soal1.o
	g++ -o soal1 soal1.o 

soal1.o : soal1.cpp
	g++ -c soal1.cpp -o soal1.o

.PHONY : run
run : soal1
	./soal1

.PHONY : clean
clean :
	del -f soal1.o
	del -f soal1.exe
