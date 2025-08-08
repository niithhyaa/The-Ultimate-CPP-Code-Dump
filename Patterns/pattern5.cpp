/*
The following is the pattern:
* * *
* * 
*

*/

#include<bits/stdc++.h>
using namespace std;

void pattern5(int N) {
    for (int i=1; i<=N; i++) {
        for (int j=i; j<=N; j++) {
            cout << "* " ;
        }
        cout << endl;
    }
}

int main(){
    int N;
    cout << "Enter a number: ";
    cin >> N;
    pattern5(N);
    return 0;
}