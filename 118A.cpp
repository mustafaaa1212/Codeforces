#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // 1) Convert uppercase to lowercase
    for (char &ch : s) {
        if (ch >= 'A' && ch <= 'Z') {
            ch += 32;  // convert to lowercase
        }
    }

    // 2) Replace vowels with '0'
    for (char &ch : s) {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == 'y') {
            ch = '0';
        }
    }

    // 3) Collect non-vowels in array a
    int n = s.size();
    int j = 0;
    char a[n];  // This will hold the consonants
    for (int i = 0; i < n; i++) {
        if (s[i] != '0') {
            a[j] = s[i];
            j++;
        }
    }

    // 4) Build the final string in b
    int x = 2 * j;
    char b[x];
    for (int i = 0; i < j; i++) {
        b[2*i]     = '.';
        b[2*i + 1] = a[i];
    }

    // 5) Print the result
    for (int i = 0; i < x; i++) {
        cout << b[i];
    }
    cout << endl;

    return 0;
}
