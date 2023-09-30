#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,set<int> > a;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int l;
        cin>>l;
        a[s].insert(l);
    }
    map<string,set<int>  > :: iterator f=a.begin();
    for(; f!=a.end(); f++){
        cout<<f->first<<" ";

    if(f->second.size()<3){
        cout<<"NO BONUS"<<endl;
    }
    else{
        cout<<" "<<"+1"<<endl;
    }
    }

    
    return 0;
}