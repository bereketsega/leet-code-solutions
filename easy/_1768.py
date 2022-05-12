


def mergeAlternately( word1: str, word2: str) -> str:
    f = 0
    s = 0
    w = ""
    while (f < len(word1) and s < len(word2)):
        w = w + word1[f]
        f+=1

        w = w + word2[s]
        s+=1
    
    while (f < len(word1)):
        w = w + word1[f]
        f+=1

    while (s < len(word2)):
        w = w + word2[s]
        s+=1

    return w



word1 = "abc"
word2 = "pqr"

print(mergeAlternately(word1, word2))

'''
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

'''
