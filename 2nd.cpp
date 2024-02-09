// #include <iostream>
// using namespace std;

// struct SubMarks {
//     string sub;
//     int marks;
//     void getSubMarks(int marks, string sub) {
//         this->sub = sub;
//         this->marks = marks;
//     }
//     void displaySubMarks() {
//         cout << "Subject: " << sub << endl;
//         cout << "Marks: " << marks << endl;
//     }
//     void updateMarks(int *marks) {
//         cout << "Enter the updated marks: ";
//         cin >> *marks;
//     }
// };
// struct StudentMarks {
//     struct SubMarks regularMarks[5];
//     void getStudentMarks() {
//         for (int i = 0; i < 5; i++) {
//             cout << "Enter the " << i + 1 << "th subject details" << endl;
//             string sub;
//             int marks;
//             cout << "Enter the subject: ";
//             cin >> sub;
//             cout << "Enter the marks: ";
//             cin >> marks;
//             regularMarks[i].getSubMarks(marks, sub);
//         }
//     }
//     void getFailedSubjects() {
//         cout << "Failed Subjects:" << endl;
//         for (int i = 0; i < 5; i++) {
//             if (regularMarks[i].marks < 35) {
//                 regularMarks[i].displaySubMarks();
//             }
//         }
//     }
//     void updateFailedSubjects() {
//         cout << "Updating Failed Subjects:" << endl;
//         for (int i = 0; i < 5; i++) {
//             if (regularMarks[i].marks < 35) {
//                 regularMarks[i].updateMarks(&regularMarks[i].marks);
//             }
//         }
//     }
// };

// int main() {
//     StudentMarks student;

//     cout << "Enter the student details:" << endl;
//     student.getStudentMarks();

//     student.getFailedSubjects();

//     student.updateFailedSubjects();
//     cout << "Updated Marks:" << endl;
//     student.getFailedSubjects();

//     return 0;
// }
