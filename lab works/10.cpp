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
    for(int j=0;j<k; j++) {
        int min=2345, pos;
        for(int i=0; i<a.size(); i++)
        if(min>a[i]){
            min=a[i];
            pos=i;
        }
        cout<<min<<" ";
        a.erase(a.begin()+pos);
    }

 return 0;
}