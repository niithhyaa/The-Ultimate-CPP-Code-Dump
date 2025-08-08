/*
The following is the pattern:
* 
* * 
* * *
*/

#include<bits/stdc++.h>
using namespace std;

void pattern2(int N) {
    for (int i=0; i<=N; i++) {
        for (int j=0; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int N;
    cout << "Enter a number: ";
    cin >> N;
    pattern2(N);
    return 0;
}
