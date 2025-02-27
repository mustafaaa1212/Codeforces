#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string name;
    cin >> name;
    int count=0;
    for(int i=1; i<=n;i++){
        if(name[i-1] == name[i]){
            count++;
        }
    }
    return 0;
}