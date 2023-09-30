#include <bits/stdc++.h>
//stepik 1
using namespace std;

int main () {
int n;
cin>>n;
vector <pair<int , int>> a(n);
for (int i=0 ; i<n ; i++) {
    int t;
    cin>>t;
    a[i]={t , i} ;

}
sort (a.begin() , a.end());
for (auto f : a) {
    cout<<f.second<<" ";
}
    return 0;
}