#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    float x1, x2;
    float disc;

    cout << "Input the value of a: ";
    cin >> a;
    cout << "Input the value of b: ";
    cin >> b;
    cout << "Input the value of c: ";
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
        cout << "**There are no real roots (roots are complex)**";
        return 0;
    }
}