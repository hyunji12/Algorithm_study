#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool dobi_sort(string a, string b){
    for (int i=0; i<a.size(); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] -= 32;
        }
    }
    for (int i=0; i<b.size(); i++) {
        if (b[i] >= 'a' && b[i] <= 'z') {
            b[i] -= 32;
        }
    }
    if (a.compare(b) > 0) {
        return false;
    }
    return true;

}

int main(){
    int n;
    cin >> n;
    string dobi;
    
    while (n!=0){
        vector<string> vec;
        for (int i=0; i<n; i++){
            cin >> dobi;
            vec.push_back(dobi);
        }
        sort(vec.begin(), vec.end(), dobi_sort);

        cout << vec[0] << '\n';
        cin >> n;
    }
    return 0;
}