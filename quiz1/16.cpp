#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    bool check1 = a + b + c >= 70;
    bool check2 = a + b >= 30;
    bool check3 = c >= 20;

    if (check1 & check2 & check3){
        cout << "YES!";
    }
    else{
        cout << "NO.";
    }

    
    return 0;
}