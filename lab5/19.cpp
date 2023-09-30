#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin >> s ;
    bool boolka = true;
    int last = s[0];
    for(int i = 0; i < s.size();i++){
        char num1 = s[i];
        int num = num1;
        if(last > num){
            boolka = false;
        }
        last = num;
    }


    if(boolka){
        cout << "YES";
    }else cout << "NO";

    return 0;
}