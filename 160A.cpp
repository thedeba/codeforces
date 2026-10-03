#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int coins[n];
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    sort(coins, coins + n, greater<>());

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += coins[i];
    }

    int mySum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        mySum += coins[i];
        count++;

        if (mySum > total - mySum) {
            break;
        }
    }

    cout << count << endl;

    return 0;
}