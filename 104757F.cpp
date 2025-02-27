#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a;
        cin >> a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin >> arr[i];
        }
        sort(arr,arr + a);
        int count = 0;
        for(int i=0;i<a-1;i++){
            if(arr[i] == arr[i+1]){
                    count++;
                    arr[i] = 0;
                    arr[i+1] = 0;                 
            }
        }
        cout << count << endl;
    }
}