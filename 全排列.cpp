//#include<iostream>
//#include<vector>
//
//using namespace std;
//vector<int> middle;
//void perm(vector<int> &nums, int p, int q, vector<vector<int>> &result);
//void swap(vector<int> &nums,int p,int q)
//{
//	int temp;
//	temp = nums[p];
//	nums[p] = nums[q];
//	nums[q] = temp;
//}
//vector<vector<int>> permute(vector<int> &nums) {
//	// write your code here
//	vector<vector<int>> result;
//	perm(nums,0,nums.size(),result);
//	return result;
//}
//
//void perm(vector<int> &nums,int p,int q, vector<vector<int>> &result)
//{
//	if (p == q)
//	{
//		result.push_back(nums);
//	}
//	else
//	{
//		for (int i = p; i < q; i++)
//		{
//			swap(nums,p,i);
//			perm(nums, p+1, q, result);
//			swap(nums,p,i);
//		}
//	}
//
//}
//
//
//int main()
//{
//	vector<int> numbers = { 1,2,3 };
//	permute(numbers);
//	return 0;
//}