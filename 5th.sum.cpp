// // wap in cpp to find largest and 2nd largest num from n nums using an array ?
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     if (n < 2) {
//         cout << "finding the largest and second-largest." << endl;
//         return 1;
//     }
//     int nums[n];
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }
//     int largest = min ;          
//     int secondLargest = min;    
//     for (int i = 0; i < n; i++) {
//         if (nums[i] > largest) {
//             secondLargest = largest;
//             largest = nums[i];
//         } else if (nums[i] > secondLargest && nums[i] != largest) {
//             secondLargest = nums[i];
//         }
//     }
//     cout << "Largest Number: " << largest << endl;
//     cout << "Second Largest Number: " << (secondLargest != min ? secondLargest : -1) << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

void largestNumber(int *arr, int size) {
    int maximum1=arr[0], maximum2=arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > maximum1) {
            maximum2 = maximum1;
            maximum1 = arr[i];
        }
    }
    cout << maximum1 << " " << maximum2 << endl;
    return;
}
int main() {
    int n = 0;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    largestNumber(arr,n);

    return 0;
}
