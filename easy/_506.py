from typing import List


def findRelativeRanks(score: List[int]) -> List[str]:
    # reverse rank
    tempScore = []
    for i in score:
        tempScore.append(i)
    tempScore.sort(reverse=True)
    # map score to rank
    scoreToRank = {}
    for i in range(len(tempScore)):
        scoreToRank[tempScore[i]] = i
    # update score
    for i in range(len(score)):
        if score[i] == tempScore[0]:
            score[i] = "Gold Medal"
        elif score[i] == tempScore[1]:
            score[i] = "Silver Medal"
        elif score[i] == tempScore[2]:
            score[i] = "Bronze Medal"
        else:
            idx = scoreToRank[score[i]]
            score[i] = str(idx+1)

    return score


score = [10,3,8,9,4]

print(findRelativeRanks(score))

'''
You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. 
All the scores are guaranteed to be unique.

The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. 
The placement of each athlete determines their rank:

    The 1st place athlete's rank is "Gold Medal".
    The 2nd place athlete's rank is "Silver Medal".
    The 3rd place athlete's rank is "Bronze Medal".
    For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").

Return an array answer of size n where answer[i] is the rank of the ith athlete.
'''
