#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a;
        cin >> a;
        vector<int> arr(a);
        map<int, int> mp;

        for (int i = 0; i < a; i++) {
            cin >> arr[i];
            mp[arr[i]]++; 
        }

        int count = 0;

        
        if (mp[-1] % 2 != 0) {
            count++;
            mp[-1]--;
            mp[1]++;
        }

        
        while (mp[-1] > mp[1]) {
            mp[-1]--;
            mp[1]++;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}
