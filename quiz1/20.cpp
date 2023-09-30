#include <iostream>
using namespace std;

int main(){
    double x, y;
    cin >> x >> y;

    int days = 1;
    while(x < y){
        x = x * 1.1;
        days ++;
    }

    cout << days;


    return 0;
}