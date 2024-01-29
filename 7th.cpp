// #include <iostream>
// using namespace std;
// void insertBeginning(int* array, int element, int &n) {
//     for (int i = n-1; i >= 0; i--) {
//         array[i+1] = array[i];
//     }
//     array[0] = element;
//     n++;
// }
// void displayArr(int *array, int n) {
//     cout << "Array : [ ";
//     for ( int i = 0; i < n; i++) {
//         if (i == n - 1) {
//             cout << array[i] << " ]" << endl;
//         } else {
//             cout << array[i] << ", " ;
//         }
//     }
// }
// void InsertAtBeginning() {
//     int numOfEleInArr; 
//     cout << "Enter length of array: ";
//     cin >> numOfEleInArr;
//     int arr[10] = {0}; 
//     for (int i = 0; i < numOfEleInArr; i++) {
//         cin >> arr[i];
//     }
//     cout << "current ";
//     displayArr(arr, numOfEleInArr);
//     int newEle = 0;
//     cout << "Enter the element to append: ";
//     cin >> newEle;
//     insertBeginning(arr,newEle, numOfEleInArr);
//     cout << "New ";
//     displayArr(arr, numOfEleInArr);
// }
// int main() {
//     InsertAtBeginning();
//     return 0;
// }
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void insertAtBeginning(int* arr, int ele, int n) {
//     for (int i = n-1; i >= 0; i--) {
//         arr[i+1] = arr[i];
//     }
//     arr[0] = ele;
// }
// void displayArr(int *arr, int n) {
//     cout << "Array : [ ";
//     for ( int i = 0; i < n; i++) {
//         if (i == n - 1) {
//             cout << arr[i] << " ]" << endl;
//         } else {
//             cout << arr[i] << ", " ;
//         }
//     }
// }
// int getNumberOfElements(int *arr) {
//     int i = 0;
//     while (arr[i] != -1){
//         i++;
//     }
//     return i;
// }
// void implimentInsertAtBeginning() {
//     int numOfEleInArr; 
//     cout << "Enter the length of the array: ";
//     cin >> numOfEleInArr;
//     int arr[100];
//     fill_n(arr, 100, -1);
//     for (int i = 0; i < numOfEleInArr; i++) {
//         cin >> arr[i];
//     }
//     cout << "current ";
//     displayArr(arr, getNumberOfElements(arr));
//     int newEle = 0;
//     cout << "Enter the element to append: ";
//     cin >> newEle;
//     insertAtBeginning(arr,newEle, getNumberOfElements(arr));
//     cout << "New ";
//     displayArr(arr, getNumberOfElements(arr));
// }
// int main() {
//     implimentInsertAtBeginning();

//     return 0;
// }
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void insertAtPosition(int* arr, int ele, int pos, int& n) {
//     if (pos < 0 || pos > n) {
//         cout << "Invalid position. Element not inserted." << endl;
//         return;
//     }
//     for (int i = n; i > pos; i--) {
//         arr[i] = arr[i-1];
//     }
//     arr[pos] = ele;
//     n++;
// }
// void displayArr(int *arr, int n) {
//     cout << "Array : [ ";
//     for (int i = 0; i < n; i++) {
//         if (i == n - 1) {
//             cout << arr[i] << " ]" << endl;
//         } else {
//             cout << arr[i] << ", ";
//         }
//     }
// }
// int getNumberOfElements(int *arr) {
//     int i = 0;
//     while (arr[i] != -1){
//         i++;
//     }
//     return i;
// }
// void implementInsertAtPosition() {
//     int numOfEleInArr;
//     cout << "Enter the length of the array: ";
//     cin >> numOfEleInArr;
//     int arr[100];
//     fill_n(arr, 100, -1);
//     for (int i = 0; i < numOfEleInArr; i++) {
//         cin >> arr[i];
//     }
//     cout << "Current ";
//     displayArr(arr, numOfEleInArr);
//     int newEle = 0;
//     cout << "Enter the element to append: ";
//     cin >> newEle;
//     int position = 0;
//     cout << "Enter the position to insert the element: ";
//     cin >> position;
//     insertAtPosition(arr, newEle, position, numOfEleInArr);
//     cout << "New ";
//     displayArr(arr, numOfEleInArr);
// }
// int main() {
//     implementInsertAtPosition();
//     return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;

void deleteAtIndex(int* arr, int pos, int& n) {
    if (pos < 0 || pos >= n) {
        cout << "Invalid index. Element not deleted." << endl;
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = -1; 
    n--;
}
void displayArr(int* arr, int n) {
    cout << "Array : [ ";
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << arr[i] << " ]" << endl;
        } else {
            cout << arr[i] << ", ";
        }
    }
}
int getNumberOfElements(int* arr) {
    int i = 0;
    while (arr[i] != -1) {
        i++;
    }
    return i;
}
void implementDeleteAtIndex() {
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
    int position = 0;
    cout << "Enter the index to delete the element: ";
    cin >> position;
    deleteAtIndex(arr, position, numOfEleInArr);
    cout << "New ";
    displayArr(arr, numOfEleInArr);
}
int main() {
    implementDeleteAtIndex();
    return 0;
}
