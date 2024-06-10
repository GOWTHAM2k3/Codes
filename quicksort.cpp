#include <bits/stdc++.h>
using namespace std;

// Function to rearrange the elements and get the actual pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot element is chosen as the last element
    int PIndex = low; // Index of the smaller element

    // Traverse the array from low to high - 1
    for (int i = low; i < high; i++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[i] <= pivot) {
            swap(arr[PIndex], arr[i]);
            PIndex++;
        }
    }

    // Swap the pivot element with the element at the PIndex
    swap(arr[PIndex], arr[high]);
    return PIndex;
}

// Function to implement the quicksort algorithm
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int PIndex = partition(arr, low, high); // Partition the array and get the pivot index
        quickSort(arr, low, PIndex - 1); // Recursively sort the left subarray
        quickSort(arr, PIndex + 1, high); // Recursively sort the right subarray
    }
}

int main() {
    int arr[7] = {6, 3, 9, 5, 2, 8, 7};
    int n = 7;

    quickSort(arr, 0, n - 1);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

