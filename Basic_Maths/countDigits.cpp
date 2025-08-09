/* Counting the number of digits */

#include <bits/stdc++.h>
using namespace std;

// Approach 1
void countDigits1(int n) {
    int count = 0;
    while (n!=0) {
        count = count + 1;
        n = n/10;
    }
    cout << "Using Approach 1: " << count << endl;
}

// Approach 2
void countDigits2(int n) {
    int count = log10(n) + 1;
    cout << "Using Approach 2: " << count ;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    countDigits1(n);
    countDigits2(n);
}
