

def isAnagram(s: str, t: str) -> bool:
    s_char_count = {} # to store s's count of characters
    t_char_count = {} # to store t's count of characters

    for c in s:
        if (c in s_char_count):
            s_char_count[c] += 1
        else:
            s_char_count[c] = 1

    for c in t:
        if (c in t_char_count):
            t_char_count[c] += 1
        else:
            t_char_count[c] = 1

    return s_char_count == t_char_count

s = "anagram"
t = "nagaram"

print(isAnagram(s, t))

# Given two strings s and t, return true if t is an anagram of s, and false otherwise.

# An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
# typically using all the original letters exactly once.
