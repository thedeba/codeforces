#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int x = 0;
    while(num--){
        string s;
        cin >> s;
        if(s == "X++" || s == "++X"){
            x += 1;
        }
        else if(s == "X--" || s == "--X"){
            x -= 1;
        }
    }
    cout << x << endl;
}