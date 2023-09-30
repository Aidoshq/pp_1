#include<bits/stdc++.h>

using namespace std;
//i
int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    char x;
    cin >> x;
    // ai
    string st ="";
    for(int i = 0;i < s.size();i++){
        bool flag = false;
        for(int j = 0;j < t.size();j++){
            if(s[i] == t[j]){
                flag =true;
                break;
            }
        }
        if(flag){
            st+=x;
           cout << x;
        }else {
            st+= s[i];
            cout << s[i];
        }
    }
    


    return 0;
}