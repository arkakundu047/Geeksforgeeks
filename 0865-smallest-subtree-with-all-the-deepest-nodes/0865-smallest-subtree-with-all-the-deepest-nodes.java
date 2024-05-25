/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int deepestLevel = 0;
    TreeNode deepestTree = null;
    public TreeNode subtreeWithAllDeepest(TreeNode root) {
        helper(root, 0);
        return deepestTree;
    }
    private int helper(TreeNode node, int level) {
        if (node == null) {
            return level;
        }
        int leftLevel = helper(node.left, level + 1);
        int rightLevel = helper(node.right, level + 1);
        if (leftLevel == rightLevel && leftLevel >= deepestLevel) {
            deepestLevel = leftLevel;
            deepestTree = node;
        }
        return Math.max(leftLevel, rightLevel);
    }
}