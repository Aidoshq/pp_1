#include <bits/stdc++.h>

using namespace std;
//j
int main(){
    string s;
    cin >> s;
    string l;
    l = s;
    int cnt = 0;
    reverse (s.begin(),s.end());
    for(int i = s.size() - 1; i >= 0;--i){
        if (s[i] == l[i]){
            cnt++;
        }
    }
    int j = 1;
    int h = cnt;
    string d,p;
    if (cnt == s.size()){
        while(h != 0){
            for (int i = 0; i < s.size() -  j;i++ ){
                d = d + s[i];
            }
            p = d;
            reverse(d.begin(),d.end());
            if (p == d){
                j++;
                d.clear();
            }
            h--;
            if (p != d){
                h = 0;
            }
        }
        cout << d.size();
    }
    else {
        cout << s.size();
    }
    return 0;
 }