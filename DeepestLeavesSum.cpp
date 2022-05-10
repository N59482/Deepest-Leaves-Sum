#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * Given the root of a binary tree, return the sum of values of its deepest leaves.
 * 
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


// проблема с подсчётом нынешней глубины int depth_now
class Solution {
public:
    void monkey(TreeNode* root, int & sum, int & max_depth, int depth_now) \\ потому что проходит по дереву.\\ подумать про const 
        {
            while(root)
                {
                    if(!root->left && !root->right)\\ если мы на дне.
                        {
                            if(depth_now > max_depth) \\ пробили дно
                                {
                                    sum = root->val;
                                    max_depth = depth_now;
                                };
                            else if(depth_now = max_depth) \\ нашли дно
                                sum += root->val;
                            return; // с дна больше некуда идти.
                        };
                    monkey(root->left, sum, max_depth, depth_now);
                    monkey(root->right, sum, max_depth, depth_now)
                };
        };     

    int deepestLeavesSum(TreeNode* root) 
    {
        int max_depth = 1; \\ подумать над начальными значениями
        int depth_now = 1; \\ подумать над начальными значениями
        int sum = root->val; \\ подумать над начальными значениями
    };
};

int main()
{
    return 0;
}