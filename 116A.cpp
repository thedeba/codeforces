#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0, max = 0;

    while (n--) {
        int a, b;
        cin >> a >> b;

        current -= a;
        current += b;

        if (current > max) {
            max = current;
        }
    }

    cout << max << endl;

    return 0;
}