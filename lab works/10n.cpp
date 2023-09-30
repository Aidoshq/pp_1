#include <bits/stdc++.h>

using namespace std;
bool foo(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        if(v[i]!=v[v.size()-i-1]){
            return false;
        }

    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        v.push_back(k);

    }
    sort(v.begin(),v.end());
    do{
     if(foo(v)){
        for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
       
        }
        return 0;
    }}
    while(next_permutation(v.begin(),v.end()));
        cout<<"Impossible";
    
    
    
    return 0;
    
}