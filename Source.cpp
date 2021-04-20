#include <iostream>
#include "searchSortAlgorithms.h"

using namespace std;

void print(int arr[], int size) {
    int i;
    for (i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int i, arr[10];
    cout << "Enter 10 integers: ";
    for (i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    cout << "Array before sorting: ";
    print(arr, 10);
    insertionSort(arr, 10);
    cout << "Array after sorting: ";
    print(arr, 10);
    return 0;
}
