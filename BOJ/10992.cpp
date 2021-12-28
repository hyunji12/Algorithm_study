#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int i=0; i<N; i++){
        if (i == N-1){
            for (int s=0; s<2*N-1; s++){
                cout << "*";
            }
            cout << endl;
            break;
        }
        for (int k=1; k<N-i; k++){
            cout << " ";
        }
        cout << "*";
        if (i==0){
            cout << endl;
            continue;
        }
        for (int j=1; j<=2*i-1; j++){
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
}