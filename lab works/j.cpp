#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
    cin>>n;
    map<string , int> a;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int k;
        cin>>k;
        a[s]+=k;
    }
    map <string,int> :: iterator f=a.begin();
    for(;f!=a.end(); f++){
        cout<<f->first<<" "<<f->second<<endl;

    }


    return 0;
}