#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0;
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] <= m ){
            count++;
        }
        else{
            count += 2;
        }
    }    
    cout << count << endl;
    
}