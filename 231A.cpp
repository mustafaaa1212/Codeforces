#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    cin >> n;
    int tempc = 0   ;
    while(n--){
        int count = 0;
        cin >> a;
        if(a == 1){
            count++;
        }
        cin >> b;
        if(b == 1){
            count++;
        }
        cin >> c;
        if(c == 1){
            count++;
        }
        if(count > 1){
            tempc++;
        }
    }
    cout << tempc;


}