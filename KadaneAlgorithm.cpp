#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxSubarraySum(vector<int>& arr) {
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int num: arr) {
        currentSum += num;  
        if(currentSum > maxSum) {  
            maxSum = currentSum;   
        }
        if(currentSum < 0) {   
            currentSum = 0;
        }
    }
    return maxSum;
}
int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    cout << "Max sum is: " << maxSubarraySum(arr);
    return 0;
}