#include <iostream>
using namespace std;

void printArray(int* arr, int length) 
{
    for (int i = 0; i < length; i++) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int* arr, int low, int mid, int high) 
{
    int i, j, k;
    int lengthLeft = mid - low + 1;
    int lengthRight = high - mid;

    // Create temporary arrays
    int arrLeft[lengthLeft], arrRight[lengthRight];

    // Copy data to temporary arrays
    for (int a = 0; a < lengthLeft; a++) 
	{
        arrLeft[a] = arr[low + a];
    }
    for (int a = 0; a < lengthRight; a++) 
	{
        arrRight[a] = arr[mid + 1 + a];
    }

    // Merge the temporary arrays back into arr[low..high]
    i = 0; // Initial index of first sub-array
    j = 0; // Initial index of second sub-array
    k = low; // Initial index of merged sub-array

    while (i < lengthLeft && j < lengthRight) 
	{
        if (arrLeft[i] <= arrRight[j]) 
		{
            arr[k] = arrLeft[i];
            i++;
        } 
		else 
		{
            arr[k] = arrRight[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of arrLeft[], if any
    while (i < lengthLeft) 
	{
        arr[k] = arrLeft[i];
        i++;
        k++;
    }

    // Copy the remaining elements of arrRight[], if any
    while (j < lengthRight) 
	{
        arr[k] = arrRight[j];
        j++;
        k++;
    }
}

void mergeSort(int* arr, int low, int high) 
{
    if (low < high) 
	{
        int mid = (low + high) / 2;

        // Sort first and second halves
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
}

int main() 
{
    int arr[] = {9, 14, 4, 6, 5, 8, 7};

    int length = sizeof(arr) / sizeof(int);

    cout << "Array before calling mergeSort(): ";
    printArray(arr, length);

    mergeSort(arr, 0, length - 1);

    cout << "Array after calling mergeSort(): ";
    printArray(arr, length);

    return 0;
}

