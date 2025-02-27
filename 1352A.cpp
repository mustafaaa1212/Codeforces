#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--) {
        int a, i = 0;
        int b[7]; 
        cin >> a;

        int place_value = 1;
        while(a > 0) {
            int rem = a % 10;
            if(rem != 0) {
                b[i] = rem * place_value; 
                i++;
            }
            place_value *= 10;
            a /= 10;
        }

        cout << i << endl; 
        for(int j = 0; j < i; j++) {
            cout << b[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
