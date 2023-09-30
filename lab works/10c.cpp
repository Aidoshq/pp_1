#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> a;
    for(int i=0; i<s.size(); i++){
        if(a.empty()){
            a.push(s[i]);
        }
        else if(a.top()=='1' && s[i]=='6'){
            a.pop();
        }
        else if(a.top()=='2' && s[i]=='5'){
            a.pop();
        }
        else if(a.top()=='3' && s[i]=='6'){
            a.pop();
        }
        else if(a.top()=='4' && s[i]=='9'){
            a.pop();
        }
        else if(a.top()=='6' && s[i]=='4'){
            a.pop();
        }
        else if(a.top()=='8' && s[i]=='1'){
            a.pop();
        }
        else{
            a.push(s[i]);
        }
    }
    if(a.empty()){
        cout<<"Stack is empty";
        return 0;
    }
   
    while(!a.empty()){
        cout<<a.top();
        a.pop();
    
    }

     
    return 0;


}