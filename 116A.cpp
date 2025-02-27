#include<iostream>
using namespace std;
int main()
{
    int n,maxcap=0,capacity=0;
    cin >> n;
    int a[n], b[n];

    for(int i=0; i<n;i++){
        cin >> a[i];
        cin >> b[i];
        capacity += (b[i] - a[i]);
        if(capacity > maxcap){
            maxcap = capacity;
        }
    }
    cout << maxcap;
}