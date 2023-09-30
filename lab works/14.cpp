#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin>>n;
set <int> a;
for (int i=0 ; i<n ; i++) {
    int k;
    cin>>k;
    a.insert(k);
}
cout<<a.size()<<" ";

    return 0;
}