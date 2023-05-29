package easy;

import java.util.HashMap;
import java.util.Map;
import java.util.Stack;

public class _20 {
    public static void main(String[] args) {
        String s = "()[]{}";
        System.out.println(isValid(s));
    }

    public static boolean isValid(String s) {
        Stack<Character> open = new Stack<>();
        Map<Character, Character> openClose = new HashMap<>() {{
                put('[', ']');
                put('{', '}');
                put('(',')');
            }
        };

        for (int i = 0; i < s.length(); i++) {
            if (openClose.containsKey(s.charAt(i))) {
                open.add(s.charAt(i));
            } else {
                if(s.charAt(i) == (openClose.get(open.peek())) && !open.isEmpty()) {
                    open.pop();
                } else {
                    return false;
                }
            }
        }
        return open.size() == 0;
    }
}

/*
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 * An input string is valid if:
 *  Open brackets must be closed by the same type of brackets.
 *  Open brackets must be closed in the correct order.
 *  Every close bracket has a corresponding open bracket of the same type.
 */
