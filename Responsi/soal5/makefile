soal5 : soal5.o
	g++ -o soal5 soal5.o 

soal5.o : soal5.cpp
	g++ -c soal5.cpp

.PHONY : run
run : soal5
	./soal5

.PHONY : test
test : soal5
	./soal5

.PHONY : clean
clean :
	rm -f soal5.o