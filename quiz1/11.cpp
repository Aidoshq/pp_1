#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int d = 0;
    while(n > 0){
        d ++;
        if (d % 7 != 0){
            if (d % 2 == 0){
                n = n - 4;
            }
            else{
                n = n + 3;
            }
        }
    }
    cout << d + 1;
 }