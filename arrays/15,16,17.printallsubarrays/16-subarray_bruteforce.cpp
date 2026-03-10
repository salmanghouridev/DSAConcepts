#include "iostream"
#include <algorithm>
using namespace std;

int print_all_subarrays(int arr[], int n) {
    int maxSum = -1000000;   // CHANGE 1: add this

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;        
            for(int k=i; k<=j; k++){
                cout << arr[k] << ",";
                sum += arr[k];
            }
            
            cout << "sum is " << sum << endl;
            
            if (sum > maxSum) {  // CHANGE 2: add this
                maxSum = sum;
            }
            
            cout << endl;
        }
    }
    
    cout << "Largest sum = " << maxSum << endl;  // CHANGE 3: add this
    return 0;
}

int main() {
    int arr[] = {1, 54, 3, 22, 44, 6, 71, 2, 4, 10};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr + n);
    print_all_subarrays(arr, n);
}
