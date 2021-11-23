# include <iostream>
# include <string>

using namespace std;

int main(){
    string S;
    cin >> S;
    int T;
    cin >> T;
    while(T--){
        int x, y;
        cin >> x >> y;

        char c;
        c = S[x];
        S[x] = S[y];
        S[y] = c;
    }
    cout << S << endl;
}