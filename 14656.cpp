#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main(){
    int T;
    int count = 0;
    cin >> T;
    while (T--){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=0; i<v.size(); i++){
        if (v[i] != i+1){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}