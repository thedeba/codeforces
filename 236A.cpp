#include <iostream>
using namespace std;

int main() {
    int count = 0;
    string s;
    cin >> s;
    
    for(char c='a'; c<='z'; c++){
        bool found = false;

        for(char x:s){
            if(x == c){
                found = true;
                break;
            }
        }
        
        if(found){
            count++;
        }
    }

    if(count % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}