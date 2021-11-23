#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Rev(string x){
    reverse(x.begin(), x.end());
    int a = stoi(x);
    return a;
}

int main(){
    string X, Y;
    cin >> X >> Y;
    int answer = 0;
    answer = Rev(X) + Rev(Y);
    string ans = to_string(answer);

    cout << Rev(ans) << endl; 
}