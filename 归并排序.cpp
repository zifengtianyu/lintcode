//
//#include <cstdio>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//void mergeSort(int *A, int *left, int letf_n, int *right, int right_n)
//{
//	int i, j, k;
//	i = 0;
//	j = 0;
//	k = 0;
//
//	while (j<letf_n && k<right_n) {
//		if (left[j] > right[k]) A[i++] = left[j++];
//		else A[i++] = right[k++];
//	}
//	while (j < letf_n) A[i++] = left[j++];
//	while (k < right_n) A[i++] = right[k++];
//}
//void merge(int *nums, int n)
//{
//	int *left, *right;
//	if (n < 2) return;
//	int mid;
//	mid = n / 2;
//
//	left = new int[mid];
//	right = new int[n - mid];
//
//	for (int i = 0; i<mid; i++) left[i] = nums[i];
//	for (int i = n-1; i >= mid; i--)
//	{
//		right[i - mid] = nums[i];
//	}
//	merge(left, mid);
//	merge(right, n - mid);
//	mergeSort(nums, left, mid, right, n - mid);
//	
//	delete [] left;
//	delete [] right;
//}
//
//int main()
//{
//	int n = 5;
//	int nums[] = { 6,2,3,1,9,10,15,13,12,17 };
//
//	int n1 = sizeof(nums) / sizeof(nums[0]);
//	merge(nums, n1);
//	for (int i = 0; i < n1; i++)
//	{
//		cout << nums[i] << endl;
//	}
//	system("pause");
//	return nums[n - 1];
//}