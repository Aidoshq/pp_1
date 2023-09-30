#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1, a2, a3, b1, b2, b3, money;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> money;

    if (money < a1 * b1 + a2 * b2 + a3 * b3){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
    return 0;
}