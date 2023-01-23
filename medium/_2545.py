from typing import List


def sortTheStudents(score: List[List[int]], k: int) -> List[List[int]]:
    return sorted(score, key=lambda a: -a[k])


score = [[10,6,9,1],[7,5,11,2],[4,8,3,15]]
k = 2


print(sortTheStudents(score, k))

# There is a class with m students and n exams. 
# You are given a 0-indexed m x n integer matrix score, where each row represents one student and score[i][j] denotes the score the ith student got in the jth exam. 
# The matrix score contains distinct integers only.

# You are also given an integer k. Sort the students (i.e., the rows of the matrix) by their scores in the kth (0-indexed) exam from the highest to the lowest.

# Return the matrix after sorting it.
