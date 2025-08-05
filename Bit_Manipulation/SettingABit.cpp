// Setting the "i"th bit

#include <iostream>
using namespace std;

void SettingABit(int n, int i){
    n = ((1<<i)|n);
    cout << "After setting the " << i << "th bit: " << n;
}

int main(){
    int n,i;
    cout << "Enter the number and the position of the bit to be set:" << endl;
    cin >> n >> i;
    SettingABit(n,i);
    return 0;
}
