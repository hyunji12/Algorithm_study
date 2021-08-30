#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    int num;
    vector<int> vec;
    cin >> t;

    while (t--){
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());

    for (int i=0; i<vec.size(); i++){
        cout << vec[i] << "\n";
    }
}