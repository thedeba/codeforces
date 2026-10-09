#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }

    if (even_count > odd_count) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                cout << i + 1 << endl;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                cout << i + 1 << endl;
            }
        }
    }

    

    return 0;
}