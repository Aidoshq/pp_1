#include <bits/stdc++.h>
using namespace std;
int main () {
string s , t;
cin>>s>>t;
bool check=1;
for (int i=0 ; i<s.size() ; i++) {
    if (s[i]!=t[i]) {
        check=0;
    }
} if (check) {
    cout<<"YES";
}  else {
    cout<<"NO";
}



    return 0;
}