//#include<iostream>
//#include<vector>
//#include<test.h>
//#include<queue>
//using namespace std;
//
//class TreeNode
//{
//public:
//	int data;
//	TreeNode *left, *right;
//	TreeNode(int A);
//	~TreeNode();
//
//private:
//
//};
//
//TreeNode::TreeNode(int A)
//{
//	this->data = A;
//	this->left = this->right = NULL;
//}
//
//TreeNode::~TreeNode()
//{
//}
//
//TreeNode *Fsearch(TreeNode *root)
//{
//	if (!root) return NULL;
//	cout << root->data;
//	Fsearch(root->left);
//	Fsearch(root->right);
//}
//class Solution {
//public:
//	/**
//	* @param root: param root: The root of the binary search tree
//	* @param k1: An integer
//	* @param k2: An integer
//	* @return: return: Return all keys that k1<=key<=k2 in ascending order
//	*/
//	vector<int> NodeValue;
//	vector<int> searchRange(TreeNode * root, int k1, int k2) {
//		// write your code here
//		if (!root) return NodeValue;
//		if (root->data >= k1 && root->data <= k2) NodeValue.push_back(root->data);
//		NodeValue = searchRange(root->left, k1, k2);
//		NodeValue = searchRange(root->right, k1, k2);
//		return NodeValue;
//	}
//};
//vector<int> searchRange(TreeNode * root, int k1, int k2) {
//	// write your code here
//	vector<int> NodeValue;
//	if (!root) return NodeValue;
//	if (root->data > k1 && root->data < k2) cout << root->data << endl;
//	NodeValue = searchRange(root->left, k1, k2);
//	NodeValue = searchRange(root->right, k1, k2);
//	return NodeValue;
//}
//
//TreeNode *createtree(vector<int> &data)
//{
//	/*int size = data.size();
//	if (!size) return NULL;
//	vector<int>::iterator it = data.begin();
//	TreeNode *root = new TreeNode(data.front());
//	data.erase(it);
//	root->left = createtree(data);
//	root->right = createtree(data);*/
//	queue<TreeNode*> Q;
//	TreeNode *root = new TreeNode(data[0]);
//	Q.push(root);
//	bool IsLeftChild = true;
//	for (int i = 1; i < data.size(); i++)
//	{
//		TreeNode *root2 = new TreeNode(data[i]);
//		if(IsLeftChild) Q.front()->left = root2;
//		else Q.front()->right = root2;
//		Q.push(root2);
//		if (!IsLeftChild) Q.pop();
//		IsLeftChild = !IsLeftChild;
//	}
//	return root;
//}
//
//int main()
//{
//	vector<int> data = { 20,8,4,12,22 };
//	vector<int> data2;
//	TreeNode *root;
//	root = createtree(data);
//	data2 = searchRange(root,9,22);
//	return 0;
//}