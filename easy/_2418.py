from typing import List


def sortPeople(names: List[str], heights: List[int]) -> List[str]:

    # find the max element in heights
    def max(h: List[int]):
        m: int = heights[0]
        mI: int = 0
        for i, v in enumerate(h):
            if v > m:
                m = v
                mI = i
        h[mI] = 0
        return mI

    # populate the result with sorted names
    res: List[str] = list()
    c: int = len(names)
    while c > 0:
        i = max(heights)
        res.append(names[i])
        c-=1

    return res


names:List[str] = ["Mary","John","Emma"]
heights:List[int]  = [180,165,170]


print(sortPeople(names, heights))

# You are given an array of strings names, and an array heights that consists of distinct positive integers. 
# Both arrays are of length n.

# For each index i, names[i] and heights[i] denote the name and height of the ith person.

# Return names sorted in descending order by the people's heights.
