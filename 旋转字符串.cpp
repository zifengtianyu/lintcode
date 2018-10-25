//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//int main()
//{
//	string str = "";
//	int offset = 10;
//	vector<string> S;
//	//int size = s.size();
//	for (int i = 0; i < str.size(); i++)
//	{
//		S.push_back(str.substr(i,1));
//	}
//	//
//	string temp;
//	if (S.size())
//	{
//		offset %= str.size();
//		for (int i = 0; i < offset; i++)
//		{
//			temp = S[S.size() - 1];
//			S.pop_back();
//			S.insert(S.begin(), temp);
//		}
//	}
//	
//	str.clear();
//	for (int i = 0; i < S.size(); i++)
//	{
//		str.append(S[i]);
//	}
//	return 0;
//}