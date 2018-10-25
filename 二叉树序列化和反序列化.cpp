//#include<iostream>
//#include<vector>
//#include<sstream>
//#include<queue>
//#include<stdlib.h>
//using namespace std;
//
//class TreeNode {
//public:
//	int val;
//	TreeNode *left, *right;
//	TreeNode(int val) {
//		this->val = val;
//		this->left = this->right = NULL;
//	}
//};
//
//
//
//class Solution {
//public:
//	/**
//	* This method will be invoked first, you should design your own algorithm
//	* to serialize a binary tree which denote by a root node to a string which
//	* can be easily deserialized by your own "deserialize" method later.
//	*/
//	vector<string> split(const string &str, string delim) {
//		vector<string> results;
//		int lastIndex = 0, index;
//		while ((index = str.find(delim, lastIndex)) != string::npos) {
//			results.push_back(str.substr(lastIndex, index - lastIndex));
//			lastIndex = index + delim.length();
//		}
//		if (lastIndex != str.length()) {
//			results.push_back(str.substr(lastIndex, str.length() - lastIndex));
//		}
//		return results;
//	}
//
//	string serialize(TreeNode * root) {
//		// write your code here
//		vector<string> S;
//		queue<TreeNode *> Q;
//		string ss;
//		if (root)
//		{
//			Q.push(root);
//			bool Ischildnode = true;
//			S.push_back("{");
//			while (!Q.empty())
//			{
//				if (Q.front())
//				{
//					int front = Q.front()->val;
//					S.push_back(to_string(front));
//					Q.push(Q.front()->left);
//					Q.push(Q.front()->right);
//				}
//				else
//				{
//					S.push_back("#");
//				}
//				S.push_back(",");
//				Q.pop();
//			}
//			while (S.back() == "#" || S.back() == ",")
//			{
//				S.pop_back();
//			}
//			S.push_back("}");
//			for (int i = 0; i < S.size(); i++)
//			{
//				ss.append(S[i]);
//			}
//		}
//		else
//		{
//			return "{}";
//		}
//		return ss;
//	}
//
//	/**
//	* This method will be invoked second, the argument data is what exactly
//	* you serialized at method "serialize", that means the data is not given by
//	* system, it's given by your own serialize method. So the format of data is
//	* designed by yourself, and deserialize it here as you serialize it in
//	* "serialize" method.
//	*/
//	TreeNode * deserialize(string &data) {
//		// write your code here
//		if (data == "{}") return NULL;
//		vector<string> S = split(data.substr(1, data.size() - 2), ",");
//		int index = S.size();
//		TreeNode *root = new TreeNode(atoi(S[0].c_str()));
//		queue<TreeNode *> Q;
//		Q.push(root);
//		bool IsLeftNode = true;
//		for (int i = 1; i < index; i++)
//		{
//			if (S[i] != "#")
//			{
//				TreeNode *cnodes = new TreeNode(atoi(S[i].c_str()));
//				if (IsLeftNode)
//				{
//					Q.front()->left = cnodes;
//				}
//				else
//				{
//					Q.front()->right = cnodes;
//				}
//				Q.push(cnodes);
//			}
//
//			if (!IsLeftNode)
//			{
//				Q.pop();
//			}
//			IsLeftNode = !IsLeftNode;
//
//		}
//
//		return root;
//	}
//};
//
//void main()
//{
//	Solution exercise;
//	TreeNode *root;
//	string data = "{}";
//	string ss;
//	root = exercise.deserialize(data);
//	ss = exercise.serialize(root);
//}