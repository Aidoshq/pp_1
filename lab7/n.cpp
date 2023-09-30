#include <bits/stdc++.h>

using namespace std;

bool foo(int n, int x, int *a, int i ){
    if(i==n){
        return true;
    }
    for(int j=i+1; j<n; j++){
        int dif=abs(a[i]-a[j]);
        if(dif<x){
            return false;
        }
    }
    return foo(n,x,a,i+1);
    }

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(foo(n,x,a,0)){
        cout<<"no";
    }
    else{
        cout<<"cheater";
    }
    return 0;
}