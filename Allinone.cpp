#include <iostream>
#include <algorithm>
using namespace std;

void insertAtEnd(int* arr, int ele, int& n) {
    arr[n] = ele;
    n++;
}
void insertAtBeginning(int* arr, int ele, int& n) {
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = ele;
    n++;
}
void insertAtPosition(int* arr, int ele, int pos, int& n) {
    if (pos < 0 || pos > n) {
        cout << "Invalid position. Element not inserted." << endl;
        return;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = ele;
    n++;
}
void displayArr(int *arr, int n) {
    cout << "Array : [ ";
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << arr[i] << " ]" << endl;
        } else {
            cout << arr[i] << ", ";
        }
    }
}

int searchElement(int* arr, int ele, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == ele) {
            return i;
        }
    }
    return -1; 
}
void implementArrayOperations() {
    int numOfEleInArr;
    cout << "Enter the length of the array: ";
    cin >> numOfEleInArr;
    int arr[100];
    fill_n(arr, 100, -1);
    cout << "Enter elements of the array: ";
    for (int i = 0; i < numOfEleInArr; i++) {
        cin >> arr[i];
    }
    cout << "Traversing the array: ";
    displayArr(arr, numOfEleInArr);
    int newEle = 0;
    cout << "Enter the element to append at the end: ";
    cin >> newEle;
    insertAtEnd(arr, newEle, numOfEleInArr);
    cout << "Array after inserting at the end: ";
    displayArr(arr, numOfEleInArr);
    cout << "Enter the element to insert at the beginning: ";
    cin >> newEle;
    insertAtBeginning(arr, newEle, numOfEleInArr);
    cout << "Array after inserting at the beginning: ";
    displayArr(arr, numOfEleInArr);

    int position = 0;
    cout << "Enter the element to insert: ";
    cin >> newEle;
    cout << "Enter the position to insert the element: ";
    cin >> position;
    insertAtPosition(arr, newEle, position, numOfEleInArr);
    cout << "Array after inserting at the position: ";
    displayArr(arr, numOfEleInArr);

    int searchEle;
    cout << "Enter the element to search: ";
    cin >> searchEle;
    int index = searchElement(arr, searchEle, numOfEleInArr);
    if (index != -1) {
        cout << "Element found at position " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
}

int main() {
    implementArrayOperations();
    return 0;
}
