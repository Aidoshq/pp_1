#include <bits/stdc++.h>
//r
using namespace std; 
 
int main() { 
 
    string s,t; 
    cin >> s >> t; 
    string res; 
 
    for(size_t i = s.size()-1; i >= 0; --i) { 
        res += s[i]; 
        if(i==-1) { 
            break; 
        } 
    } 
 
    if(s.find(t)==s.size()-1-res.find(t)) { 
        cout << s.find(t); 
    } else if(s.find(t)==string::npos) { 
 
    } else { 
        cout << s.find(t) << " " << s.size()-1-res.find(t); 
    } 
 
    return 0; 
}