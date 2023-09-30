#include <bits/stdc++.h>

using namespace std; 
 //q
int main() { 
 
    int n; 
    cin >> n; 
    string s[n]; 
 
    for(int i = 0; i < n; i++) { 
        cin >> s[i]; 
    } 
 
    string ss = "@gmail.com"; 
    string res; 
 
    for(int i = 0; i < n; i++) { 
        if(s[i].find(ss) != string::npos) { 
            s[i].erase(s[i].end()-10,s[i].end()); 
            cout << s[i] << endl; 
        } 
    } 
 
    return 0; 
}