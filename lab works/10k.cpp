#include <bits/stdc++.h>

using namespace std;
bool foo(int n){
    if(n==0 || n==1 || n==-1){
        return false;
    }
    if(n<0){
        n*=-1;
    }
    for(int i=2; i<n; i++){
        if(n%i==0) 
        return false;
        }
    
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    
    cout<<count_if(a.begin(),a.end(),foo);
    
    return 0;
}