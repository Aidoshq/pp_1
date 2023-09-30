#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin>>n;
map <string , int> a;
for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(a[s]==0){
            a[s]=i+1;
        }
    }
    map <string,int> :: iterator f=a.begin();
    for(;f!=a.end(); f++){
        cout<<f->first<<" "<<f->second<<endl;
    }


    return 0;
}