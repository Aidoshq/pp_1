#include <bits/stdc++.h>

using namespace std;

int x=-1;
long long foo(){
    
    x++;
    long long ans=1;
    for(int i=0; i<x; i++){
        ans*=x;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<long long>a(n+1);
    generate(a.begin(), a.end(), foo);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;
}