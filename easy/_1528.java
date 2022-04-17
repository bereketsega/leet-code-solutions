package easy;

public class _1528 {

    public static String restoreString(String s, int[] indices) {
        char[] shuffleChars = new char[s.length()];
        int i = 0;
        for (char c : s.toCharArray()) {
            shuffleChars[indices[i]] = c;
            i++;
        }
        return String.valueOf(shuffleChars);
    }

    public static void main(String[] args) {
        String s = "codeleet";
        int[] indices = {4,5,6,7,0,2,1,3};

        String res = restoreString(s, indices);
        
        System.out.println(res);
    }
}

/*
You are given a string s and an integer array indices of the same length. 
The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.

Return the shuffled string.
*/
