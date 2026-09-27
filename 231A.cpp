#include<iostream>
using namespace std;
int main(){
    int num , count = 0;
    cin >> num;
    while(num--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b + c >= 2){
            count ++;
        }
    }
    cout << count << endl;
}