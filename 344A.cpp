#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    string previous, current;

    for(int i = 0; i < n; i++){
        cin >> current;

        if(current != previous){
            count++;
        }
        previous = current;
    }

    cout << count << endl;

    return 0;
}