#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    bool checker1 = y3 <= y1 & y3 >= y2;
    bool checker2 = x3 >= x1 & x3 <= x2;

    if (checker1 & checker2){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}