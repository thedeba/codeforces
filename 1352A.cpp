#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int temp = n;
        int count = 0;
        int arr[10];
        int index = 0;
        int place = 1;

        while (temp > 0) {
            int digit = temp % 10;

            if (digit != 0) {
                count++;
                arr[index] = digit * place;
                index++;
            }

            temp /= 10;
            place *= 10;
        }

        cout << count << endl;

        for (int i = index - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}