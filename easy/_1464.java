package easy;

public class _1464 {
    public static int maxProduct(int[] nums) {
        int max = Integer.MIN_VALUE;
        int secMax = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] >= max) {
                secMax = max;
                max = nums[i];
            }
            if (nums[i] < max && nums[i] > secMax) {
                secMax = nums[i];
            }
        }
        return (max - 1) * (secMax - 1);
    }

    public static void main(String[] args) {
        System.out.println(maxProduct(new int[] { 3, 4, 5, 2 }));
    }
}

// Given the array of integers nums, you will choose two different indices i and
// j of that array.
// Return the maximum value of (nums[i]-1)*(nums[j]-1).
