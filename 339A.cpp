#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s, numbers;
    cin >> s;

    for(char c:s){
        if(c != '+')
            numbers += c;
    }

    sort(numbers.begin(), numbers.end());

    for(int i=0; i<numbers.size(); i++){
        if(i>0)
            cout << '+';
        cout << numbers[i];
    }
    cout << endl;

    return 0;
}