#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if (c > double(a + b) * 0.1){
        cout << "Boris, you are punished!";
    }
    else{
        cout << "You are my sweet baby";
    }
    return 0;
}