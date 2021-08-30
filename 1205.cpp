#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num, new_score, p;
    int arr[101];

    cin >> num >> new_score >> p;

    for (int i=0; i<num; i++){
        cin >> arr[i];
    }

    if (num == p && arr[num-1] >= new_score){
        cout << -1 << '\n';
    }
    else {
        int rank = 1;
        for (int i=0; i<num; i++){
            if (arr[i] > new_score) rank++;
            else break;
        }
        cout << rank << '\n';
    }
    return 0;

    
}