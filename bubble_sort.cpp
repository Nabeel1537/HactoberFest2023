#include<iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if(arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Perform bubble sort
    bubbleSort(arr, n);

    // Display the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
