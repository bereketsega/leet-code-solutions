def smallestNumber(num):
    """
    :type num: int
    :rtype: int
    """
    if num == 0:
        return 0
    str_num = str(num)
    # if num is negative, get rid of the sign for now
    if num < 0:
        str_num = str_num[1:]
    # to store the sorted list of digits of num
    temp_list = [None]*len(str_num)
    # copy each digit of num to temp_list 
    for i in range(0, len(str_num)) :
        temp_list[i] = int(str_num[i])
    # sort non-decreasing if num is positive
    if num > 0:
        temp_list.sort()
    # sor non-increasing if num is negative
    else:
        temp_list.sort(reverse=True)

    first_pointer = 0 # points at the first index
    second_pointer = first_pointer+1 # points at the next index
    # swap the first with next element if it's zero
    while temp_list[first_pointer] == 0:
        first_element = temp_list[first_pointer]
        temp_list[first_pointer] = temp_list[second_pointer]
        temp_list[second_pointer] = first_element
        second_pointer+=1 # point to next element
    # combine each element of temp_list together
    res = int(''.join(map(str, temp_list)))
    # return with negative sign if num was negative else positive
    return res if num > 0 else -abs(res)

num = 310

print(smallestNumber(num))

'''
You are given an integer num. Rearrange the digits of num such that its value is minimized and it does not contain any leading zeros.

Return the rearranged number with minimal value.

Note that the sign of the number does not change after rearranging the digits.
'''
