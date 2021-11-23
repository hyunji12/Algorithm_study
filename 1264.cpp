#include <iostream>
#include <cstring>
using namespace std;

char aeiou[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

int main(){
    int count = 0;
    string s;
    while (1){
        getline(cin, s);
        if (s == "#"){
            break;
        }
        for(int i=0; i < s.length(); i++){
            for(int j=0; j<10; j++){
                if (s[i] == aeiou[j]){
                    count ++;
                }
            }
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}