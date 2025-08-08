/*
The following is the pattern:
*  
**
***  
**
*   
 
*/

#include<bits/stdc++.h>
using namespace std;

void pattern10(int N) {
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i=1; i<=N-1; i++) {
        for (int j=N-1; j>=i; j--) {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int N;
    cout << "Enter a number: ";
    cin >> N;
    pattern10(N);
    return 0;
}