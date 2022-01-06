#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    cin.ignore();

    while (t--){
        stack <char> st;
        getline(cin, s);
        s += " ";
        
        for (int i=0; i<s.size(); i++){
            if (s[i] == ' '){
                while (!st.empty()){
                    cout << st.top();
                    st.pop();
                }
                cout << " ";
            }
            else {
                st.push(s[i]);
            }
        }
        cout << '\n';
    }
    return 0;
}