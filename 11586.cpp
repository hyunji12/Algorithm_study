#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> vec;

void mirror(int state){
    if (state == 1){
        for (int i=0; i<vec.size(); i++){
            cout << vec[i] << endl;
        }
        return;
    }
    else if (state == 2){
        for (int i=0; i<vec.size(); i++){
            reverse(vec[i].begin(), vec[i].end());
            cout << vec[i] << endl;
        }
        return;
    }
    else {
        for (int i=vec.size()-1; i >=0; i--){
            cout << vec[i] << endl;
        }
        return;

    }
}

int main(){
    int T;
    cin >> T;
    while (T--){
        string S;
        cin >> S;
        vec.push_back(S);
    }
    int State;
    cin >> State;

    mirror(State);
    return 0;
}