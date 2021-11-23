// ctrl + D : EOF

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int arr[26];

int main(){
    string s;

    for (int i=0; i<26; i++){
        arr[i] = 0;
    }

    while (cin >> s){
        for (int i=0; i<s.size(); i++){
            if (s[i] >= 'a' && s[i] <='z'){
                arr[s[i] - 'a']++;
            }
        }
        s.clear();
    }
    
    int max = arr[0];
    for (int i=0; i<26; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    for (int i=0; i<26; i++){
        if (arr[i] == max){
            char answer = i + 'a';
            cout << answer;
        }
    }
    
    cout << endl;
    return 0;
}