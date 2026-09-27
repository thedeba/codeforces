#include "iostream"
#include "string"
#include <cctype>
using namespace std;
int main(){
    string s;
    cin >> s;
    
    int upper_count = 0, lower_count = 0;

    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            upper_count += 1;
        }
        else {
            lower_count += 1;
        }
    }

    if(upper_count > lower_count){
        for(char c:s){
            cout << (char)toupper(c);
        }
    }
    else {
        for(char c:s){
            cout << (char)tolower(c);
        }
    }
    cout << endl;

    return 0;
}