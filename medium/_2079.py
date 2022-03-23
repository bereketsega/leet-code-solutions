def wateringPlants(plants, capacity):
    """
    :type plants: List[int]
    :type capacity: int
    :rtype: int
    """
    origCapacity = capacity
    step = 0
    i = 0
    while (i < len(plants)):
        # check if you have enough water
        if origCapacity >= plants[i]:
            step+=1 # add step for going forward
        else:
            step += 2*(i)+1 # add step for going back and forward
            origCapacity = capacity # fill up the tank

        origCapacity -= plants[i] # water the plant 

        i+=1 # and move on

    return step

plants = [2,2,3,3]; capacity = 5

print(wateringPlants(plants, capacity))

'''
You want to water n plants in your garden with a watering can. 
The plants are arranged in a row and are labeled from 0 to n - 1 from left to right where the ith plant is located at x = i. 
There is a river at x = -1 that you can refill your watering can at.

Each plant needs a specific amount of water. You will water the plants in the following way:

    Water the plants in order from left to right.
    After watering the current plant, if you do not have enough water to completely water the next plant, return to the river to fully refill the watering can.
    You cannot refill the watering can early.

You are initially at the river (i.e., x = -1). It takes one step to move one unit on the x-axis.

Given a 0-indexed integer array plants of n integers, where plants[i] is the amount of water the ith plant needs, and an integer capacity representing the watering can capacity, 
return the number of steps needed to water all the plants.
'''
