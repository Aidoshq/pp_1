#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a1;
    vector<int>a2;
    for(int i=0; i<n; i++){
        int b;
        cin>>b;
        a1.push_back(b);
    }
    a1.erase(unique(a1.begin(),a1.end()),a1.end());
    for(int k=0; k<m; k++){
        int l;
        cin>>l;
        a2.push_back(l);
    }
    a2.erase(unique(a2.begin(),a2.end()),a2.end());
    vector<int>a;
    for(int i=0,k=0; i<a1.size()|| k<a2.size(); i++,k++){
        if(i<a1.size()){
            a.push_back(a1[i]);

        }
        if(k<a2.size()){
            a.push_back(a2[k]);
        }
    }
    a.erase(unique(a.begin(),a.end()),a.end());
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;

}