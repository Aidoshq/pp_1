#include <bits/stdc++.h>
//stepik 2
using namespace std;

void foo(vector <int> a) {
    for (auto f : a) {
        cout<<f<<" ";
    }
    cout<<endl;
}

int main () {
int n ;
cin>>n;
vector <int> a(n);
for (int i=1 ; i<=n ; i++) {
   a[i-1]=i;
}
while (next_permutation(a.begin(), a.end())) {
        foo(a);
    }
    return 0;
}