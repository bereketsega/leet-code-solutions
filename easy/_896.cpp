#include <iostream>
#include <vector>

using namespace std;

bool isMonotonic(vector<int>& nums) {
    
    int inc = 0; // to count increasing
    int dec = 0; // to count decreasing 

    // count
    for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i] >= nums[i+1]) {
            inc++;
        }
        if (nums[i] <= nums[i+1]) {
            dec++;
        }
    }
    
    // check if elements are either decreasing or increasing
    if (inc == nums.size()-1 || dec == nums.size()-1) return true;

    return false;
}

int main() {
    
    vector<int> nums = {1,2,2,3};
    
    cout << isMonotonic(nums) << endl;

    return 0;
}