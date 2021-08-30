#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[3];

    for (int i=0; i<3; i++){
        int n;
        cin >> n;

        arr[i] = n;
    }
    sort(arr, arr+3);

    for (int i=0; i<3; i++){
        cout << arr[i] << " ";
    }
    return 0;
}