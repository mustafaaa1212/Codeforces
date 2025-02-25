#include <iostream>

using namespace std;

int main() {

    long t;
    cin >> t;

    while (t--) {
        long size;
        cin >> size;
        string word;
        cin >> word;

        bool sorted = true;

        for (long j = 1; j < size; j++) {
            if (word[j - 1] > word[j]) {
                sorted = false;
                break;
            }
        }

        cout << (sorted ? "YES" : "NO") << endl;
    }

    return 0;
}
