#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& v, int low, int high) {
    int pivot = v[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (v[j] < pivot) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return i + 1;
}


int kthSmallest(vector<int>& v, int low, int high, int k) {
    if (low <= high) {
        int pivotIndex = partition(v, low, high);

        if (pivotIndex == k - 1) return v[pivotIndex];
        else if (pivotIndex > k - 1) {
            return kthSmallest(v, low, pivotIndex - 1, k);
        } else {
            return kthSmallest(v, pivotIndex + 1, high, k);
        }
    }
    return -1; 
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Enter the value of k (1-based index): ";
    cin >> k;

    if (k < 1 || k > n) {
        cout << "Invalid value of k!" << endl;
        return 0;
    }

    int result = kthSmallest(v, 0, n - 1, k);
    cout << "The " << k << "-th smallest element is: " << result << endl;

    return 0;
}
