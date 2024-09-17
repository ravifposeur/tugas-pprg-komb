#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans;
    cout << "Masukan Bilangan : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        ans += i;
    }
    cout << "Jumlahannya adalah : " << ans;
    return 0;
}