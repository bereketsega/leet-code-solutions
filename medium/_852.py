from typing import List


def peakIndexInMountainArray(arr: List[int]) -> int:
    low = 0
    high = len(arr)-1
    while (low <= high):
        mid = int(low + ((high - low) / 2))
        if (arr[mid-1]<arr[mid]>arr[mid+1]):
            return mid
        #check right
        elif (arr[mid] < arr[mid+1]):
            low = mid + 1
        #check left
        else:
            high = mid - 1

    return -1

print(peakIndexInMountainArray([0,2,1,0]))


# An array arr a mountain if the following properties hold:

#     arr.length >= 3
#     There exists some i with 0 < i < arr.length - 1 such that:
#         arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
#         arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

# Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

# You must solve it in O(log(arr.length)) time complexity.
