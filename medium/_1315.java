package medium;

/**
 * _1315
 */
public class _1315 {
    static int sum = 0;
    
    public static int sumEvenGrandParent(TreeNode root) {
        if (root != null) {
            addGranchildren(root);
            sumEvenGrandParent(root.left);
            sumEvenGrandParent(root.right);
        }
        return sum;
    }

    public static void addGranchildren(TreeNode root) {
        if (root.val % 2 == 1) {
            return;
        }
        if (root.left != null) {
            if (root.left.left != null) {
                sum+= root.left.left.val;
            }
            if (root.left.right != null) {
                sum += root.left.right.val;
            }
            
        }
        if (root.right != null) {
            if (root.right.right != null) {
                sum+= root.right.right.val;
            } 
            if (root.right.left != null)
            sum += root.right.left.val;
        }       
    }

    // Test
    public static void main(String[] args) {
        TreeNode root = new TreeNode(6);

        root.left = new TreeNode(7);
        root.right = new TreeNode(8);

        root.left.left = new TreeNode(2);
        root.left.right = new TreeNode(7);

        root.right.left = new TreeNode(1);
        root.right.right = new TreeNode(3);

        root.right.right.right = new TreeNode(5);

        System.out.println(sumEvenGrandParent(root));
    }
    
}


class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(){};

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }

}

// Given the root of a binary tree, 
// return the sum of values of nodes with an even-valued grandparent. 
// If there are no nodes with an even-valued grandparent, return 0.

// A grandparent of a node is the parent of its parent if it exists.
