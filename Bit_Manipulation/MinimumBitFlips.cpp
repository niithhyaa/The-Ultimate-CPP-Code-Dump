// Minimum number of bit flips required to convert a number
// example: start = 10 (1010); stop = 7 (111) -> 3 bits conversion

#include <iostream> 
using namespace std;

int MinimumBitFlips(int start, int stop) {
    int count = 0;
    int x = start ^ stop;
    while (x!=0) {
        x = x&(x-1);
        count += 1;
    }
    return count;
}

int main(){
    int start, stop;
    cout << "Enter start and stop numbers: ";
    cin >> start >> stop;
    cout << MinimumBitFlips(start,stop);
    return 0;
}
