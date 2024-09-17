#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    int gross, tax, installment, insurance, net;

    cout << "Input the Employee Data" << endl << "----------------------------------"<< endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Gross Salary: ";
    cin >> gross;
    cout << "Installment: ";
    cin >> installment;
    cout << "Insurance: ";
    cin >> insurance;
    cout <<"\n";

    tax = (20*gross)/100;
    net = gross-(tax+insurance+installment);

    //output dari program
    cout << "Payslip for Employee" << endl << "----------------------------------"<< endl;
    cout << "Name: " << name << endl;
    cout << "Gross Salary: Rp" << gross << endl;
    cout << "Tax (20%): Rp" << tax << endl;
    cout << "Installment: Rp" << installment << endl;
    cout << "Insurance: Rp" << insurance << endl;
    cout << "Net Salary: Rp" << net << endl;
}