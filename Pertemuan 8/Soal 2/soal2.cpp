#include <bits/stdc++.h>
using namespace std;

// Fungsi rekursif untuk menghitung jumlah elemen
double sumRecursive(int arr[], int n) {
    if (n == 1) {
        return arr[0];  // Basis kasus, jika hanya ada satu elemen
    } else {
        return arr[n - 1] + sumRecursive(arr, n - 1);  // Rekurens
    }
}

// Fungsi untuk menghitung rata-rata dengan rekursi
double averageRecursive(int arr[], int n) {
    if (n == 0) {
        return 0;  // Jika tidak ada elemen, rata-rata adalah 0
    } else {
        return sumRecursive(arr, n) / n;  // Total dibagi jumlah elemen
    }
}

int main() {
    ifstream infile("test.txt");  // Membuka file test.txt
    if (!infile) {
        cerr << "Error opening file test.txt" << endl;
        return 1;
    }

    int n;
    bool all_passed = true;
    int test_case_number = 1;

    // Membaca input dan output yang diharapkan dari test.txt
    while (infile >> n) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            infile >> arr[i];  // Membaca angka ke-i
        }

        double expected_output;
        infile >> expected_output;  // Membaca output yang diharapkan

        double result = averageRecursive(arr, n);
        
        cout << "Test case " << test_case_number << ": ";
        if(result == expected_output) {  
            cout << "Passed" << endl;
        } else {
            cout << "Failed (Expected " << expected_output << ", got " << result << ")" << endl;
            all_passed = false;
        }
        
        test_case_number++;
    }

    infile.close();
    return 0;
}
