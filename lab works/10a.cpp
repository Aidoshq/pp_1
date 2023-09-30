#include <bits/stdc++.h>

using namespace std;

int main () {

int n;
    cin>>n;
    vector<string>a1;
    vector<int>a2;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int k;
        cin>>k;
        a1.push_back(s);
        a2.push_back(k);
    }
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());
    for(int i=0; i<a1.size(); i++){
        cout<<a1[i]<<" "<<a2[i]<<endl;
        
    }
    return 0;
}