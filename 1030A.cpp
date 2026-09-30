#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    while (n--) {
        int x;
        cin >> x;
        if (x == 1) {
            count++;
        }
    }

    if (count > 0) {
        cout << "HARD" << endl;
    }
    else {
        cout << "EASY" << endl;
    }

    return 0;
}