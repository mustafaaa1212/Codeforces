#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--){
    int a[3],max;
    cin >> a[0] >> a[1] >> a[2];
    max  = a[0];
    for(int i=0;i<3;i++){
        if(a[i] > max){
            max  = a[i];
        }
    }
    int sum = a[0] + a[1] + a[2];
    sum -= max;
    if(sum == max){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    
    }
}