#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int s, a, b;
        cin >> s >> a >> b;

        int count = 0;
        if (a > b) {
            count = (s + b - 1) / b;  
        } else {
            count = (s + a - 1) / a;
        }

        cout << count << endl;
    }
}
