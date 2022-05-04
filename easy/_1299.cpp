#include <iostream>
#include <vector>

std::vector<int> replaceElements(std::vector<int>& arr) {
    int last = arr.size()-1;
    int max = arr[last];
    int tmp = max;
    arr[last] = -1;
    for (int i = last-1; i >= 0; i--) {
       if (tmp > max) {
           max = tmp;
       }
       tmp = arr[i];
       arr[i] = max;
    }
    return arr;
}

int main() {
    std::vector<int> arr = {17,18,5,4,6,1};

    std::vector<int> res = replaceElements(arr);
    for (int i = 0; i < res.size(); i++) {
        std::cout << res[i] << " ";
    }
    std:: cout << std::endl;
    
    return 0;
}

/*
Given an array arr, replace every element in that array with the greatest element among the elements to its right, 
and replace the last element with -1.

After doing so, return the array.
*/
