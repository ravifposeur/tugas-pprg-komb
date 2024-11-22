soal2 : soal2.o
	g++ -o soal2 soal2.o 

soal2.o : soal2.cpp
	g++ -c soal2.cpp

.PHONY : run
run : soal2
	./soal2

.PHONY : test
test : soal2
	./soal2

.PHONY : clean
clean :
	rm -f soal2.o