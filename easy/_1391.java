package easy;

import java.util.Arrays;
import java.util.ArrayList;

public class _1391 {
    public static void main(String[] args) {
        int[] nums = { 1, 2, 3, 4, 0 };
        int[] index = { 0, 1, 2, 3, 0 };
        int[] target = createTargetArray(nums, index);
        System.out.println(Arrays.toString(target));
    }

    public static int[] createTargetArray(int[] nums, int[] index) {
        ArrayList<Integer> target = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            target.add(index[i], nums[i]);
        }
        return target.stream().mapToInt(i -> i).toArray();
    }
}

// Given two arrays of integers nums and index. Your task is to create target
// array under the following rules:

// Initially target array is empty.
// From left to right read nums[i] and index[i], insert at index index[i] the
// value nums[i] in target array.
// Repeat the previous step until there are no elements to read in nums and
// index.

// Return the target array.

// It is guaranteed that the insertion operations will be valid.
