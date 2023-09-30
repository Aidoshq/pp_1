#include <bits/stdc++.h>

using namespace std;

int main () {
string s;
    cin>>s;
    stack<char> a;
    reverse(s.begin(),s.end());
    for(int i=0; i<s.size(); i++){
        if(a.empty()){
            a.push(s[i]);
        }
        else if(a.top()=='1' && s[i]=='1'){
            a.pop();

        }
        else{
            a.push(s[i]);
        }
    }
    while(!a.empty()){
        cout<<a.top();
        a.pop();

    }
    return 0;
}