#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count = 0;
        int place = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                count++;
            }

            n /= 10;
            place *= 10;
        }

        cout << count << endl;
    }

    return 0;
}