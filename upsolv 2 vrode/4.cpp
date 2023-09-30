#include <bits/stdc++.h>
//d
using namespace std;

int main (){
    int n;
    cin >> n;
    int arr[n];
    int max = -12345;
    int cnt = 0;
    int b[1001];
    for (int i = 0;i < 1001;i++){
        b[i] = 0;
    }
    for (int i = 0; i < n;i++){
    cin >> arr[i];
    }
    for (int i = 0; i < n;i++){
        b[arr[i]]++;
    }
    for (int i = 0; i < 1001;i++){
        if(b[i] > max){
            max = b[i];
        }
    }
    for (int i = 1001;i >=0;i--){
        if (b[i] == max){
            cout << i << " ";
        }
    }





    return 0;
}
