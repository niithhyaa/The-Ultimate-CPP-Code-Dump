// Bubble Sort : Pushes the maximum element to the last while doing adjacent swaps
// Time complexity : N + N-1 + N-2 + .... + 1 -> O(N(N+1)/2) - > O(N^2) (N is the number of elements)

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int n, vector<int> &arr) {
    for (int i=0; i<=n-2; i++) {
        bool swapped = false;
        for (int j=0; j<=n-i-2; j++) {
            if (arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) { cin >> arr[i]; }
    bubbleSort(n,arr);
    cout << "Sorted Array: ";
    for (int i=0; i<n; i++) { cout << arr[i] << " "; }
    return 0;
}
