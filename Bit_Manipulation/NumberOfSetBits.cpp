// To count the number of set bits

#include <iostream>
using namespace std;

// Approach 1: if rem of number divided by 2 is 1 then add 1 to count (using bitwise will increase speed) 
void NumberOfSetBits1(int n) {
    int count = 0;
    while (n>0) {
        count += (n&1);
        n = n>>1;
    }
    cout << count << endl;
}

//Approach 2: Do a loop with N&(N-1) till N&(N-1)=0 (better time complexity than 1st approach)
void NumberOfSetBits2(int n) {
    int count = 0;
    while (n!=0) {
        n = n&(n-1);
        count += 1;
    }
    cout << count;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    NumberOfSetBits1(n);
    NumberOfSetBits2(n);
    return 0;
}
