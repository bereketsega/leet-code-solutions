def lengthOfLongestSubstring(s: str) -> int:
    seen = {}
    left = right = longest = 0
    while right < len(s):
        if s[right] in seen and seen[s[right]] >= left:
            left = seen[s[right]] + 1
            seen[s[right]] = right
            right += 1
        else:
            seen[s[right]] = right
            right += 1
            longest = max(longest, right - left)

    return longest

print(lengthOfLongestSubstring("dvdt"))
