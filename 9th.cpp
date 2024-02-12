// // Linked list
// // #include <iostream>
// // using namespace std;
// // struct Node {
// //     int data;
// //     Node* next;
// //     Node(int value) : data(value), next(nullptr) {}
// // };
// // Node* insert(Node* head, int value) {
// //     Node* newNode = new Node(value);
// //     newNode->next = head;
// //     return newNode;
// // }
// // void display(Node* head) {
// //     Node* current = head;
// //     while (current != nullptr) {
// //         cout << current->data << " ";
// //         current = current->next;
// //     }
// //     cout << endl;
// // }
// // int main() {
// //     Node* head = nullptr;
// //     head = insert(head, 51);
// //     head = insert(head, 48);
// //     head = insert(head, 33);
// //     cout << "Linked List: ";
// //     display(head);
// // }

// // #include <iostream>
// // using namespace std;
// // struct Node {
// //     int data;
// //     Node* next;

// //     Node(int value) : data(value), next(nullptr) {}
// // };

// // Node* insert(Node* head, int value) {
// //     Node* newNode = new Node(value);
// //     newNode->next = head;
// //     return newNode;
// // }//new node

// // void display(Node* head) {
// //     Node* current = head;//new nodes
// //     while (current != nullptr) {
// //         cout << current->data << " ";
// //         current = current->next;
// //     }
// //     cout << endl;
// // };//in reverse order

// // int main() {
// //     Node* head = nullptr;// first node

// //     head=insert(head, 2);
// //     head=insert(head, 30);
// //     head=insert(head, 3);

// //     cout << "Linked List: ";
// //     display(head);

// //     return 0;
// // }

// //WAP to calculate and display the sum and product of diagonal elements of 2d array. You must traverse through the array for this.

// #include "iostream"
// using namespace std;

// int main() {
//     int rows, cols;
//     cin>>rows>>cols;
//     int arr[rows][cols];
//     for(int i=0; i<rows;i++) {
//         for(int j=0;j<cols;j++) {
//             cin>>arr[i][j];
//         }
//     }//array creation
//     int sum=0, product=1;
//     for(int i=0;i<rows;i++) {
//         for(int j=0;j<cols;j++) {
//             if(i==j){
//                 sum+=arr[i][j];
//                 product*=arr[i][j];
//             }
//         }
//     }
//     cout<<sum<<endl<<product<<endl;
// }


// // Function to calculate the sum of data in the linked list
// int sumData(Node* head) {
//     int sum = 0;
//     Node* current = head;
//     while (current != nullptr) {
//         sum += current->data;
//         current = current->next;
//     }
//     return sum;
// }

//         int dataSum = sumData(head);

//     cout << "Sum of data: " << dataSum << endl;
