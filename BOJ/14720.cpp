#include <iostream>
using namespace std;

int main(){
    int N, n;
    int cnt = 0;
    cin >> N;

    int arr[N];
    int pattern = 2;

    // 배열 입력받기
    for (int i=0; i<N; i++){
        cin >> n;
        arr[i] = n;
    }

    // Greedy
    for (int i=0; i<N; i++){
        if (arr[i] == 0 && pattern == 2){
            cnt++;
            pattern = 0;
        }
        if (arr[i] == 1 && pattern == 0){
            cnt++;
            pattern = 1;
        }
        if (arr[i] == 2 && pattern == 1){
            cnt++;
            pattern = 2;
        }
    }
    cout << cnt << '\n';
}