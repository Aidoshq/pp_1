#include <bits/stdc++.h>
using namespace std;
int main () {
string s;
cin>>s;
int big=0;
int small=0;
for(int i=0; i<s.size() ; i++) {
    if(s[i]<='Z' && s[i]>='A') {
        big++;
    } else {
        small++;
    }
    
} cout<<small<<" "<<big;



    return 0;
}
//a