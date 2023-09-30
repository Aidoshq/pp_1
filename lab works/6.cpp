#include <bits/stdc++.h>


using namespace std;

int main () {
int n ;
cin>>n;
vector <int> a(n);
for (int i=0 ; i<n ; i++) {
    cin>>a[i];
}
int x , y ;
cin>>x>>y;
a.insert(a.begin()+x , y) ;
for (int i=0 ; i<a.size() ; i++) {
    cout<<a[i]<<" ";
}




    return 0;
}