#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int i=0; i<N; i++){
        for (int k=0; k<=i; k++){
            cout << "*";
        }
        for (int j=0; j<2*(N-i-1); j++){
            cout << " ";
        }
        for (int t=0; t<=i; t++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i=1; i<N; i++){
        for (int k=0; k<N-i; k++){
            cout << "*";
        }
        for (int j=0; j<2*i; j++){
            cout << " ";
        }
        for (int k=0; k<N-i; k++){
            cout << "*";
        }
        cout << endl;
    }
}