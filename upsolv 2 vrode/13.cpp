#include <bits/stdc++.h>

using namespace std;
//i
int main() {
int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n;i++){
        for(int j = 0 ; j < n;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n;i++){
        int maxi= a[i][0];
        for(int j = 0;j < n;j++){
            maxi = max(maxi , a[i][j]);
        }
        for(int j = 0;j < n;j++){
            a[i][j] = maxi;
        }


    }
    for(int i = 0; i < n;i++){
        for(int j = 0;j < n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}