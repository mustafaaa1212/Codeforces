#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b; 
    
    int count = 0; 
    int c1 = 0, c2 = 0, c3 = 0; 
    
    for (int i = 0; i < a; i++) {
        cin >> b;
        if (b == 1) {
            c1++;
        }
        if (b == 2) {
            c2++;
        }
        if (b == 3) {
            c3++;
        }
        if (b == 4) {
            count++;
        }
    }

    // Pair 3s with 1s
    if (c3 >= c1) {
        count += c3;
        c1 = 0;
    } else {
        count += c3;
        c1 -= c3;
    }

    // Handle 2s
    count += c2 / 2;
    if (c2 % 2 != 0) {
        count++;
        c1 -= 2; // Use up to 2 ones for the remaining 2
    }

    // Handle remaining 1s
    if (c1 > 0) {
        count += (c1 + 3) / 4; // Group 1s into sets of 4
    }

    cout << count << endl;
    return 0;
}
