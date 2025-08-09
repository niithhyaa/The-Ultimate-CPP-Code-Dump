// GCD of two numbers using Euclidean algorithm
// Repeatedly subtract the smaller number from the larger number until one of them becomes 0.
// Once one of them becomes 0, the other number is the GCD of the original numbers.

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (a>0 && b>0) {
        if (a>b) {
            a = a%b;
        } 
        else {
            b = b%a;
        } 
    }
    if (a==0) {
        return b;
    }
    else {
        return a;
    }
}

int main() {
    int a,b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "GCD is: " << gcd(a,b) << endl;
    return 0;
}
