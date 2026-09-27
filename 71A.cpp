#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    string s;
    while(num--){
        cin>>s;
        if(s.size() > 10){
            cout << s[0] << s.size()-2 << s.back() << endl;
        }
        else{
            cout << s << endl;
        }
    }
}