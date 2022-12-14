package hard;

import java.util.Arrays;

public class _4 {

    /**
     * Finds the median of two arrays
     * 
     * @param nums1 the first array
     * @param nums2 the second array
     * @return the median
     */
    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        int[] res = combineSort(nums1, m, nums2, n);
        int len = res.length;
        // case: odd
        boolean odd = (len % 2 == 1) ? true : false;
        if (odd) {
            int mid = len / 2;
            return res[mid];
        }
        // case: even
        else {
            int first = (len / 2) - 1;
            int second = (len / 2);
            int sum = res[first] + res[second];
            return sum / 2.0;
        }
    }

    /**
     * combines two arrays then returns after sorting
     * 
     * @param nums1 the first array
     * @param m     length of the first array
     * @param nums2 the second array
     * @param n     length of the second array
     * @return the combined and sorted array
     */
    public static int[] combineSort(int[] nums1, int m, int[] nums2, int n) {
        int[] res = new int[m + n];
        int i = 0;
        // populate
        for (; i < m; i++) {
            res[i] = nums1[i];
        }
        for (int j = 0; j < n; j++) {
            res[i] = nums2[j];
            i++;
        }
        // sort
        Arrays.sort(res);
        return res;
    }

    public static void main(String[] args) {
        int[] nums1 = { 1, 3 };
        int[] nums2 = { 2 };

        double ans = findMedianSortedArrays(nums1, nums2);
        System.out.println(ans);
    }

}

/**
 * Given two sorted arrays nums1 and nums2 of size m and n respectively,
 * return the median of the two sorted arrays.
 */
