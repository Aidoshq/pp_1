#include <bits/stdc++.h>
using namespace std;
int main () {
string s , t;
    cin >> s >> t;
    int cnt = 0;
    bool check= false;
    for(int i = 0; i < s.size();i++){
        for( int j = 0 ; j < t.size();j++ ){
            if(cnt == t.size()){
                break;
            }
            if(s[i+j] == t[j]){
                cnt++;
            }else {
                cnt = 0;
            }
            
        }
        if(cnt == t.size()){
                break;
            }
        
    }
    if(cnt == t.size()){
        cout << "YES";
    }   else { cout << "NO";
    }


    return 0;
}