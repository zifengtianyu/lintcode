//#include<iostream>
//
//using namespace std;
////√∞≈›≈≈–Ú
//void bubbleSort(int *a, int size)
//{
//	int temp;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (a[i]>a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//void printArray(int *a, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << a[i] << endl;
//	}
//}
//int *mergeCompare(int *left, int n_left, int *right, int n_right, int *a)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (i < n_left && j < n_right)
//	{
//		if (left[i] < right[j]) a[k++] = left[i++];
//		else a[k++] = right[j++];
//	}
//	while (i<n_left) a[k++] = left[i++];
//	while (j<n_right) a[k++] = right[j++];
//	return a;
//}
////πÈ≤¢≈≈–Ú
//int *mergeSort(int *a, int size)
//{
//	if (size == 1)
//	{
//		return a;
//	}
//	int middle = size / 2;
//	int *left = new int[middle];
//	int *right = new int[size - middle];
//	for (int i = 0; i < middle; i++)
//	{
//		left[i] = a[i];
//	}
//
//	for (int i = 0; i < size - middle; i++)
//	{
//		right[i] = a[i + middle];
//	}
//	mergeSort(left, middle);
//	mergeSort(right, size - middle);
//	mergeCompare(left, middle, right, size - middle, a);
//	return a;
//}
//void main()
//{
//	int array[8] = { 3,9,8,5,4,10,22,36 };
//	mergeSort(array, 8);
//	printArray(array, 8);
//	system("pause");
//}