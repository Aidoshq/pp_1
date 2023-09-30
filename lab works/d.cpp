#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin>>n;
int k;
cin>>k;
vector <int> a(n) ;
for (int i=0 ; i<n ; i++) {
    cin>>a[i];
}

int cnt=0;

sort (a.begin() , a.end());
for (int i=0 ; i<a.size() ; i++) {
    if (a[i]==k) {
        cnt++;
    }
} cout<<cnt;

    return 0;
}