// Setting "i"th bit

#include <iostream>
using namespace std;

void CheckBitStatus(int n, int i){
    //Using left shift operator
    cout << "Using Left Shift Operator:" << endl;
    if ((n & (1<<i)) != 0) {
        cout << "Bit is set" << endl;
    }
    else {
        cout << "Bit is not set" << endl;
    }
    
    //Using right shift operator
    cout << "Using Right Shift Operator:" << endl;
    if (((n>>i)&1) != 0) {
        cout << "Bit is set" << endl;
    }
    else {
        cout << "Bit is not set" << endl;
    }
}

int main(){
    int n,i;
    cout << "Enter a number and the bit position to check" << endl;
    cin >> n >> i;
    CheckBitStatus(n,i);
    return 0;
}
