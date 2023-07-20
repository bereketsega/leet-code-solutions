from typing import List


def groupAnagrams(strs: List[str]) -> List[List[str]]:
    string_to_anagram = {} # key, value: sorted_str, [...str]
    for word in strs:
        sorted_str =''.join(sorted(word))
        if sorted_str in string_to_anagram:
            string_to_anagram[sorted_str].append(word)
        else:
            string_to_anagram[sorted_str] = [word]

    res = []
    for key in string_to_anagram:
        res.append(string_to_anagram[key])

    return res

strs = ["eat","tea","tan","ate","nat","bat"]
print(groupAnagrams(strs))

'''
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once.
'''
