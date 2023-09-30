#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; 
    getline(cin ,s);
    int k;
    cin >> k;
    char a[k];
    int cnt[k];
    for(int i = 0;i < k;i++){
        cin >> a[i];
        cnt[i] = 0;
    }
    // ai
    sort(a , a+k);

    for(int i = 0;i < s.size();i++){
        for(int j = 0;j < k;j++){
            if( s[i] == a[j]){
                cnt[j]++;
                // cout << s[i] << " ";
            }
        }
    }
    for(int i = 0; i < k;i++){
        cout << a[i] << " - " << cnt[i] << endl;
    }
    

    return 0;
}