#include<iostream>
using namespace std;
int main()
{
    int a[3];
    int max,min;
    cin >> a[0] >> a[1] >> a[2];
    max = a[0];
    min = a[0];
    for(int i=0;i<3;i++){
        if(max < a[i] ) max = a[i];
        if(min > a[i]) min = a[i];
    }
    int count = (a[0] + a[1] + a[2] - max - min);
    int sum = (max - count) + (count - min);
    cout << sum << endl;
    
}