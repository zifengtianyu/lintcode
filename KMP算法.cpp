///*
//原理参考网址：https://www.bilibili.com/video/av3246487
//用来进行字符串查找，复杂度O(m+n)
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//vector<int> createTempArray(string &partstr)
//{
//	int j = 0;
//	int i = 1;
//	vector<int> temparray;
//	temparray.push_back(0);
//	while (i<partstr.length()&&j<partstr.length())
//	{
//		if (partstr[i] == partstr[j])
//		{
//			temparray.push_back(j + 1);//temparray[i] = j+1;
//			i++;
//			j++;
//		}
//		//if (partstr[i] != partstr[j])
//		else if(j == 0)
//		{
//			temparray.push_back(0);
//			i++;
//		}
//		else
//		{
//			j = temparray[j - 1];
//		}
//	}
//	return temparray;
//}
//
//int findStrPos(string &mainstr, string &partstr)
//{
//	if (partstr == "") return 0;
//	vector<int> temparray = createTempArray(partstr);
//	int i = 0,j = 0;
//	int arraysize = temparray.size();
//	while (j<arraysize && i<mainstr.size())
//	{
//		if (mainstr[i] == partstr[j])
//		{
//			i++;
//			j++;
//			if (j>=arraysize)
//			{
//				return i - arraysize;
//			}
//		}
//		else if (j == 0)
//		{
//			i++;
//		}
//		else
//		{
//			j = temparray[j - 1];
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	string mainstr = "abcxabcdabxabcdabcdabcdabcy";
//	string partstr = "abcdabcy";
//	//vector<int> temparray = createTempArray(partstr);
//	int pos = findStrPos(mainstr,partstr);
//	return 0;
//}