#include <iostream>
#include <string>
using namespace std;
struct Student {
    int rollno;
    string name;
    int date_of_birth;
};
int main() {
    int n = 0;
    cout << "Enter the number of students : ";
    cin >> n;
    Student dents[n];
    for (int i = 0; i<n; i++ ) {
        cout << "Enter " << i+1 <<"th student Name: ";
        cin >> dents[i].name;
        cout << "Enter " << i <<"th student Roll Number: ";
        cin >> dents[i].rollno;
        cout << "Enter " << i <<"th student dateofbirth: ";
        cin >> dents[i].date_of_birth;
    }
    for (int i = 0; i < n; i++) {
        cout << "Detailes of " << i+1 << "th student: " << endl;
        cout << "student Name: " << dents[i].name << endl;
        cout << "student Roll Number: " << dents[i].rollno << endl;
        cout << "student dob: " << dents[i].date_of_birth << endl;
    }
    return 0;
}
