#include "iostream"
using namespace std;
int main(){
    int n, a_count = 0, d_count = 0;
    cin >> n;

    string s;
    cin >> s;

    for(int i=0; i<n; i++){
        if (s[i] == 'A') {
            a_count++;
        }
        else if (s[i] == 'D') {
            d_count++;
        }
    }


    if (a_count > d_count) {
        cout << "Anton" << endl;
    }
    else if (d_count > a_count) {
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }

    return 0;
}