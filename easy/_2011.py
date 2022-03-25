from typing import List


def finalValueAfterOperations(operations: List[str]) -> int:
    operationsCount = 0

    for ele in operations:
        if ele == "++X" or ele == "X++":
            operationsCount+=1
        else:
            operationsCount-=1
    return operationsCount


operations = ["--X","X++","X++"]

print(finalValueAfterOperations(operations))

'''
There is a programming language with only four operations and one variable X:

    ++X and X++ increments the value of the variable X by 1.
    --X and X-- decrements the value of the variable X by 1.

Initially, the value of X is 0.

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.
'''
