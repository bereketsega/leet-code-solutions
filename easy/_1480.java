package easy;

public class _1480 {
    
    public static int[] runningSum(int[] nums) {
        
        // adding i-1 and i'th element of nums to store on i'th index
        for (int i = 1; i < nums.length; i++) {
            nums[i] = nums[i-1] + nums[i];
        }

        return nums;
    }

    // Test
    public static void main(String[] args) {
        
        int[] nums = { 1, 2, 3, 4};
        
        // displaying the result array
        for (int i : runningSum(nums)) {
            System.out.println(i);
        }
    }

}

/*

Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

*/
