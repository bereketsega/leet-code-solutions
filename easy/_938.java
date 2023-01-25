package easy;

import java.util.Stack;

public class _938 {

    // Definition fo a binary tree node.
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    public int rangeSumBST(TreeNode root, int low, int high) {
        int sum = 0;
        Stack<TreeNode> s = new Stack<TreeNode>();
        TreeNode curr = root;
        while (curr != null || s.size() > 0) {
            while (curr != null) {
                s.push(curr);
                curr = curr.left;
            }
            curr = s.pop();
            if (curr.val >= low && curr.val <= high) {
                sum += curr.val;
            }
            curr = curr.right;
        }
        return sum;
    }

    // TODO: Test

}

// Given the root node of a binary search tree and two integers low and high,
// return the sum of values of all nodes with a value in the inclusive range
// [low, high].
