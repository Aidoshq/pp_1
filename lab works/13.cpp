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
int sum=0;

for(int j=0;j<k; j++) {
        int max=-2345,pos;
        for(int i=0; i<a.size(); i++)
        if(max<a[i]){
            max=a[i];
            pos=i;
        }
        
        a.erase(a.begin()+pos);
        sum+=max;

    }
    cout<<sum;


    return 0;
}