#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin>>n;
vector <int> a(n);

for (int i=0 ; i<n ; i++) {
cin>>a[i];
}

int dif;

sort(a.begin() , a.end()) ;
for (int i=0 ; i<a.size() ; i++) {
dif=a[n-1]-a[0];
cout<<dif;
break;
}



    return 0;
}