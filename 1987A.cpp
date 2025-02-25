#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    while(n--){
        int a,b;
        cin>>a>>b;
        int sum = b*(a-1) + 1;
        cout<<sum<<endl;
    }
}