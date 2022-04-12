from typing import List


def maxWidthOfVerticalArea(points: List[List[int]]) -> int:

    verticalWidth = []

    #add distances to a list
    for i in range(len(points)):
        verticalWidth.append(points[i][0])
    
    verticalWidth.sort()

    #find max gap b/n two consecutive points
    maxWidth = 0
    for i in range(len(verticalWidth)-1):
        diff = verticalWidth[i+1] - verticalWidth[i]
        if diff > maxWidth:
            maxWidth = diff

    return maxWidth


points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]

print(maxWidthOfVerticalArea(points))

'''
Given n points on a 2D plane where points[i] = [xi, yi], 
Return the widest vertical area between two points such that no points are inside the area.

A vertical area is an area of fixed-width extending infinitely along the y-axis (i.e., infinite height). 
The widest vertical area is the one with the maximum width.

Note that points on the edge of a vertical area are not considered included in the area.
'''
