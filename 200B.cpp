#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;

    for(int i = 0; i < n; i++){
        int p;
        cin >> p;
        sum += (double)p;
    }

    cout << (double)(sum / n) << endl;

    return 0;
}