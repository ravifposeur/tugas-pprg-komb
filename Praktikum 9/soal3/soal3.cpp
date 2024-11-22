#include <bits/stdc++.h>
using namespace std;

// Struktur untuk menyimpan data siswa
struct Student {
    string nisn;
    string name;
    int score;
};

// Fungsi untuk membaca data siswa langsung dari program
void readData(vector<Student>& students) {
    students = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };
}

// Fungsi untuk mengubah nama siswa dengan nilai 60 menjadi "Joko"
void updateNames(vector<Student>& students) {
    for (auto& student : students) {
        if (student.score == 60) {
            student.name = "Joko";
        }
    }
}

// Fungsi untuk menampilkan data siswa
void displayData(const vector<Student>& students, ostream& out) {
    for (const auto& student : students) {
        out << student.nisn << " " << student.name << " " << student.score << endl;
    }
}

int main() {
    // Membaca data siswa
    vector<Student> students;
    readData(students);

    // Update nama siswa dengan nilai 60
    updateNames(students);

    // Expected output
    string expectedOutput =
        "9960312699 Handi Ramadhan 90\n"
        "9963959682 Rio Alfandra 55\n"
        "9950310962 Ronaldo Valentino Uneputty 80\n"
        "9970272750 Joko 60\n"
        "9970293945 Alivia Rahma Pramesti 70\n"
        "9952382180 Ari Lutfianto 65\n"
        "9965653989 Joko 60\n";

    // Generate output
    stringstream generatedOutput;
    displayData(students, generatedOutput);

    // Output hasil dan perbandingan
    if (generatedOutput.str() == expectedOutput) {
        cout << "Test case passed!" << endl;
    } else {
        cout << "Test case failed!" << endl;
        cout << "Generated Output:\n" << generatedOutput.str() << endl;
        cout << "Expected Output:\n" << expectedOutput << endl;
    }

    return 0;
}
