#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool compare(string a, string b){
    if (a.size() == b.size()){
        return a<b;
    }
    else {
        return a.size() < b.size();
    }
}

int main(){
    int t;
    vector<string> vec;
    cin >> t;

    while (t--){
        string s;
        cin >> s;
        vec.push_back(s);
    }
    sort(vec.begin(), vec.end(), compare);
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << '\n';
    }
}