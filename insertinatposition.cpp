//inserting at position
#include <iostream>
#include <algorithm>
using namespace std;

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

int getNumberOfElements(int *arr) {
    int i = 0;
    while (arr[i] != -1){
        i++;
    }
    return i;
}
void implementInsertAtPosition() {
    int numOfEleInArr;
    cout << "Enter the length of the array: ";
    cin >> numOfEleInArr;
    int arr[100];
    fill_n(arr, 100, -1);
    for (int i = 0; i < numOfEleInArr; i++) {
        cin >> arr[i];
    }
    cout << "Current ";
    displayArr(arr, numOfEleInArr);
    int newEle = 0;
    cout << "Enter the element to append: ";
    cin >> newEle;
    int position = 0;
    cout << "Enter the position to insert the element: ";
    cin >> position;
    insertAtPosition(arr, newEle, position, numOfEleInArr);
    cout << "New ";
    displayArr(arr, numOfEleInArr);
}
int main() {
    implementInsertAtPosition();
    return 0;
}

