#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T;
    vector<string> Password;
    vector<string> Password_re;

    cin >> T;
    while (T--){
        string S;
        cin >> S;
        Password.push_back(S);
        string tmp = S;

        reverse(tmp.begin(), tmp.end());
        Password_re.push_back(tmp);
    }
    
    int ans1;
    char answ2;
    for (int i=0; i<Password.size(); i++){
        for (int j=0; j<Password_re.size(); j++){
            if (Password[i] == Password_re[j]){
                ans1 = Password[i].size();
                answ2 = Password[i][ans1/2];
            }
        }
    }
    cout << ans1 << " " << answ2 << endl;

    return 0;
}