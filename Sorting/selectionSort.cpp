// Selection sort

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int n, vector<int> &arr) {
    for (int i=0; i<=n-2; i++) {
        int min=i; 
        for (int j=i+1; j<=n-1; j++) {
            if (arr[j]<arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) { cin >> arr[i]; }
    selectionSort(n,arr);
    cout << "Sorted Array: ";
    for (int i=0; i<n; i++) { cout << arr[i] << " "; }
    return 0;
}
