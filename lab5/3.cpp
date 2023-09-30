#include <bits/stdc++.h>
using namespace std;
int main () {
string s,t;
cin>>s>>t;
int cnt=0;
for (int i=0; i<s.size() ; i++) {
    for (int j=0 ; j<s.size() ; j++) {
        if (s[i]==t[j]) {
            cnt++;
        } else {
            cnt=0;
        }
    } 
}  if(cnt=t.size()) {
    cout<<"Yes";
} else {
    cout<<"No";
}




    return 0;
}