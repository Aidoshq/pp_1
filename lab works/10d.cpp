#include <bits/stdc++.h>

using namespace std;
int sum1,sum2;
bool foo(vector<int>a, vector<int>b){
    sum1=0;
    sum2=0;
    for(int i=0; i<a.size(); i++){
        sum1+=a[i];
    }
    for(int i=0; i<b.size();i++){
        sum2+=b[i];
    }
    if(sum1==sum2){
        return (a.size()>b.size())? true : false; 
    }
    return (sum1>sum2)? false : true;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int> > v;
    for(int c=0; c<n; c++){
        int k;
        cin>>k;
        vector<int>q(k);
        for(int i=0; i<k; i++){
            cin>>q[i];
        }
        v.push_back(q);
    }


    
    sort(v.begin(),v.end(),foo);
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
        

    
    return 0;
}