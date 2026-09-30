#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int free = 0;

    while (n--) {
        int p, q;
        cin >> p >> q;

        if (q - p >= 2) {
            free++;
        }
    }

    cout << free << endl;

    return 0;
}