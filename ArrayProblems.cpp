#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            ans = mid;       // 2
            high = mid - 1;
        } else if(arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// O(log n)

int lastOccurrence(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size()-1;
    int ans = -1;

    while(low <= high) {
        int mid = low + (high - low)/2;
        if(arr[mid] == target) {
            ans = mid;
            low = mid + 1;
        } else if(arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}
// O(log n)

int main() {

    vector<int> arr = { 1, 2, 3, 3, 3, 3, 3, 5, 8 };
    int target = 3;

    int first = firstOccurrence(arr, target);
    int last = lastOccurrence(arr, target);

    cout << "First occurrence at Index: " << first << endl;
    cout << "Last occurrence at Index: " << last << endl;
     
    return 0;
}