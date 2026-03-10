#include "iostream"
#include <algorithm>
using namespace std;
int print_all_subarrays(int arr[], int n) {
//print subarray of given array
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
        
      for(int k=i; k<=j;k++){
        cout<<arr[k]<<",";
      }
    cout << endl;
    }

  }

  return 0;
}

int main() {
  int arr[] = {1, 54, 3, 22, 44, 6, 71, 2, 4, 10};
  int n = sizeof(arr) / sizeof(int);
  sort(arr, arr + n);
  print_all_subarrays(arr, n);
}
