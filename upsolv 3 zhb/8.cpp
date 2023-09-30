#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<string,double> > v(n);
    int i = 0;
    vector<double> w(n);
    double k,l;

    for(int i = 0; i < n;i++){
        string s; cin >> s;
        cin >> k >> l;
         v[i] = make_pair(s,l/k);
         w[i] = l/k;
    }
    sort(w.begin(),w.end());
    for(int j = 0; j < n; j++){
        if(v[j].second == w[n - 1]){
            cout << v[j].first;
            break;
        }
    }
        return 0;
    
}
