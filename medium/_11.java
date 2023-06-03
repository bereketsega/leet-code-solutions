package medium;

public class _11 {
    
    public static int maxArea(int[] height) {
        int max = 0; // store the maximum area
        int l = 0; // left pointer
        int r = height.length-1; // right pointer
        int d = height.length-1; // store distance between two pointer
        
        while (l<r) {
            // check if the current area is bigger
            int min = Math.min(height[l], height[r]);
            int currArea = min*d;
            if (max<currArea) {
                max = currArea;
            }
            // update the lower height
            if (height[l]<height[r]) {
                l++;
            } else {
                r--;
            }
            d--;
        }

        return max;
    }

    /**
     * Test
     */
    public static void main(String[] args) {
        int[] height = {1,8,6,2,5,4,8,3,7};
        System.out.println(maxArea(height)); // Expected: 49
    }
}


/**
 * You are given an integer array height of length n. 
 * There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
 * Find two lines that together with the x-axis form a container, such that the container contains the most water.
 * Return the maximum amount of water a container can store.
 * Notice that you may not slant the container.
 */
