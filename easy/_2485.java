package easy;

public class _2485 {
    public static void main(String[] args) {
        System.out.println(pivotInteger(8)); // Expected: 6
    }

    public static int pivotInteger(int n) {
        int right = total(n);
        int left = 0;
        for (int i = 1; i <= n; i++) {
            left+=i;
            if (left == right) {
                return i;
            } 
            right-=i;
        }
        return -1;
    }

    public static int total(int n) {
        int total = 0;
        for (int i = 1; i <= n; i++) {
            total+=i;
        }
        return total;
    }
}

/*
 Given a positive integer n, find the pivot integer x such that:

    The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.

Return the pivot integer x. If no such integer exists, return -1. 
It is guaranteed that there will be at most one pivot index for the given input.
 */
