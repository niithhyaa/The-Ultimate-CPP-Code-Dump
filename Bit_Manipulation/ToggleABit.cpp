// Toggling the i'th bit

#include <iostream>
using namespace std;

void ToggleABit(int n, int i) {
    n = n^(1<<i);
    cout << "After toggling the " << i << "th bit: " << n;
}

int main() {
    int n, i;
    cout << "Enter a number and the bit position to toggle ";
    cin >> n >> i;
    ToggleABit(n,i);
    return 0;
}
