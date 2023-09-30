#include <bits/stdc++.h>

using namespace std;

void foo(long long n){
    string s;
    char a;
    while(n>0){
        a=(n%2)+48;
        s+=a;
        n/=2;

    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    }

    int main() {
    int n ;
    cin>>n;
    vector<int>a;
    for(int i=0; i<n; i++){
       int k;
       cin>>k;
       a.push_back(k);
    }
    for_each(a.begin(),a.end(),foo);
    

    return 0;
}