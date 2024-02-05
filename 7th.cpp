
// // //     //Traverse 

// // #include <iostream>
// // using namespace std;

// // void insertBeginning(int* array, int element, int &n) {
// //     for (int i = n-1; i >= 0; i--) {
// //         array[i+1] = array[i];
// //     }
// //     array[0] = element;
// //     n++;
// // }
// // void displayArr(int *array, int n) {
// //     cout << "Array : [ ";
// //     for ( int i = 0; i < n; i++) {
// //         if (i == n - 1) {
// //             cout << array[i] << " ]" << endl;
// //         } else {
// //             cout << array[i] << ", " ;
// //         }
// //     }
// // }
// // void InsertAtBeginning() {
// //     int numOfEleInArr; 
// //     cout << "Enter length of array: ";
// //     cin >> numOfEleInArr;
// //     int arr[10] = {0}; 
// //     for (int i = 0; i < numOfEleInArr; i++) {
// //         cin >> arr[i];
// //     }
// //     cout << "current ";
// //     displayArr(arr, numOfEleInArr);
// //     int newEle = 0;
// //     cout << "Enter the element to append: ";
// //     cin >> newEle;
// //     insertBeginning(arr,newEle, numOfEleInArr);
// //     cout << "New ";
// //     displayArr(arr, numOfEleInArr);
// // }
// // int main() {
// //     InsertAtBeginning();

// //     return 0;
// // }

// // //     //Insert

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

// // //     //Insert at position

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

// // //     //Deletion

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void deleteAtIndex(int* arr, int pos, int& n) {
//     if (pos < 0 || pos >= n) {
//         cout << "Invalid index. Element not deleted." << endl;
//         return;
//     }
//     for (int i = pos; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     arr[n - 1] = -1; 
//     n--;
// }
// void displayArr(int* arr, int n) {
//     cout << "Array : [ ";
//     for (int i = 0; i < n; i++) {
//         if (i == n - 1) {
//             cout << arr[i] << " ]" << endl;
//         } else {
//             cout << arr[i] << ", ";
//         }
//     }
// }
// int getNumberOfElements(int* arr) {
//     int i = 0;
//     while (arr[i] != -1) {
//         i++;
//     }
//     return i;
// }
// void implementDeleteAtIndex() {
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
//     int position = 0;
//     cout << "Enter the index to delete the element: ";
//     cin >> position;
//     deleteAtIndex(arr, position, numOfEleInArr);
//     cout << "New ";
//     displayArr(arr, numOfEleInArr);
// }
// int main() {
//     implementDeleteAtIndex();
//     return 0;
// }

// // //     //Searching

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void deleteAtIndex(int* arr, int pos, int& n) {
//     if (pos < 0 || pos >= n) {
//         cout << "Invalid index. Element not deleted." << endl;
//         return;
//     }
//     for (int i = pos; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     arr[n - 1] = -1;
//     n--;
// }
// void displayArr(int* arr, int n) {
//     cout << "Array : [ ";
//     for (int i = 0; i < n; i++) {
//         if (i == n - 1) {
//             cout << arr[i] << " ]" << endl;
//         } else {
//             cout << arr[i] << ", ";
//         }
//     }
// }

// int getNumberOfElements(int* arr) {
//     int i = 0;
//     while (arr[i] != -1) {
//         i++;
//     }
//     return i;
// }
// int searchElement(int* arr, int n, int target) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == target) {
//             return i; 
//         }
//     }
//     return -1; 
// }
// void implementSearchInArray() {
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
//     int target;
//     cout << "Enter the element to search: ";
//     cin >> target;
//     int index = searchElement(arr, numOfEleInArr, target);
//     if (index != -1) {
//         cout << "Element found at index " << index << "." << endl;
//     } else {
//         cout << "Element not found in the array." << endl;
//     }
// }
// int main() {
//     implementSearchInArray();
//     return 0;
// }

// // //     //Sorting

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void deleteAtIndex(int* arr, int pos, int& n) {
//     if (pos < 0 || pos >= n) {
//         cout << "Invalid index. Element not deleted." << endl;
//         return;
//     }
//     for (int i = pos; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     arr[n - 1] = -1;
//     n--;
// }
// void displayArr(int* arr, int n) {
//     cout << "Array : [ ";
//     for (int i = 0; i < n; i++) {
//         if (i == n - 1) {
//             cout << arr[i] << " ]" << endl;
//         } else {
//             cout << arr[i] << ", ";
//         }
//     }
// }
// int getNumberOfElements(int* arr) {
//     int i = 0;
//     while (arr[i] != -1) {
//         i++;
//     }
//     return i;
// }
// void bubbleSort(int* arr, int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j + 1]
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }
// void implementSorting() {
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
//     bubbleSort(arr, numOfEleInArr);
//     cout << "Sorted ";
//     displayArr(arr, numOfEleInArr);
// }
// int main() {
//     implementSorting();
//     return 0;
// }
// #include <iostream>
// using namespace std;

// void inputArray(int arr[], int size) {
//     cout << "Enter elements of the array:" << endl;
//     for (int i = 0; i < size; ++i) {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> arr[i];
//     }
// }

// int findSmallestElement(const int arr[], int size) {
//     int smallest = arr[0];
//     for (int i = 1; i < size; ++i) {
//         if (arr[i] < smallest) {
//             smallest = arr[i];
//         }
//     }
//     return smallest;
// }

// int findLargestElement(const int arr[], int size) {
//     int largest = arr[0];
//     for (int i = 1; i < size; ++i) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     return largest;
// }

// void swapElements(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     const int maxSize = 5; // You can change the size as needed
//     int myArray[maxSize];

//     inputArray(myArray, maxSize);

//     int smallest = findSmallestElement(myArray, maxSize);
//     int largest = findLargestElement(myArray, maxSize);

//     cout << "Original Array:" << endl;
//     for (int i = 0; i < maxSize; ++i) {
//         cout << myArray[i] << " ";
//     }
//     cout << endl;

//     cout << "Smallest Element: " << smallest << endl;
//     cout << "Largest Element: " << largest << endl;

//     // Swap the smallest and largest elements
//     for (int i = 0; i < maxSize; ++i) {
//         if (myArray[i] == smallest) {
//             myArray[i] = largest;
//         } else if (myArray[i] == largest) {
//             myArray[i] = smallest;
//         }
//     }

//     cout << "Array after swapping:" << endl;
//     for (int i = 0; i < maxSize; ++i) {
//         cout << myArray[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
// #include <iostream>

// int main() {
//     const int maxSize = 5; // You can change the size as needed
//     int myArray[maxSize];

//     // Input array elements
//     std::cout << "Enter " << maxSize << " elements of the array:" << std::endl;
//     for (int i = 0; i < maxSize; ++i) {
//         std::cout << "Enter element " << i + 1 << ": ";
//         std::cin >> myArray[i];
//     }

//     // Find the smallest and largest elements
//     int smallest = myArray[0];
//     int largest = myArray[0];

//     for (int i = 1; i < maxSize; ++i) {
//         if (myArray[i] < smallest) {
//             smallest = myArray[i];
//         }
//         if (myArray[i] > largest) {
//             largest = myArray[i];
//         }
//     }

//     // Output the result
//     std::cout << "Smallest Element: " << smallest << std::endl;
//     std::cout << "Largest Element: " << largest << std::endl;

//     return 0;
// }
// #include <iostream>

// int main() {
//     const int maxSize = 5; // You can change the size as needed
//     int myArray[maxSize];

//     // Input array elements
//     std::cout << "Enter " << maxSize << " elements of the array:" << std::endl;
//     for (int i = 0; i < maxSize; ++i) {
//         std::cout << "Enter element " << i + 1 << ": ";
//         std::cin >> myArray[i];
//     }

//     // Find the smallest and largest elements
//     int smallest = myArray[0];
//     int largest = myArray[0];

//     for (int i = 1; i < maxSize; ++i) {
//         if (myArray[i] < smallest) {
//             smallest = myArray[i];
//         }
//         if (myArray[i] > largest) {
//             largest = myArray[i];
//         }
//     }

//     // Output the result
//     std::cout << "Smallest Element: " << smallest << std::endl;
//     std::cout << "Largest Element: " << largest << std::endl;

//     return 0;
// }
// void swapElements(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }
//     // cout << "Array after swapping:" << endl;
//     // for (int i = 0; i < maxSize; ++i) {
//     //     cout << myArray[i] << " ";
//     // }
//     // cout << endl;