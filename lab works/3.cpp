#include <bits/stdc++.h>

using namespace std;

int main () {
int n ;
cin>>n;
vector <int> a;
for (int i=0 ; i<n ; i++) {
    int k;
    cin>>k;
    a.push_back(k);
}
int x , y;
cin>>x>>y;
reverse(a.begin()+x , a.begin()+y+1);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }



    return 0;
}