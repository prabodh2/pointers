// write a cpp program to read, display n numbers (take n from user) and find mean of n numbers using an array
#include <iostream>
using namespace std;
int main() {
    int n = 0, mean = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mean += arr[i];
    }
    mean /= n;
    cout << "array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << mean <<endl;
}
