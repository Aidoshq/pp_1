#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> a;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        a.insert(k);
    }
    if(n==a.size()){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}