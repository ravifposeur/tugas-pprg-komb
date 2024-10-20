#include <bits/stdc++.h>
using namespace std;

struct data {
    string kode;
    string nama;
    double harga;
    double jumlah;
};

void nilaiMasukan(data items[], int n, istream &input) {
    for (int i = 0; i < n; i++) {
        input >> items[i].kode;
        input >> items[i].nama;
        input >> items[i].harga;
        input >> items[i].jumlah;
    }
}

double hitungJumlah(const data Barang[], int n) {
    double totalBarang = 0;
    for (int i = 0; i < n; i++) {
        totalBarang += Barang[i].jumlah;
    }
    return totalBarang;
}

double hitungHarga(const data Barang[], int n) {
    double totalHarga = 0;
    for (int i = 0; i < n; i++) {
        totalHarga += (Barang[i].harga * Barang[i].jumlah);
    }
    return totalHarga;
}

double hitungRerata(double jumlah, double harga) {
    double totalRerata = harga / jumlah;
    return totalRerata;
}

int main() {
    ifstream inputFile("test.txt");
    if (!inputFile) {
        cerr << "Error: Could not open test.txt" << endl;
        return 1;
    }

    int testNumber = 1;
    while (true) {
        int n;
        inputFile >> n;
        if (inputFile.eof()) {
            break;
        }
        if (n > 50) {
            cout << "Jumlah barang melebihi batas maksimal!" << endl;
            continue;
        }

        data items[50];
        nilaiMasukan(items, n, inputFile);

        double totalQuantity = hitungJumlah(items, n);
        double totalPrices = hitungHarga(items, n);
        double averagePrice = hitungRerata(totalQuantity, totalPrices);
        double expectedTotalQuantity, expectedAveragePrice;
        inputFile >> expectedTotalQuantity;
        inputFile >> expectedAveragePrice;

        if (totalQuantity == expectedTotalQuantity && averagePrice == expectedAveragePrice) {
            cout << "Test case " << testNumber << " passed!" << endl;
        } else {
            cout << "Test case " << testNumber << " failed." << endl;
            cout << "Expected Total Quantity: " << expectedTotalQuantity << ", Got: " << totalQuantity << endl;
            cout << "Expected Average Price: " << expectedAveragePrice << ", Got: " << averagePrice << endl;
        }
        testNumber++;
    }

    inputFile.close();
    return 0;
}
