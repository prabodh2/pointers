//wap to calculate passing percent and failing percent age of a given subject ?
// # include <iostream>
// using namespace std;

// int main() {
//     int totalStudents, passedStudents, failedStudents;
//     cout << "Enter the total number of students: ";
//     cin >> totalStudents;
//     cout << "Enter the number of students who passed: ";
//     cin >> passedStudents;
//     if (totalStudents < 0 || passedStudents < 0 || passedStudents > totalStudents) {
//         cout << "Invalid input. Please enter valid values." << endl;
//         return 1;
//     }
//     failedStudents = totalStudents - passedStudents;
//     double passingPercentage = (static_cast<double>(passedStudents) / totalStudents) * 100;
//     double failingPercentage = (static_cast<double>(failedStudents) / totalStudents) * 100;
//     cout << "Passing Percentage: " << passingPercentage << "%" << endl;
//     cout << "Failing Percentage: " << failingPercentage << "%" << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// void getPassedAndFailedStudents(int *arr, int size){
//     float passedstudents=0;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] >= 40) {
//             passedstudents++;
//         }
//     }
//     int passedStudents = passedstudents/size * 100;
//     int failedStudents = 100 - passedStudents;
//     cout << "Passed students : " << passedStudents << endl;
//     cout << "Failed students : " << failedStudents << endl;
//     return ;
// }
// int main() {
//     int n = 0;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr3[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     getPassedAndFailedStudents(arr, n);
//     return 0;
// }

#include <iostream>
using namespace std;

void getPassedAndFailedStudents(int *sub1, int *sub2, int *sub3, int size){
    int passedStudents=0;
    for (int i = 0; i < size; i++) {
        if (sub1[i] >= 40 && sub2[i] >= 40 && sub3[i] >= 40) {
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
    }
    getPassedAndFailedStudents(dsa, html, css, n);
    return 0;
}
