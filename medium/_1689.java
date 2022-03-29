package medium;

public class _1689 {

    public static int minPartitions(String n) {
        // find max of int(digit) in n
        char max = n.charAt(0);
        
        for (int i = 0; i < n.length(); i++) {
            if (n.charAt(i) > max) {
                max = n.charAt(i);
            }
        }
    
        return Integer.parseInt(String.valueOf(max));
    }

    public static void main(String[] args) {
        String n = "82734";

        System.out.println(minPartitions(n));
    }

}

/*
A decimal number is called deci-binary if each of its digits is either 0 or 1 without any leading zeros. 
For example, 101 and 1100 are deci-binary, while 112 and 3001 are not.

Given a string n that represents a positive decimal integer, 
return the minimum number of positive deci-binary numbers needed so that they sum up to n.
*/
