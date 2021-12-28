#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main(){
    
    for (int i=0; i<5; i++){
        int a;
        cin >> a;
        v.push_back(a); 
    }
    int small_b = v[0];
    int small_c = v[3];

    for (int i=0; i<3; i++){
        if (small_b > v[i]){
            small_b = v[i];
        }
    }
    if (small_c > v[4]){
        small_c = v[4];
    }
    cout << small_b + small_c - 50 << endl;
    return 0;
    
}