from typing import List


def searchMatrix(matrix: List[List[int]], target: int) -> bool:
    low = 0
    high = len(matrix)*len(matrix[0])
    
    while (low <= high):
        mid = low + ((high - low) // 2)
        row = mid // len(matrix[0])
        col = mid % len(matrix[0])
        if (row == len(matrix) or col == len(matrix[0])):
            return False
        if (matrix[row][col] == target):
            return True
        elif (target > matrix[row][col]):
            low = mid + 1
        else:
            high = mid - 1

    return False


matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
target = 3
# Output: true
print(searchMatrix(matrix, target))


# You are given an m x n integer matrix matrix with the following two properties:

#     Each row is sorted in non-decreasing order.
#     The first integer of each row is greater than the last integer of the previous row.

# Given an integer target, return true if target is in matrix or false otherwise.

# You must write a solution in O(log(m * n)) time complexity.
