#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;
    int x[p];
    for (int i = 0; i < p; i++) {
        cin >> x[i];
    }

    int q;
    cin >> q;
    int y[q];
    for (int i = 0; i < q; i++) {
        cin >> y[i];
    }

    for (int i = 1; i <= n; i++) {
        bool found = false;

        for (int j = 0; j < p; j++) {
            if (x[j] == i) {
                found = true;
            }
        }

        for (int j = 0; j < q; j++) {
            if (y[j] == i) {
                found = true;
            }
        }

        if (!found) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";

    return 0;
}