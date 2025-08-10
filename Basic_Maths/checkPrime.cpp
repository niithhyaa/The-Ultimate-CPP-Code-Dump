// To check if a number is prime or not

#include <bits/stdc++.h>
using namespace std;

void checkPrime(int n) {
    int count = 0;
    for (int i=1; i*i<=n; i++) {
        if (n%i==0) {
            count++;
            if (i!=(n/i)) {
                count++;
            }
        }
    }
    if (count==2) {
        cout << "Prime";
    }
    else {
        cout << "Not Prime"; 
    }
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    checkPrime(n);
    return 0;
}
