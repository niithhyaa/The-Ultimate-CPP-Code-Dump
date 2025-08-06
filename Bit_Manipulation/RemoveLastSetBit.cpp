#include <iostream>
using namespace std;

void RemoveLastSetBit(int n) {
    n = n&(n-1);
    cout << "After removing rightmost set bit: " << n; 
}

int main(){
    int n;
    cout << "Enter a number to remove the rightmost set bit: ";
    cin >> n;
    RemoveLastSetBit(n);
    return 0;
}
