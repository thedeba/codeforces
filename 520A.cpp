#include <cctype>
#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    bool match = true;

    for(char ch = 'a'; ch <= 'z'; ch++){
        bool found = false;

        for (char c : s) {
            if (tolower(c) == ch) {
                found = true;
                break;
            }
        }

        if (!found) {
            match = false;
            break;
        }
    }

    if (match) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}