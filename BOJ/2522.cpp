#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int i=0; i<N; i++){
        for (int k=1; k<N-i; k++){
            cout << " ";
        }
        for (int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i=1; i<N; i++){
        for (int k=1; k<=i; k++){
            cout << " ";
        }
        for (int j=0; j<N-i; j++){
            cout << "*";
        }
        cout << endl;
    }
}