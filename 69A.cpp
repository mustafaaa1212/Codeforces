#include<iostream>
using namespace std;

int main() {
        int n; 
        cin >> n;
        
        int sum1 = 0, sum2 = 0, sum3 = 0;
        int i, j, k;
        
        while(n--) {
            cin >> i >> j >> k;
            sum1 += i;
            sum2 += j;
            sum3 += k;
        }
        
        if(sum1 == 0 && sum2 == 0 && sum3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    return 0;
}
