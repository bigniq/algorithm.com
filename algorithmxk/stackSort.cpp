#include <stack>
//this is ssh test 
int stackSort(std::stack<int> R)
{
	std::stack<int> S;
	
	//ªÒ»°R
	int t = R.top();
	R.pop();
	while (!R.empty())
	{
		if (S.empty() || S.top() <= t)
		{
			S.push(t);
			t = R.top();
			R.pop();
		}
		else
		{
			R.push(S.top());
			S.pop();
		}
	}
	S.push(t);
	return 0;

}

int main()
{
	std::stack<int> R;
	R.push(1);
	R.push(2);
	R.push(1);
	stackSort(R);
}
