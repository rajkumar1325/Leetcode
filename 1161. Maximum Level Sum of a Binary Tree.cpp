/*
Given the root of a binary tree, the level of its root is 1, the level of its children is 2, and so on.

Return the smallest level x such that the sum of all the values of nodes at level x is maximal.
*/








/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;      --> pointer to left
 *     TreeNode *right;     --> pointer to right

 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}.        --> create a node with val=0 | equiv to TreeNode
 
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}    --> node with val=x  | no child node
 
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}       ---> val + children
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(root == nullptr) return 0;

        int currLevel =1;
        int maxLevel =1;

        int currentLevelMaximum = root->val;


        queue<TreeNode *> q;  //creating an Queue
        q.push(root); //start


        while(!q.empty()){
            int siz = q.size(); //current level pe nodes kitne h

            int currentLevelSum = 0;

            //itreate over the current level
            for(int i=0; i<siz; i++){
                TreeNode *nde = q.front(); //creating object

                currentLevelSum += nde->val;

                // when we still have further child nodes, add it according to the BFS.
                if(nde->left) q.push(nde->left);
                if(nde->right) q.push(nde->right);

                q.pop(); //remove that node --> as we have to move to next
            }


            //check if the current level sum is the mximum or not?
            if(currentLevelSum > currentLevelMaximum){
                currentLevelMaximum = currentLevelSum;
                maxLevel = currLevel;  //mark the current level as the maximum.
            }

            currLevel++; //update the level
        }

        return maxLevel;

    }
};
