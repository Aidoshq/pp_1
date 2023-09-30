#include <bits/stdc++.h>
using namespace std;

int main(){
    string s , t;
    cin >> s >> t;
    bool boolka = true;
    int cnt = 0;
    
    if(t.size()%s.size() !=0){
        cout << "NO";
        return 0;
    }
    int koef = t.size()/s.size();
    for(int j =0 ; j < koef; j++){
        for(int i = 0; i < s.size() ;i++){
            if(s[i] != t[i + j *(s.size())]){
               
                boolka = false;
            }
            
        }
    }
    if(boolka){
        cout << "YES";
    }else cout << "NO";
    return 0;
}   