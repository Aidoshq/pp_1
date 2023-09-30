#include <bits/stdc++.h>
using namespace std;


bool check_palindrom(string s){
    for(int i = 0; i < s.size();i++){
        if(s[i] != s[s.size() -i -1]){
            return false;
        }
    }
    return true;

}
int main(){
    string s;
    cin >> s ;
    bool boolka = true;
    for(int i = 0; i < s.size();i++){
        if(s[i] != s[s.size() - i -1]){
            boolka = false;
        }
    }
    if(boolka){
        cout << "YES";
    }else {
        boolka = true;
        s += s[0];
        for(int i = 0; i < s.size();i++){
        if(s[i] != s[s.size() - i -1]){
            boolka = false;
        }
    }
        if(boolka){
        cout << "YES";
         }else {
        cout << "NO";}
    }
    return 0 ;
}