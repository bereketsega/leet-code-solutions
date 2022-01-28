
def largestAltitude(gain):
    
    elementAlt = 0 # altitude of current element
    maxAlt = 0     # largest altitude of all elements
    
    for i in range(len(gain)):
        
        elementAlt += gain[i] # update the current altitude
        
        # compare with max and update accordingly
        if elementAlt > maxAlt:
            maxAlt = elementAlt

    return maxAlt

gain = [-4,-3,-2,-1,4,3,2]

print(largestAltitude(gain))

'''
There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. 
The biker starts his trip on point 0 with altitude equal 0.

You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i and i + 1 for all (0 <= i < n). 
Return the highest altitude of a point.
'''
