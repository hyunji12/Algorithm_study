#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int search(string s){
    int max_v = 1;
    int a = 1;
    for (int i=1; i<s.length(); i++){
        if (s[i] == s[i-1]){
            a++;
            max_v = max(max_v, a);
        }
        else {
            max_v = max(max_v, a);
            a = 1;
        }
    }
    return max_v;
}

int main(){
    string Str;
    int num = 3;
    int answer;
    for(int i=0; i<3; i++){
        cin >> Str;
        answer = search(Str);
        cout << answer << endl;
    }
    return 0;
}