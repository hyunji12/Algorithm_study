#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        vector<char> v1, v2;
        string s1, s2;
        cin >> s1 >> s2;
        
        for (int i=0; i<s1.length(); i++){
            char c = s1[i];
            v1.push_back(c);
        }
        for (int i=0; i<s2.length(); i++){
            char c = s2[i];
            v2.push_back(c);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        if (v1 == v2) {
            cout << s1 << " & " << s2 << " are anagrams.\n";
        }
        else {
            cout << s1 << " & " << s2 << " are NOT anagrams.\n";
        }
        
    }
}