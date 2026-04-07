#include <iostream>
using namespace std;

int main() {
    int n, i, key, found = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        cout << "Element found at position " << i + 1;
    else
        cout << "Element not found";

    return 0;
}
