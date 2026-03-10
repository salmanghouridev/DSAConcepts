#include "iostream"
#include <algorithm>
using namespace std;
int printAllPairs(int arr[], int n) {

  for (int i = 0; i < n; i++) {
    int x = arr[i];
    for (int j = i + 1; j < n; j++) {
      int y = arr[j];
      cout << x << "," << y << endl;
    }
    cout << endl;
  }

  return 0;
}

int main() {
  int arr[] = {1, 54, 3, 22, 44, 6, 71, 2, 4, 10};
  int n = sizeof(arr) / sizeof(int);
  sort(arr, arr + n);
  printAllPairs(arr, n);
}
