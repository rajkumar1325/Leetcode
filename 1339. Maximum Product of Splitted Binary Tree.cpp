
/*
Given the root of a binary tree, split the binary tree into two subtrees by removing one edge such that the product of the sums of the subtrees is maximized.

Return the maximum product of the sums of the two subtrees. Since the answer may be too large, return it modulo 109 + 7.

Note that you need to maximize the answer before taking the mod and not after taking it.

*/








/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:

    // Stores total sum of all nodes in the tree
    long long totalSum = 0;

    // Stores the maximum product found
    long long maxProductValue = 0;

    // Modulo as required by the problem
    static constexpr int MOD = 1e9 + 7;

    // First DFS:     // Computes the sum of the entire tree
    long long computeTotalSum(TreeNode* node) {
        if (node == nullptr)
            return 0;

        return node->val + computeTotalSum(node->left) + computeTotalSum(node->right);
    }

    // Second DFS:    // Computes subtree sums and checks product if we cut here
    long long computeSubtreeSum(TreeNode* node) {
        if (node == nullptr)
            return 0;

        // Get left and right subtree sums
        long long leftSum = computeSubtreeSum(node->left);
        long long rightSum = computeSubtreeSum(node->right);

        // Current subtree sum
        long long currentSum = node->val + leftSum + rightSum;

        // If we cut above this subtree:
        // Part 1 = currentSum
        // Part 2 = totalSum - currentSum
        long long product = currentSum * (totalSum - currentSum);

        // Update maximum product
        maxProductValue = max(maxProductValue, product);

        // Return subtree sum to parent
        return currentSum;
    }

    // ---------------------------------------------------------
    // Main function
    // ---------------------------------------------------------
    int maxProduct(TreeNode* root) {
        // Step 1: compute total sum of tree
        totalSum = computeTotalSum(root);

        // Step 2: compute subtree sums and best split
        computeSubtreeSum(root);

        // Step 3: return result modulo
        return maxProductValue % MOD;
    }
};
