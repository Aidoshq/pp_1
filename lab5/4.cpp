#include <bits/stdc++.h>
using namespace std;
int main () {
string s;
cin>>s;
bool check=1;
for (int i=0 ; i<s.size() ; i++) {
if (s[i]!=s[s.size()-i-1]) {
    check=0;
} 
} if(check) {
    cout<<"YES";
} else {
    cout<<"NO";
}



    return 0;
}