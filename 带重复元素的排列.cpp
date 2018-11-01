//#include<iostream>
//#include<vector>
//
//using namespace std;
//vector<int> middle;
//void perm(vector<int> &nums, int p, int q, vector<vector<int>> &result);
//void merge_compare(vector<int> &nums, vector<int> &left, vector<int> &right);
//void merge_sort(vector<int> &nums);
//
//vector<vector<int>> permuteUnique(vector<int> &nums) {
//	// write your code here
//	vector<bool> used;
//	vector<vector<int>> result;
//
//	for (int i = 0; i < nums.size(); i++)
//	{
//		used.push_back(false);
//	}
//	merge_sort(nums);
//	perm(nums, 0, nums.size(), result);
//
//	return result;
//}
//void swap(vector<int> &nums, int p, int q)
//{
//	int temp;
//	temp = nums[p];
//	nums[p] = nums[q];
//	nums[q] = temp;
//}
//void perm(vector<int> &nums, int p, int q, vector<vector<int>> &result)
//{
//	if (p == q)
//	{
//		result.push_back(nums);
//	}
//	else
//	{
//		for (int i = p; i < q; i++)
//		{
//			if (i > p && nums[i] == nums[i - 1])
//			{
//				continue;
//			}
//			else
//			{
//				//swap(nums, p, i);
//				//mid2[p] = mid1[i];
//				nums.insert(nums.begin() + p, nums[i]);
//				nums.erase(nums.begin() + i + 1);
//				perm(nums, p + 1, q, result);
//				nums.insert(nums.begin() + i + 1, nums[p]);
//				nums.erase(nums.begin() + p);
//				//swap(nums, i, p);
//			}
//		}
//	}
//}
////归并排序
//void merge_compare(vector<int> &nums, vector<int> &left, vector<int> &right)
//{
//	int nums_counter, left_counter, right_counter;
//	nums_counter = left_counter = right_counter = 0;
//	while (left_counter < left.size() && right_counter < right.size())
//	{
//		if (left[left_counter] < right[right_counter]) nums[nums_counter++] = left[left_counter++];
//		else nums[nums_counter++] = right[right_counter++];
//	}
//	while (left_counter < left.size()) nums[nums_counter++] = left[left_counter++];
//	while (right_counter < right.size()) nums[nums_counter++] = right[right_counter++];
//}
//void merge_sort(vector<int> &nums)
//{
//	int size = nums.size();
//	if (size < 2) return;
//	int mid = size / 2;
//	vector<int> left, right;
//	for (int i = 0; i < mid; i++) left.push_back(nums[i]);
//	for (int i = mid; i < size; i++) right.push_back(nums[i]);
//	merge_sort(left);
//	merge_sort(right);
//	merge_compare(nums, left, right);
//	left.clear();
//	right.clear();
// }
//
//
//int main()
//{
//	vector<int> numbers = {1,2,2,3};
//	permute(numbers);
//	return 0;
//}
