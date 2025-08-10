// To check if a given number is an Armstrong number

#include <bits/stdc++.h>
using namespace std;

void armstrongNumber(int n) {
    int sum = 0, num = n;
    string number = to_string(n);
    int digits = number.length();
    while (num!=0) {
        int d = num%10;
        sum += int(round(pow(d,digits)));
        num = num/10;
    }
    if (sum==n) {
        cout << "It is an Armstrong number";
    }
    else {
        cout << "It is not an Armstrong Number";
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    armstrongNumber(n);
    return 0;
}
