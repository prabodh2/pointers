// //wap to create array and take user input and use the function and pass the array and find ou the smallest element and largest in the array and wap
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
//     const int maxSize = 5;
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
// # include<iostream>
// using namespace std;
// int main(){
//     int sub[5]={11,12,13,14,15};
//     int sub1[5]={22,23,24,25,26};
//     int sub2[5]={38,39,40,41,42};
//     int *ptrarray[3]={sub,sub1,sub2}; 
//     for (int i=0;i<3;i++)
//             for (int j = 0; j < 5; j++) {
//                 cout << ptrarray[i][j] << " ";
//         }
//         cout << endl;
// }
// #include "iostream"
// using namespace std;
// void sumOfEachSubject(int **subjects, int nOfSubjects, int numOfStundets) {
//   for (int i = 0; i < nOfSubjects; i++) {
//     int *subject = subjects[i];
//     for (int j = 0; j < numOfStundets; j++) {
//       cout << subject[j] << " ";
//     }
//     cout << " ";
//   }
// }
// int main() {
//   int num = 0;
//   cout << "Enter the number of students: ";
//   cin >> num;
//   int subject1[num];
//   int subject2[num];
//   int subject3[num];
//   for (int i = 0; i < num; i++) {
//     cout << "Enter the marks of 1st subject: ";
//     cin >> subject1[i];
//     cout << "Enter the marks of 2nd subject: ";
//     cin >> subject2[i];
//     cout << "Enter the marks of 3rd subject: ";
//     cin >> subject3[i];
//   }
//   int *ptrs[3] = {subject1, subject2, subject3};
//   sumOfEachSubject(ptrs, 3, num);
//   return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int rows = 3;
//     int cols = 5;
//     int myArray[rows][cols];
//     cout << "Enter elements for the array (" << rows << "x" << cols << "):" << endl;
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             cout << "Enter element at position (" << i + 0 << "," << j + 0 << "): ";
//             cin >> myArray[i][j];
//         }
//     }
//     cout << "You entered the following 2D array is :" << endl;
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             cout << myArray[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

void getPassedAndFailedStudents(int *sub1, int *sub2, int *sub3, int *sub4, int *sub5, int size){
    int passedStudents=0;
    for (int i = 0; i < size; i++) {
        if (sub1[i] >= 40 && sub2[i] >= 40 && sub3[i] >= 40 && sub4[i] >= 40 && sub5[i] >= 40) {
            passedStudents++;
        }
    }
    int passedStudentsPrecentage = float(passedStudents)/size * 100;
    int failedStudentsPrecentage = 100 - passedStudentsPrecentage;
    cout << "Passed students precentage: " << passedStudentsPrecentage << endl;
    cout << "Failed students precentage: " << failedStudentsPrecentage << endl;
    return ;
}
int main() {
    int n = 0;
    cout << "Enter the number of students: ";
    cin >> n;
    int dsa[n];
    int html[n];
    int css[n];
    int python[n];
    int cpp[n];
    for  (int i = 0; i < n; i++) {
        cout << endl << "Enter marks of " << i+1 << "th student" << endl;
        cout << "Enter dsa marks: ";
        cin >> dsa[i];
        while (dsa[i] > 100 || dsa[i] < 0){
            cout << "invalid input" << endl;
            cout << "Enter dsa marks: ";
            cin >> dsa[i];
        }
        cout << "Enter html marks: ";
        cin >> html[i];
        while (html[i] > 100 || html[i] < 0){
            cout << "invalid input" << endl;
            cout << "Enter dsa marks: ";
            cin >> html[i];
        }
        cout << "Enter css marks: ";
        cin >> css[i];
        while (css[i] > 100 || css[i] < 0){
            cout << "invalid input" << endl;
            cout << "Enter dsa marks: ";
            cin >> css[i];
        }
        cout << "Enter python marks: ";
        cin >> python[i];
        while(python[i]>100|| python[i] < 0){
                cout << "invalid input" << endl;
                cout << "Enter python marks: ";
                cin >> python[i];
        }
        cout << "Enter cpp marks: ";
        cin >> cpp[i];
        while(cpp[i]>100|| cpp[i]<0){
                cout << "invaild input"<<endl;
                cout << "Enter a cpp marks: ";
                cin >> cpp[i];    
        }
    }
    getPassedAndFailedStudents(dsa, html, css, python,cpp, n);
    int rows = 3;
    int cols = 5;
    int myArray[rows][cols];
    cout << "Enter elements for the array " << rows << "x" << cols << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at position " << i + 0 << "," << j + 0 << " : ";
            cin >> myArray[i][j];
        }
    }
    cout << "You entered the following array is :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << myArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
