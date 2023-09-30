#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
    cin>>n;
    vector <int> a;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    vector <int> q;
    int x;
    for(int i=0;i<n;i++)
    {
        for(int s=i+1;s<n;s++)
        {
            x = a[i] ^ a[s];
            q.insert(q.end(), x);

        }
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    int cnt =0;
    for(int i=0;i<q.size();i++)
    {
        for(int s=0;s<a.size();s++)
        {
            if(q[i] == a[s]) cnt++;
        }
    }
    cout << cnt;

    return 0;
}