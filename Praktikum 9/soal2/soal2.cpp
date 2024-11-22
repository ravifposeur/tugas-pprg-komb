#include <bits/stdc++.h>
using namespace std;

struct Student {
    long long nisn;
    string name;
    long long score;
};

void insertionSort(vector<Student>& students) {
    for (size_t i = 1; i < students.size(); i++) {
        Student key = students[i];
        long long j = i - 1;
        while (j >= 0 && students[j].nisn > key.nisn) {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = key;
    }
}

long long binarySearchByNisn(const vector<Student>& students, const long long& targetNisn) {
    long long left = 0, right = students.size() - 1;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (students[mid].nisn == targetNisn) {
            return mid;
        } else if (students[mid].nisn < targetNisn) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Tidak ditemukan
}

int main() {
    // Data input langsung dalam program
    vector<Student> students = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    // Urutkan berdasarkan NISN
    insertionSort(students);

    // Cari data dengan NISN 9950310962
    long long targetNisn = 9950310962;
    long long index = binarySearchByNisn(students, targetNisn);

    // Generate output
    stringstream generatedOutputStream;
    if (index != -1) {
        generatedOutputStream << "NISN: " << students[index].nisn 
                              << ", Nama: " << students[index].name 
                              << ", Nilai: " << students[index].score << endl;
    } else {
        generatedOutputStream << "Data dengan NISN " << targetNisn << " tidak ditemukan." << endl;
    }

    // Expected output
    string expectedOutput = R"(NISN: 9950310962, Nama: Ronaldo Valentino Uneputty, Nilai: 80
)";

    // Compare generated output with expected output
    if (generatedOutputStream.str() == expectedOutput) {
        cout << "Test case passed!" << endl;
        cout << "Output:" << endl;
        cout << generatedOutputStream.str();
    } else {
        cout << "Test case failed!" << endl;
        cout << "Generated Output:" << endl;
        cout << generatedOutputStream.str();
        cout << "Expected Output:" << endl;
        cout << expectedOutput;
    }

    return 0;
}
