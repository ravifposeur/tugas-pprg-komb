#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, maks;
    cout << "Masukkan bilangan pertama: ";
    cin >> a; 
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << "Masukkan bilangan ketiga: ";
    cin >> c;
    maks = a;

    if(b > maks){
        maks = b;
    }
    if(c > maks){
        maks = c;
    }

    cout << "Bilangan terbesar adalah: " << maks;
    return 0;

}