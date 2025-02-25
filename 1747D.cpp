#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a,b;
        cin >> a >> b;
        if(abs(b-a)%10 == 0){
            int sum = abs(b-a)/10;
            cout << sum << endl;
        }
        else{
            int sum = abs(b-a)/10 + 1;
            cout << sum << endl;
        }
    }
}