/*
Printing the divisors of a number:
Example) for number = 16:
1*16
2*8 
4*4
8*2
16*1
We can see that the divisors repeat after 4*4 which is sqrt(16)
*/ 

#include <bits/stdc++.h>
using namespace std;

void divisorsOfANumber(int n) {
    vector<int> res;
    for (int i=1; i*i<=n; i++) {
        if (n%i==0) {
            res.push_back(i);
            if (i!=(n/i)) {
                res.push_back(n/i);
            }
        }
    }
    sort(res.begin(),res.end());
    for (int i : res) {
        cout << i << " ";
    }
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    divisorsOfANumber(n);
    return 0;
}
