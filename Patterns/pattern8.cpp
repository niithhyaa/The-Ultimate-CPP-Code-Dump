/*
The following is the pattern:
*****  
 ***
  *   
*/

#include<bits/stdc++.h>
using namespace std;

void pattern8(int N) {
    for (int i=N; i>=1; i--) {
        for (int j=1; j<=N-i; j++) {
            cout << " ";
        }
        for (int j=1; j<=2*i-1;j++) {
            cout << "*";
        }
        for (int j=1; j<=N-i;j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int N;
    cout << "Enter a number: ";
    cin >> N;
    pattern8(N);
    return 0;
}