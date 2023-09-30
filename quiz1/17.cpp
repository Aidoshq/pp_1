#include <iostream>
using namespace std;

int main(){
    string n;
    cin >> n;

    int product = 1;
    int sum = 0;
    for (int i = 0; i < n.size(); i ++){
        product *= int(n[i] - 48);
        sum += int(n[i] - 48);
    }
    cout << product + sum;
    return 0;
}