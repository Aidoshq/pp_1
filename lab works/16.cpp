#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin>>n;
set <int> a;
for (int i=0 ; i<n ; i++) {
    int q;
    cin>>q;
    a.insert(q);
}

for(auto f=a.begin(); f!=a.end(); f++){
        if(*f%2!=0){
            cout<<*f<<" ";
        }
    }

    return 0;
}