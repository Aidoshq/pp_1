#include <bits/stdc++.h>

using namespace std;

bool foo(pair<string,float>p, pair<string,float> p2){
    if(p.second==p2.second){

        if(p.first<p2.first){
            return false;
        }
        return true;
    }
    if(p.second>p2.second){
        return true;
    }
    return false;
}
int main() {
    int n;
    cin>>n;
    map<string,float> m;
    int sum=0;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int k;
        cin>>k;
        sum+=k;
        m[s]+=k;
       
    }
    map<string,float> :: iterator f=m.begin();
    vector<pair<string,float> > v;

    for(; f!=m.end(); f++){
        m[f->first]=(f->second*100)/sum;
        v.push_back(make_pair(f->first,f->second));
        
    }
    sort(v.begin(),v.end(),foo);
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<"%"<<endl;
    }



    return 0;
}