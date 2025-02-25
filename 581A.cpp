#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0,sum=0;
    cin >> n >> m;
    while(n>0 && m>0){
        n -= 1;
        m -= 1;
        count++;
    }
    while(n>=0){
        n -= 2;
        if(n >=0){

        
        sum++;
    }
    }
    while(m>=0){

        m -= 2;
        if(m >= 0){
        sum++;
        }
    }
    cout << count << " " << sum << endl;
}