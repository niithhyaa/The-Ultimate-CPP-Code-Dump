// Swap Two Numbers without a third variable

#include <iostream>
using namespace std;

// Please note that pass by reference is used
void SwapTwoNumbers(int &a, int &b){
    a = a^b;
    b = a^b;    // since a = a^b ; b = (a^b)^b = a (since b^b=0)1 2
    a = a^b;    // since a = a^b and b = a ; a = (a^b)^a = b (since a^a=0)

    cout << "Inside Function: Swapped variables: a = " << a << "; b = " << b << endl ;
}

int main(){
    int a,b;
    cout << "Enter a and b: " ;
    cin >> a >> b ;
    SwapTwoNumbers(a,b);
    cout << "Actual: Swapped variables: a = " << a << "; b = " << b ;
}
