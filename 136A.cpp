#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int gift[n];

    for(int i = 1; i <= n; i++){
        int p;
        cin >> p;

        gift[p] = i;
    }

    for(int i = 1; i <= n; i++){
        cout << gift[i] << " ";
    }

    cout << endl;

    return 0;
}