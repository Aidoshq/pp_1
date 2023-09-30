#include <bits/stdc++.h>
//k
using namespace std;

int main(){
    string s;
    cin >> s;
    int otv = 0;
    for(int i = s.size()-1 , k = 0; i >= 0; i--, k++){
        if( s[i] == '1'){
            otv+=pow(2,k);
        }
}
    cout << otv;

    return 0;
}