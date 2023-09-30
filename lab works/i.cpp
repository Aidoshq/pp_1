#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin>>n;
map <string , int> a;
for (int i=0 ; i<n ; i++) {
     string s;
        cin>>s;
        if(a[s]==0){
            cout<<"new user added"<<endl;
            a[s]=1;
        }
        else{
            cout<<"user already exists"<<endl;
        }
}


    return 0;
}