#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    int arr[4];
    for (int i=0; i<4; i++){
        cin >> num;
        arr[i] = num;
    }
    sort(arr,arr+4);
    cout << arr[0] * arr[2];
    cout << '\n';
}