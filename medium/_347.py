

from typing import List


def topKFrequent(nums: List[int], k: int) -> List[int]:
    # (number: frequency)
    freq = {}
    ans = []
    for n in nums:
        if n in freq:
            freq[n] += 1
        else:
            freq[n] = 1
    
    # sort by frequency
    least = sorted(freq.values(),reverse=True)[k-1]
    
    # append numbers with frequency of greater than or equal to least
    for n in freq:
        if freq[n] >= least:
            ans.append(n)
    return ans
    
        

print(topKFrequent([1,1,1,2,2,3], 2)) # Expected: [1,2]

'''
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
'''
