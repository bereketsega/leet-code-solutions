#include <iostream>
#include <vector>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {

    int len = nums.size();

    int pos[len/2]; // store positive values
    int neg[len/2]; // store negative values
    
    int posPointer = 0; // positive array index
    int negPointer = 0; // negative array index
    
    // store positive and negative integers in separate array
    for (int i = 0; i < len; i++) {
        //case: positive 
        if (nums[i] > 0) {
            pos[posPointer++] = nums[i];
        }
        //case: negative 
        else if (nums[i] < 0) {
            neg[negPointer++] = nums[i];
        }
    }
    
    posPointer = 0;
    negPointer = 0;

    // rearrange to meet the condition
    for (int i = 0, j = 1; i < len && j < len ; i+=2, j+=2) {
        
        nums[i] = pos[posPointer++];
        
        nums[j] = neg[negPointer++];
        
    }
    
    return nums;
}

int main() {
    vector<int> nums = {3,1,-2,-5,2,-4};

    rearrangeArray(nums);

    for(int i = 0; i < nums.size()-1; i++) {
        cout << nums[i] << ",";
    }
    cout << nums[nums.size()-1];
    cout << endl;

    return 0;
}

/*
You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

    Every consecutive pair of integers have opposite signs.
    For all integers with the same sign, the order in which they were present in nums is preserved.
    The rearranged array begins with a positive integer.

Return the modified array after rearranging the elements to satisfy the aforementioned conditions.
*/
