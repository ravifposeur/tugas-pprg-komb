#include <bits/stdc++.h>
using namespace std;

//Program untuk menjalankan problem FizzBuzz
template <typename T>
vector<T> FizzBuzz() {
    vector<T> test;
    for (int i = 1; i <= 100; i++){         //melakukan for loop hingga 100
        if (i % 3 == 0) {                   //bila habis dibagi tiga, maka masuk dalam percabangan if
            if (i % 5 == 0) {               //bila habis dibagi tiga & lima, maka masuk dalam percabangan nested if
                test.push_back("FizzBuzz"); //memasukan string "FizzBuzz"
            } else {                        //bila tidak habis dibagi lima, maka masuk dalam percabangan else
                test.push_back("Fizz");     //memasukan string "Fizz"
            }
        } else if (i % 5 == 0) {            //bila hanya habis dibagi lima, maka masuk dalam percabangan else if
            test.push_back("Buzz");         //memasukan string "Buzz"
        } else {
            test.push_back(to_string(i));   //memasukkan angka asli dalam vector test
        }
    }
    return test;                            //mengembalikan vector test sebagai keluaran dari program
}

//Program untuk menjalankan problem Reversed Vector
template <typename T>
vector<T> ReverseVector(const vector<T>& arr) {
    vector<T> reversed;                                        
    reversed.reserve(arr.size());                           //mengalokasikan memori vector baru dengan vector input untuk optimisasi
    for (auto it = arr.rbegin(); it != arr.rend(); it++){     //melakukan for loop dimulai dari akhir vector sampai awal vector 
        reversed.push_back(*it);                            //memasukan data vector arr secara terbalik ke vector reversed
    }           
    return reversed;                                        //mengembalikan vector sebagai hasil dari program
}

int main() {

    //Melakukan Test File pada program Fizz Buzz
    ifstream fizzBuzzTestFile("FizzBuzzTest.txt");
    string expected_output_line;
    if (!fizzBuzzTestFile) {
        cerr << "Error: Could not open FizzBuzzTest.txt" << endl;
        return 1;
    }
    vector<string> output = FizzBuzz<string>();
    int test_num = 1;
    while (getline(fizzBuzzTestFile, expected_output_line)) {
        istringstream expected_stream(expected_output_line);
        vector<string> expected_output;
        string word;
        while (expected_stream >> word){
            expected_output.push_back(word);
        }
        if (output == expected_output) {
            cout << "Test Fizz Buzz " << test_num << " passed!" << endl;
        } else {
            cout << "Test Fizz Buzz " << test_num << " failed. Expected: ";
            for (const string &val : expected_output){
                cout << val << " ";
            }
            cout << ", Got: ";
            for (const string &val : output){
                cout << val << " ";
            }
            cout << endl;
        }
        test_num++;
    }
    fizzBuzzTestFile.close();

    //Melakukan Test File pada program Fizz Buzz
    ifstream reversedVectorTestFile("ReversedVectorTest.txt");
    vector<int> InputReverse;
    string line;
    if (!reversedVectorTestFile) {
        cerr << "Error: Could not open ReversedVectorTest.txt" << endl;
        return 1;
    }
    test_num = 1;
    while (getline(reversedVectorTestFile, line)) {
        istringstream InputReverse_stream(line);
        InputReverse.clear();
        int num;
        while (InputReverse_stream >> num){
            InputReverse.push_back(num);
        }
        if (getline(reversedVectorTestFile, expected_output_line)){
            istringstream expected_stream(expected_output_line);
            vector<int> expected_output, output;
            while (expected_stream >> num)
                expected_output.push_back(num);
            output = ReverseVector(InputReverse);
            if (output == expected_output) {
                cout << "Test Reversed Vector " << test_num << " passed!" << endl;
                for (int ans : output)
                    cout << ans << " ";
                cout << endl;
            } else {
                cout << "Test Reversed Vector " << test_num << " failed. Expected: ";
                for (int ans : expected_output)
                    cout << ans << " ";
                cout << "\nGot: ";
                for (int ans : output)
                    cout << ans << " ";
                cout << endl;
            }
            test_num++;
        }
    }
    reversedVectorTestFile.close();
    return 0;
}
