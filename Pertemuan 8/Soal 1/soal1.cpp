#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n == 1) {                          //bilangan pertama pada fibonnaci adalah 0
        return 0;
    } else if (n == 2) {                   //bilangan kedua pada fibonnaci adalah 1
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);    //dilakukan rekursi, yaitu penambahan dua bilangan fibonnaci sebelum n
    }
}

int main() {
    // Membuka file test.txt
    ifstream infile("test.txt"); 
    if (!infile) {
        cerr << "Error opening file test.txt" << endl;
        return 1;
    }

    int n, expected_output;
    bool all_passed = true;

    // Membaca input dan output yang diharapkan dari test.txt
    int test_case_number = 1;
    while (infile >> n >> expected_output) {
        int result = fib(n);
        cout << "Test case " << test_case_number;
        if (result == expected_output) {
            cout << " Passed" << endl;
        } else {
            cout << "Failed (Expected " << expected_output << ", got " << result << ")" << endl;
            all_passed = false;
        }
        test_case_number++;
    }
    infile.close();
    return 0;
}
