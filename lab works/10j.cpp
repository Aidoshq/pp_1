#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector <int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    reverse(a.begin(),a.end());
    rotate(a.begin(),a.begin()+a.size()-m, a.end());
    
    
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";

    }
    
return 0;
}