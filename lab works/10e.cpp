#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    map<string,double> a;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        for(int j=0; j<k; j++){
        string s;
        cin>>s;
        double l;
        cin>>l;
        a[s]+=l;
        sum+=l;
        }
    }
    

    map<string,double> :: iterator f=a.begin();
    for(; f!=a.end(); f++){
        f->second=(f->second/sum)*100;
    }
    map<string,double> :: iterator f2=a.begin();
    for(; f2!=a.end(); f2++){
        cout<<f2->first<<" "<<f2->second<<endl;
    }
    
    return 0;
}