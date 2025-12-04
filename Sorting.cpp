#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left;
    int j = mid + 1;

    while(i <= mid && j <= right) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while( i <= mid) temp.push_back(arr[i++]);
    while(j <= right) temp.push_back(arr[j++]);

    for(int k = 0; k < temp.size(); k++) {
        arr[left+k] = temp[k];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    // base case
    if(left >= right) return;
    int mid = left + (right - left)/2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

int main() {

    vector<int> arr = {6, 5, 12, 10, 9, 1};
    int n = arr.size();

    cout << "Original Array" << endl;
    for(int x: arr) {
        cout << x << " ";
    }

    mergeSort(arr, 0, n-1);

    cout << "sorted Array" << endl;
    for(int x: arr) {
        cout << x << " ";
    }


    return 0;
    
}