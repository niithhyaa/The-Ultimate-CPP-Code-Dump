// Reversing an Integer

# include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int reversed = 0;
    while (x!=0) {
        int d = x%10;
        x = x/10;
        if ((reversed>INT_MAX/10) || (reversed<INT_MIN/10)) {
            return 0;
        }
        reversed = reversed*10 + d;
    }
    return reversed;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << reverse(n);
}
