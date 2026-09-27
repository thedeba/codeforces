#include "iostream"
#include <cctype>
using namespace std;
int main(){
    string s, vowels = "aoyeui";

    cin >> s;

    for(char c:s){
        c = tolower(c);
        bool isVowel = false;

        for(char v:vowels){
            if(c == v){
                isVowel = true;
                break;
            }
        }
        if(!isVowel){
            cout << "." << c;
        }
    }
    cout << endl;

    return 0;
}