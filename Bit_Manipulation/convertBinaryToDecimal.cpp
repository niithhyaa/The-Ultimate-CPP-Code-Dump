//C++ program to convert binary to decimal
#include <iostream>
#include <string>
using namespace std;

void binaryToDecimal(string n){
    string num = n;
    int dec_value = 0;

    int base = 1;

    int len = num.length();
    for (int i = len - 1; i>=0; i--){
        if (num[i]=='1'){
            dec_value += base;
        }
        base = base*2;
    }
    cout << dec_value;
}
int main(){
    string num;
    cin >> num;
    binaryToDecimal(num);
    return 0;
}
