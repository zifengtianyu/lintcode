//#include<iostream>
//#include<queue>
//using namespace std;
//#define N 5
//
//int M[5][5] = {
//	{ 0, 1, 1, 0, 0 },
//	{ 0, 0, 1, 1, 0 },
//	{ 0, 1, 1, 1, 0 },
//	{ 1, 0, 0, 0, 0 },
//	{ 0, 0, 1, 1, 0 }
//};
//
//int visited[N + 1] = { 0 };
//
//void BFS(int start)
//{
//	queue<int> Q;
//	Q.push(start);
//	visited[start] = 1;
//	while (!Q.empty())
//	{
//		int front = Q.front();
//		cout << "��ʼѰ�Ҵ˽ڵ㸽���Ľڵ㣺 " << front << endl;
//		Q.pop();
//		for (int i = 1; i <= N; i++)
//		{
//			if (!visited[i] && M[front-1][i-1] == 1)
//			{
//				visited[i] = 1;
//				Q.push(i);
//			}
//
//		}
//	}
//}
//int main()
//{
//	for (int i = 1; i <=N; i++)
//	{
//		if (visited[i] == 1)
//		{
//			continue;
//		}
//		BFS(i);
//
//	}
//	return 0;
//}