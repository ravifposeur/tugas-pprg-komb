soal3 : soal3.o
	g++ -o soal3 soal3.o 

soal3.o : soal3.cpp
	g++ -c soal3.cpp

.PHONY : run
run : soal3
	./soal3

.PHONY : test
test : soal3
	./soal3

.PHONY : clean
clean :
	rm -f soal3.o