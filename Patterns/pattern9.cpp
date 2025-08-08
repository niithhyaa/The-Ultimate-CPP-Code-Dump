/*
The following is the pattern:
  *  
 ***
***** 
*****  
 ***
  *    
*/

#include<bits/stdc++.h>
using namespace std;

void up_pyramid(int N) {
    for (int i=1; i<=N; i++) {
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

void down_pyramid(int N) {
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
    up_pyramid(N);
    down_pyramid(N);
    return 0;
}