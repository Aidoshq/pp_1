#include <bits/stdc++.h>

using namespace std;

float kairosh(int x1,int x2,int y1,int y2 ){
    
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));

}
int main(){
    int x1,y1;
    cin>>x1>>y1;
    int n;
    cin>>n;
    vector<pair<float,pair<int,int> > >a(n);
    for(int i=0; i<n; i++){
        int x2,y2;
        cin>>x2>>y2;
        a[i].second.first=x2;
        a[i].second.second=y2;
        a[i].first=kairosh(x1,x2,y1,y2);
    
    }
    sort(a.begin(),a.end());
    for(int i=0; i<a.size(); i++) {
        cout<<a[i].second.first<<" "<<a[i].second.second<<endl;
    }
    return 0;
}