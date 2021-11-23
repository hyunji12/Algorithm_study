#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int i=0; i<N; i++){
        for (int j=1; j<N-i; j++){
            cout << " ";
        }
        for (int k=N+1; k>N-i; k--){
            cout << "*";
        }
        cout << endl;
    }
}