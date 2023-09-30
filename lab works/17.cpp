#include <bits/stdc++.h>

using namespace std;

string foo(string s){
    for(int i=0; i<s.size(); i++){
        
            s[i]=tolower(s[i]);
        }
    
    return s;
}
int main(){
    string s;
    cin>>s;
    set<char> a;
    s=foo(s);
    for(int i=0; i<s.size(); i++){
       
        a.insert(s[i]);
    }
    cout<<a.size()<<endl;
    set<char> :: iterator f = a.begin();
    for(f; f!=a.end(); f++){
        cout<<*f<<" ";
    }
    return 0;
}