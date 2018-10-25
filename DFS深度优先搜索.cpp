//#include<iostream>
//
//using namespace std;
//
//#define N 5
//
//int M[N][N] = {
//	{ 0, 1, 1, 0, 0 },
//	{ 0, 0, 1, 0, 1 },
//	{ 0, 0, 1, 0, 0 },
//	{ 1, 1, 0, 0, 1 },
//	{ 0, 0, 1, 0, 0 }
//};
//
//int visited[N + 1] = { 0 };
//void DFS(int start)
//{
//	visited[start] = 1;
//	for (int i = 1; i <=N ; i++)
//	{
//		if (!visited[i] && M[start-1][i-1] == 1)
//		{
//			DFS(i);
//		}
//	}
//	cout << "�ڵ㣺 " << start << endl;
//}
//
//int main()
//{
//	for (int i = 1; i <=N; i++)
//	{
//		if (visited[i]==1)
//		{
//			continue;
//		}
//		DFS(i);
//	}
//	return 0;
//}