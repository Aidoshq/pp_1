#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin>>n;
vector <int> a(n);
for (int i=0 ; i<n ; i++) {
    cin>>a[i];
}

int k;
cin>>k;

for (int i=0 ; i<n ; i++) {
    if (k==a[i]) {
        cout<<"Yes";
        return 0;
    }
}
        cout<<"No";





    return 0;
}