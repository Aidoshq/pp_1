#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;

    double x = sqrt(a);
    if (floor(x) == x){
        cout << "Perfecto";
    }
    else{
        cout << "Simple";
    }
    return 0;
} 