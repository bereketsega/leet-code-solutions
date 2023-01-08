def xorOperation(n: int, start: int) -> int:
    r = 0
    for i in range(n):
        c = start + 2 * i
        r ^= c
    return r


print(xorOperation(4, 3))

# You are given an integer n and an integer start.

# Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.

# Return the bitwise XOR of all elements of nums.
