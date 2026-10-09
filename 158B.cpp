#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if (x == 1) {
            one++;
        }
        else if (x == 2) {
            two++;
        }
        else if (x == 3) {
            three++;
        }
        else {
            four++;
        }
    }

    int ans = four;

    ans += three;
    if (one >= three) {
        one -= three;
    }
    else {
        one = 0;
    }

    ans += two / 2;
    two %= 2;
    if (two == 1) {
        ans++;

        if (one >= 2) {
            one -= 2;
        }
        else {
            one = 0;
        }
    }

    ans += (one + 3) / 4;

    cout << ans << endl;

    return 0;
}