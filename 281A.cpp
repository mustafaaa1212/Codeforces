#include<iostream>
using namespace std;
int main(){
    string name;
    cin >> name;

    for(int i=0; i<name.length();i++){
        if(name[0] >= 'a' && name[0] <= 'z'){
            name[0] = toupper(name[0]);
        }
    }
    cout << name << endl;

    return 0;
}