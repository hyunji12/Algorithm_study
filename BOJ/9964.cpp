#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    int num = 1;

    while (true){
        string s1, s2;
        vector<char> vec1, vec2;
        cin >> s1 >> s2;
        
        for (int i=0; i<s1.size(); i++){
            char c = s1[i];
            vec1.push_back(c);
        }
        for (int i=0; i<s2.size(); i++){
            char c = s2[i];
            vec2.push_back(c);
        }
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());

        if (s1 == "END" && s2 == "END"){
            break;
        }

        if (vec1 == vec2){
            cout << "Case " << num << ": same\n";
        }
        else {
            cout << "Case " << num << ": different\n";
        }
        num++;
    }

}