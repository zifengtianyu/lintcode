//#include<iostream>
//#include<stack>
//using namespace std;
//
//class MinStack {
//public:
//	stack<int> stk, minstk;
//
//	void push(int number) {
//		stk.push(number);
//		if (minstk.empty() || number <= minstk.top()) {
//			minstk.push(number);
//		}
//	}
//
//	int pop() {
//		int top = stk.top();
//		stk.pop();
//		if (top == minstk.top()) {
//			minstk.pop();
//		}
//		return top;
//	}
//
//	int min() {
//		return minstk.top();
//	}
//};
//
//int main()
//{
//	return 0;
//}