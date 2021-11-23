#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int num;
    cin >> num;
    string s;
    for (int i=0; i<num; i++){
        getline(cin,s);

        for (int j=s.length()-1; j>0; j--){
            cout << s[j];
        }
        cout << endl;
    }

}