#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        int x = 0;
        if (a % 2 == 0) {
            if (b * 2 >= c) {
                x = (a / 2) * c;
            }
        } else {
            x = ((a + 1) / 2) * b;
        }
        cout << x << endl;
    }
    return 0;
}
