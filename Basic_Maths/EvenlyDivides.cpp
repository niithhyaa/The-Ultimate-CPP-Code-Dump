/* 

Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.

A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.

Examples :

Input: n = 12
Output: 2
Explanation: 1, 2 when both divide 12 leaves remainder 0.

*/

# include <bits/stdc++.h>
using namespace std;


    // Function to count the number of digits in n that evenly divide n
int evenlyDivides(int n) {
    int digits = 0;
    int num = n;
    while (num!=0) {
        int x = num%10;
        if ((x!=0) and (n%x==0)) {
            digits +=1;
        }
        num = num/10;
    }
    return digits;
}


int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << evenlyDivides(n);
    return 0;
}
