#include <iostream>
using namespace std;

int main(){
    int change;
    int coin_n = 0;
    cin >> change;

    int c_list[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
    for (int i=0; i<=7; i++){
        coin_n += change/c_list[i];
        change %= c_list[i];
    }
    cout << coin_n << '\n';
}