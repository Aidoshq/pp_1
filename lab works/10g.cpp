#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<pair<pair<string,int> , pair<string,int> > ,int > a;
    for(int i=0; i<n; i++){
        pair<pair<string,int> , pair<string,int> > p;
        cin>>p.first.first>>p.first.second>>p.second.first>>p.second.second;
        a[p]=p.first.second+p.second.second;
    }
    map<pair<pair<string,int> , pair<string,int> > ,int > :: iterator f=a.begin();
    for(; f!=a.end(); f++){
        cout<<f->first.first.first<<" "<<"and"<<" "<<f->first.second.first<<" "<<f->second<<endl;
    }
    


    

    return 0;
}