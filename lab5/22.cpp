#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin >> s ;
    for(int i = 0; i < s.size();i++){
        char num1 = s[i];
        int num = num1;
        if(s[i] == 'z'){
            s[i] = 'a';
        }else s[i] = char(num+1);

    }
    cout << s;

    return 0;
}