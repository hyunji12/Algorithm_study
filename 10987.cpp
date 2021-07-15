#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string arr;
    cin >> arr;

    int count = 0;
    for (int i=0; i<arr.length(); i++){
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
