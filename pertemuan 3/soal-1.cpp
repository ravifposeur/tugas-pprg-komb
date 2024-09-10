#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    float x1, x2;
    float disc;

    cout << "Masukkan angka untuk a: ";
    cin >> a;
    cout << "Masukkan angka untuk b: ";
    cin >> b;
    cout << "Masukkan angka untuk c: ";
    cin >> c;
    
    disc = pow(b,2) - (4*a*c);
    if(disc > 0){
        x1 = ((-b) + sqrt(disc))/2*a;
        x2 = ((-b) - sqrt(disc))/2*a;
        cout << "x1 = " << setprecision(2) << fixed << x1 << endl; 
        cout << "x2 = " << setprecision(2) << fixed << x2 << endl;
        return 0;
    } else if (disc == 0){
        x1 = (-b)/2*a;
        cout << "x = " << setprecision(2) << fixed << x1 << endl; 
        return 0;
    } else {
        cout << "Tidak ada akar riil (semua bilangan kompleks)";
        return 0;
    }
}