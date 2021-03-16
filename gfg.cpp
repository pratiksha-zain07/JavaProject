

    Time Complexity: O(N)
    Space Complexity: O(N),

    Where N is the size of the given stack MY_STACK. 
       
*/

stack<int> pushAtBottom(stack<int>& myStack, int x) {
    // Base Case
    if (myStack.empty()) {
        myStack.push(x);
        return myStack;
    }

    // Recursive calls 
    int num = myStack.top();
    myStack.pop();
    pushAtBottom(myStack, x);
    myStack.push(num);

    return myStack;
}
#include <climits>
#include <vector>
bool getPath(BinaryTreeNode<int>* root, BinaryTreeNode<int>* target_leaf, vector<int> &path){
	if(root == NULL)
	{
		return false;
	}
	if(root == target_leaf || getPath(root->left, target_leaf, path) 
		|| getPath(root->right, target_leaf, path))
	{

		path.push_back(root->data);
		return true;
	}

	return false;
}

void getTargetLeaf(BinaryTreeNode<int>* root, int& maxSum, int currSum, BinaryTreeNode<int>* &target_leaf, vector<int> &path ){
	if(root == NULL)
	{
		return;
	}
	currSum = currSum + root->data;

	if( root->left == NULL && root->right == NULL )
	{
		if(currSum > maxSum)
		{
			maxSum = currSum;
			target_leaf = root;
		}
	}

	getTargetLeaf(root->left, maxSum, currSum, target_leaf, path);
	getTargetLeaf(root->r…

    Time Complexity: O(N^2)
    Space Complexity: O(1)
    
    Where 'N' is the size of array.
*/

long long int query(long long int n, long long int q) {
    long long int total = 0;
    // Iterate through all cells and find the sum of the coordinates
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i + j == q) {
                total++;
            }
        }
    }
    return total;
}
