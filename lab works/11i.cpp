#include <bits/stdc++.h>

using namespace std;
bool foo(string s)
{
    string P = s;
    reverse(P.begin(), P.end());
    if (s == P) {
        return true;
    }
    else {
        return false;
}
}
 
int main(){
    string s;
    cin>>s;
    bool check = 0;
    sort(s.begin(),s.end());
    do{
     if(foo(s)==1){
        check = 1;
        }
    }
    while(next_permutation(s.begin() , s.end()));
        if(check) cout<<"ZA WARUDO TOKI WO TOMARE";
        else   cout<<"JOJO";

    
    
    
    return 0;
}