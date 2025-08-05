//C++ program to convert decimal to binary

#include <iostream>
using namespace std;

void decimalToBinary(int n){
    int binaryNum[32];

    int i=0;
    while (n>0){
        binaryNum[i] = n%2;     //storing rem
        n = n/2;
        i++;
    }

    //Printing in reverse order
    for (int j = i-1; j>=0; j--){
        cout << binaryNum[j];
    }
    
}
int main() {
    int n;
    cin >> n;
    decimalToBinary(n);
    return 0;
}
