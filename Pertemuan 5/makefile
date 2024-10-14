soal1dan2 : soal1dan2.o
	g++ -o soal1dan2 soal1dan2.o 

soal1dan2.o : soal1dan2.cpp
	g++ -c soal1dan2.cpp

.PHONY : run
run : soal1dan2
	./soal1dan2

.PHONY : test
test : soal1dan2
	./soal1dan2

.PHONY : clean
clean :
	rm -f soal1dan2.o
