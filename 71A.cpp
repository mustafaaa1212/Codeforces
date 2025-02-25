#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;

    while(n--){
        cin >> s;
        int t = s.length();
        if(t > 10){
            cout << s[0] << t-2 << s[t-1] << endl;
        }
        else{
            cout << s << endl;
        }
    }
}