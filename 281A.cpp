#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, b, x;
    cin >> s;

    b = toupper(s[0]);
    for(int i=1; i<s.size(); i++){
        x += s[i];
    }
    cout << b + x << endl;

}