#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, i, maxi, k;
    string str;

    while (cin >> n) {
        cin.ignore();
        getline(cin, str);

        maxi = k = 0;

        for (i = 0; i < n; i++) {
            if (isupper(str[i])) 
                k++;
            
            maxi = max(k, maxi);

            if (str[i] == ' ') 
                k = 0;
        }

        cout << maxi << endl;
    }

    return 0;
}
