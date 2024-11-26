#include <bits/stdc++.h>
using namespace std;
double pi = M_PI;
int countTestCase = 0;

//Hitung luas lingkaran
double hitungLuasLingkaran(double r, double pi){
    double luasLingkaran = pi*pow(r, 2);
    return round(luasLingkaran * 100) / 100;
}
//Subprogram test case pertama
void testCase1(){
    double r = 20;
    double expectedOutput = 1256.64;
    double generatedOutput = hitungLuasLingkaran(r, pi);
    if(expectedOutput == generatedOutput){
        countTestCase++;
        cout << "Test case 1 passed!\n";
    } else {
        cout << "Test case 1 failed!\n";
        cout << "Keluaran yang diharapkan: " << expectedOutput << endl;
        cout << "Keluaran yang sebenarnya: " << generatedOutput << endl;
    }
}

//Subprogram test case pertama
void testCase2(){
    double r = 14;
    double expectedOutput = 615.75;
    double generatedOutput = hitungLuasLingkaran(r, pi);
        if(expectedOutput == generatedOutput){
        countTestCase++;
        cout << "Test case 2 passed!\n";
    } else {
        cout << "Test case 2 failed!\n";
        cout << "Keluaran yang diharapkan: " << expectedOutput << endl;
        cout << "Keluaran yang sebenarnya: " << generatedOutput << endl;
    }
}

//Subprogram test case pertama
void testCase3(){
    double r = 35;
    double expectedOutput = 3848.45;
    double generatedOutput = hitungLuasLingkaran(r, pi);   
    if(expectedOutput == generatedOutput){
        countTestCase++;
        cout << "Test case 3 passed!\n";
    } else {
        cout << "Test case 3 failed!\n";
        cout << "Keluaran yang diharapkan: " << expectedOutput << endl;
        cout << "Keluaran yang sebenarnya: " << generatedOutput << endl;
    }
}

int main(){

    testCase1();
    testCase2();
    testCase3();

    //Jika memenuhi semua test case, maka program akan mengeluarkan keluaran tertentu
    if(countTestCase == 3){
        cout << "All of the test case is passed, program sucessfully run!";
    }
}