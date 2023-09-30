#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> set;
    for (int i = 0; i < 3; i ++){
        int k;
        cin >> k;
        set.insert(k);
    }

    if (set.size() == 2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}