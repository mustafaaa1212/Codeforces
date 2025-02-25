#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count1 = 0, count2=0;

    for(int i=0; i<s.length();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
        count1++;
    }
    else{
        count2++;
    }
    }
    if(count1 > count2){
        for(int i=0;i<s.length();i++){
            cout << (char)toupper(s[i]);
        }
        cout << endl;
    }
    else{
        for(int i=0;i<s.length();i++){
            cout << (char)tolower(s[i]);
        }
        cout << endl;
    }

    return 0;
}
