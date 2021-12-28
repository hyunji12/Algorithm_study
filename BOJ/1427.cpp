#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int num;
    vector<int> vec;
    cin >> num;

    while (num){
        int ans;
        ans = num%10;
        vec.push_back(ans);

        num /= 10;
    }
    sort(vec.rbegin(), vec.rend());
    for (int i=0; i<vec.size(); i++){
        cout << vec[i];
    }
    cout << '\n';

    return 0;
}