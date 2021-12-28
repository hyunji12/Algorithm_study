#include <iostream>
#include <string>

using namespace std;

int main(){
    string S, D;
    cin >> S >> D;
    if (S.size() >= D.size()){
        cout << "go" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}