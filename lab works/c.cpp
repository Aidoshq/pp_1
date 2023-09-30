#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin>>n;
vector <int> a(n);
for (int i=0 ; i<n ; i++) {
    cin>>a[i];
}

int cnt=0;
sort(a.begin() , a.end()) ;
for (int i=0 ; i<n-1 ; i++) {
    if(a[i]==a[i+1]) {
cnt++;
a[i+1]=0;
    }
}
cout<<cnt;
    return 0;
}