// Insertion sort
// Time complexity : O(N^2) (N is the number of elements)

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr) {
    for (int i=0; i<=n-1; i++) {
        int j = i;
        while (j>0 && arr[j-1]>arr[j]) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) { cin >> arr[i]; }
    insertionSort(n,arr);
    cout << "Sorted Array: ";
    for (int i=0; i<n; i++) { cout << arr[i] << " "; }
    return 0;
}
