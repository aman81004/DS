//Two elements of an array a,a[i] and a[j] form an inversion if a[i]>a[j]and i<j .Given an array of integer.Find the inversion count in the array.
#include <iostream>
#include <vector>
using namespace std;


int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
    int i = left;      
    int j = mid + 1;    
    int k = 0;          
    int invCount = 0;

    vector<int> temp(right - left + 1);

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            invCount += (mid - i + 1); 
        }
    }

   
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    
    for (int p = 0; p < temp.size(); ++p) {
        arr[left + p] = temp[p];
    }

    return invCount;
}


int countInversions(vector<int>& arr, int left, int right) {
    if (left >= right) return 0;

    int mid = left + (right - left) / 2;
    int invCount = 0;

    invCount += countInversions(arr, left, mid);
    invCount += countInversions(arr, mid + 1, right);
    invCount += mergeAndCount(arr, left, mid, right);

    return invCount;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int totalInversions = countInversions(arr, 0, n - 1);
    cout << "Inversion Count is: " << totalInversions << endl;

    return 0;
}
