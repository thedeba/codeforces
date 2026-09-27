#include "iostream"
// #include <ostream>
using namespace std;
int main(){
    string num;
    cin >> num;
    int count = 0;
    for(char c:num){
        if(c == '4' || c == '7'){
            count ++;
        }
    }
    if (count == 4 || count == 7 ||
        count == 44 || count == 47 ||
        count == 74 || count == 77) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}