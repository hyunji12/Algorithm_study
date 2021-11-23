#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b){
    return a > b;
}

int main(){
    int numW, numK;
    int arrW[10];
    int arrK[10];

    for (int i=0; i<10; i++){
        cin >> numW;
        arrW[i] = numW;
    }
    for (int i=0; i<10; i++){
        cin >> numK;
        arrK[i] = numK;
    }
    sort(arrW, arrW+10, desc);
    sort(arrK, arrK+10, desc);
    
    cout << arrW[0] + arrW[1] + arrW[2] << " ";
    cout << arrK[0] + arrK[1] + arrK[2] << "\n";
}