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

void quickSort(vector<int>& v, int low, int high) {
    if (low < high) {
        int pivot = partition(v, low, high);
        quickSort(v, low, pivot - 1);
        quickSort(v, pivot + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> v(n);

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Before sort: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    quickSort(v, 0, n - 1);

    cout << "After sort: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
