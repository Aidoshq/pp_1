#include <bits/stdc++.h>

using namespace std;

int main () {
 int n;
    cin>>n;
    vector<pair<int,int> > a;

    
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        pair<int,int> q;
        q.first=x+y;
        q.second=i+1;
        a.push_back(q);
    }
    sort(a.begin(),a.end());
    
    for(int i=0; i<a.size(); i++){

        cout<<a[i].second<<" ";
    }

    return 0;
}