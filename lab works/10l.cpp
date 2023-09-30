#include <bits/stdc++.h>

using namespace std;

int foo(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum; 
}
int main(){
    int n;
    cin>>n;
    vector<long long> a(foo(n));
    for(int i=1; i<=n; i++){
        fill(a.begin()+foo(i-1),a.begin()+foo(i),i);
    }
    
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;
}