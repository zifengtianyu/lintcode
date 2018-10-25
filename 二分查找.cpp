//#include<iostream>
//#include<vector>
///*
//描述：
//给定一个排序的整数数组（升序）和一个要查找的整数target，用O(logn)的时间查找到target第一次出现的下标（从0开始），如果target不存在于数组中，返回-1。
//样例：
//在数组 [1, 2, 3, 3, 4, 5, 10] 中二分查找3，返回2。
//挑战：
//如果数组中的整数个数超过了2^32，你的算法是否会出错？
//*/
//using namespace std;
//
//int binarySearch(vector<int> &nums, int target) {
//	// write your code here
//	int size = nums.size();
//	if (nums[0] == target) return 0;
//	if (nums[0] > target || nums[size - 1] < target) return -1;
//	int middle, middle_pos;
//	int front_pos = 0;
//	int end_pos = size - 1;
//	while (true)
//	{
//		middle_pos = (front_pos + end_pos) / 2;
//		if (middle_pos == front_pos + 1 && middle_pos == end_pos - 1)
//		{
//			if (nums[middle_pos] == target) return middle_pos;
//			else return -1;
//		}
//		if (nums[middle_pos] == target)
//		{
//			middle_pos--;
//			while (nums[middle_pos] == target)
//			{
//				middle_pos--;
//			}
//			return middle_pos + 1;
//		}
//		else if (nums[middle_pos] > target)
//		{
//			end_pos = middle_pos;
//		}
//		else
//		{
//			front_pos = middle_pos;
//		}
//	}
//}
//
//int main()
//{
//	vector<int> numbers = { 2,2,3,4,5,6,8,13,17,18 };
//	int target = 17;
//	int pos = binarySearch(numbers, target);
//	return 0;
//}