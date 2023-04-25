package easy;

import java.util.Arrays;

public class _905 {
    public static void main(String[] args) {
        System.out.println(Arrays.toString(sortArrayByParity(new int[]{3,1,2,4})));
    }
    
    /**
     * T/S:O(n)/O(1)
     * @param nums the array to sort by parity
     * @return the sorted array
     */
    public static int[] sortArrayByParity(int[] nums) {
        // even pointer
        int e = nums.length-1;
        // odd pointer
        int o = 0;

        while (e > o) {
            // odd and even
            int f = nums[o];
            int l = nums[e];
            if (f%2==1 && l%2==0) {
                // swap
                int t = nums[e];
                nums[e] = f;
                nums[o] = t;
                e--;
                o++;
            }
            // odd and odd
            else if (f%2==1 && l%2==1) {
                e--;
            }
            // even and even
            else if (f%2==0 && l%2==0) {
                o++;
            }
            // even and odd
            else {
                e--;
                o++;
            }
        }
        return nums;
   }

}


/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.
*/
