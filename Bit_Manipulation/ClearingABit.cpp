// Clearing the i'th bit

#include <iostream>
using namespace std;

void ClearingABit(int n, int i){
    int x = ~(1<<i);
    n = x & n;
    cout << "After clearing the " << i << "th bit: " << n;
}

int main(){
    int n,i;
    cout << "Enter the number and the position of the bit to clear:";
    cin >> n >> i;
    ClearingABit(n,i);
    return 0;
}
