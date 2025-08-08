/*
The following is the pattern:
1
2 2 
3 3 3
*/

#include<bits/stdc++.h>
using namespace std;

void pattern4(int N) {
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=i; j++) {
            cout << i ;
        }
        cout << endl;
    }
}

int main(){
    int N;
    cout << "Enter a number: ";
    cin >> N;
    pattern4(N);
    return 0;
}