#include <iostream>
using namespace std;

struct studentMarks {
    int marks[5];  
    studentMarks *next;
    studentMarks(int value[]) {
        for(int i=0;i<5;i++) {
            marks[i]=value[i];
        }
        next=nullptr;
    }
    float avgMarks() {
        float sum=0;
        for(int i=0;i<5;i++) {
            sum +=marks[i];
        }
        return sum/5;
    }
};
studentMarks *insert(studentMarks *head, int values[]) {
    studentMarks *newStudent = new studentMarks(values);
    newStudent->next = head;
    return newStudent;
}
void display(studentMarks *head) {
    studentMarks *current=head;
    while(current!=nullptr) {
        for(int i=0;i<5;i++) {
            cout<<current->marks[i]<<" ";
        }
        cout << endl;
        cout <<"Average: "<<current->avgMarks()<<endl;
        current = current->next;
    }
}
int main() {
    studentMarks *head=nullptr ;
    char choice='y';
    while(tolower(choice)!='n') {
        int values[5];
        cout<<"Enter marks for the student (5 values): ";
        for(int i=0;i<5;i++) {
            cin>>values[i];
        }
        head=insert(head, values);
        cout<<"Enter 'n' to exit, else press any key to continue: ";
        cin>>choice;
    }
    cout<<"Linked List:\n";
    display(head);
    while (head!=nullptr) {
        studentMarks *temp=head;
        head=head->next;
        delete temp;
    }
    return 0;
}
