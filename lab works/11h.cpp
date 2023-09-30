#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string q="";
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<'z'){
            q[i]+=32;
        }
    }
    for(int i=0; i<s.size(); i++){
        s[i]=char((s[i]-'A'+n)%26+65);
    }
    cout<<s;



    return 0;
}