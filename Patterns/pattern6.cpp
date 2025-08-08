/*
The following is the pattern:
1 2 3
1 2
1
*/

#include<bits/stdc++.h>
using namespace std;

void pattern6(int N) {
    for (int i=N; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            cout << j ;
        }
        cout << endl;
    }
}

int main(){
    int N;
    cout << "Enter a number: ";
    cin >> N;
    pattern6(N);
    return 0;
}