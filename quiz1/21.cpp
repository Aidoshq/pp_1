#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n + 1 ; i ++){
        cout << long(pow(2, i)) << endl;
    }


    return 0;
}