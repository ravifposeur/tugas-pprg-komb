soal1 : soal1.o
	g++ -o soal1 soal1.o 

soal1.o : soal1.cpp
	g++ -c soal1.cpp

.PHONY : run
run : soal1
	./soal1

.PHONY : test
test : soal1
	./soal1

.PHONY : clean
clean :
	rm -f soal1.o
	rm -f soal1.exe
