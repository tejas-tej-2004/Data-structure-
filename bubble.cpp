#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low >= high) return;
    int pivot = arr[high], i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    quickSort(arr, low, i - 1);
    quickSort(arr, i + 1, high);
}

int main() {
    int arr[] = {50, 10, 40, 20, 30};
    int n = 5;
    int choice;

    cout << "1. Bubble\n2. Selection\n3. Insertion\n4. Quick\nChoose: ";
    cin >> choice;
    switch (choice) {
        case 1: // BUBBLE: Swaps neighbors
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n - 1; j++)
                    if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
            break;
        case 2:
            for (int i = 0; i < n - 1; i++) {
                int small = i;
                for (int j = i + 1; j < n; j++)
                    if (arr[j] < arr[small]) small = j;
                swap(arr[i], arr[small]);
            }
            break;
        case 3:
            for (int i = 1; i < n; i++) {
                int key = arr[i], j = i - 1;
                while (j >= 0 && arr[j] > key) {
                    arr[j+1] = arr[j];
                    j--;
                }
                arr[j+1] = key;
            }
            break;

        case 4: // QUICK: Uses a pivot and recursion
            quickSort(arr, 0, n - 1);
            break;
    }

    cout << "Sorted Result: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
