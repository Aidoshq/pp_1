#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin>>n;
vector <int> a(n);
for (int i=0 ; i<n ; i++) {
    cin>>a[i];
}

sort(a.begin(),a.end());
    for(int i=n-1; i>=0; i--){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }

    }
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            cout<<a[i]<<" ";
        }
    }

    return 0;
}