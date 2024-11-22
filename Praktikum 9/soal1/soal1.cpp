#include <bits/stdc++.h>
using namespace std;

// Struktur untuk menyimpan data siswa
struct Student {
    string nisn;
    string name;
    int score;
};

// Fungsi untuk menampilkan data
void displayData(const vector<Student>& students, ostream& out) {
    for (const auto& student : students) {
        out << student.nisn << " " << student.name << " " << student.score << endl;
    }
}

// Insertion Sort
void insertionSort(vector<Student>& students, bool sortByNisn) {
    for (size_t i = 1; i < students.size(); i++) {
        Student key = students[i];
        int j = i - 1;
        while (j >= 0 && ((sortByNisn && students[j].nisn > key.nisn) ||
                          (!sortByNisn && students[j].score > key.score))) {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = key;
    }
}

// Selection Sort
void selectionSort(vector<Student>& students, bool sortByNisn) {
    for (size_t i = 0; i < students.size() - 1; i++) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < students.size(); j++) {
            if ((sortByNisn && students[j].nisn < students[minIndex].nisn) ||
                (!sortByNisn && students[j].score < students[minIndex].score)) {
                minIndex = j;
            }
        }
        swap(students[i], students[minIndex]);
    }
}

// Bubble Sort
void bubbleSort(vector<Student>& students, bool sortByNisn) {
    for (size_t i = 0; i < students.size() - 1; i++) {
        for (size_t j = 0; j < students.size() - i - 1; j++) {
            if ((sortByNisn && students[j].nisn > students[j + 1].nisn) ||
                (!sortByNisn && students[j].score > students[j + 1].score)) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}

int main() {
    // Data input langsung dalam program
    vector<Student> students = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };

    // Sorting berdasarkan NISN menggunakan Insertion Sort
    vector<Student> sortedByNisn = students;
    insertionSort(sortedByNisn, true);

    // Sorting berdasarkan Nilai menggunakan Selection Sort
    vector<Student> sortedByScoreSelection = students;
    selectionSort(sortedByScoreSelection, false);

    // Sorting berdasarkan Nilai menggunakan Bubble Sort
    vector<Student> sortedByScoreBubble = students;
    bubbleSort(sortedByScoreBubble, false);

    // Expected output
    string expectedOutput = R"(Hasil Insertion Sort (NISN):
9950310962 Ronaldo Valentino Uneputty 80
9952382180 Ari Lutfianto 65
9960312699 Handi Ramadhan 90
9963959682 Rio Alfandra 55
9965653989 Arief Budiman 60
9970272750 Achmad Yaumil Fadjri R. 60
9970293945 Alivia Rahma Pramesti 70
Hasil Selection Sort (Nilai):
9963959682 Rio Alfandra 55
9970272750 Achmad Yaumil Fadjri R. 60
9965653989 Arief Budiman 60
9952382180 Ari Lutfianto 65
9970293945 Alivia Rahma Pramesti 70
9950310962 Ronaldo Valentino Uneputty 80
9960312699 Handi Ramadhan 90
Hasil Bubble Sort (Nilai):
9963959682 Rio Alfandra 55
9970272750 Achmad Yaumil Fadjri R. 60
9965653989 Arief Budiman 60
9952382180 Ari Lutfianto 65
9970293945 Alivia Rahma Pramesti 70
9950310962 Ronaldo Valentino Uneputty 80
9960312699 Handi Ramadhan 90
)";

    // Generate hasil
    stringstream generatedOutputStream;
    generatedOutputStream << "Hasil Insertion Sort (NISN):" << endl;
    displayData(sortedByNisn, generatedOutputStream);

    generatedOutputStream << "Hasil Selection Sort (Nilai):" << endl;
    displayData(sortedByScoreSelection, generatedOutputStream);

    generatedOutputStream << "Hasil Bubble Sort (Nilai):" << endl;
    displayData(sortedByScoreBubble, generatedOutputStream);

    string generatedOutput = generatedOutputStream.str();

    // Perbandingan hasil
    if (generatedOutput == expectedOutput) {
        cout << "Test case passed!" << endl;
    } else {
        cout << "Test case failed!" << endl;
        cout << "Generated Output:" << endl;
        cout << generatedOutput;
        cout << "Expected Output:" << endl;
        cout << expectedOutput;
    }

    return 0;
}
