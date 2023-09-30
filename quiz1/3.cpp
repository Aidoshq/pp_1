#include <bits/stdc++.h>
using namespace std;
int main (){
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    if (x + y < a + b){
        cout << "No"; 
    }
    else{
        if (x < a){
            cout << "No";
        }
        else{
            if (y < b){
                if (b - y > x - a){
                    cout << "No";
                }
                else{
                    cout << "Yes";
                }
            }
            else{
                cout << "Yes";
            }
        }
    }
    return 0;
}