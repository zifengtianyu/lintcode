///*
//±©¡¶∆•≈‰∑®£¨∏¥‘”∂»O(mn)
//*/
//#include<iostream>
//#include<string>
//
//using namespace std;
//int strStr(string &source, string &target) {
//	// Write your code here
//	if (source == nullptr || target == nullptr) {
//		return -1;
//	}
//
//	int len1 = source.length();
//	int len2 = target.length();
//	int i = 0;
//	int j = 0;
//	while (i<len1 && j<len2)
//	{
//		if (source[i] == target[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			i = i - (j - 1);
//			j = 0;
//		}
//	}
//	if (j == len2) return i - j;
//	else return -1;
//}
//int main()
//{
//	string source = nullptr;
//	string target = nullptr;
//	int pos = strStr(source,target);
//	return 0;
//}