#include<iostream>
#include<stack>
using namespace std;

void newStack(stack <int> v1)
{
	stack <int> w1=v1;
	while(!w1.empty())
	{
		cout<<'\t'<<w1.top();
		w1.pop();
	}
	cout<<'\n';
}

int main()
{
	stack <int> newSt;
	newSt.push(18);
	newSt.push(45);
	newSt.push(7);
	newSt.push(26);
	newSt.push(48);
	cout<<"New stack is:";
	newStack(newSt);
	cout<<"\n newSt.size():"<<newSt.size();
	cout<<"\newSt.top:"<<newSt.top();
	cout<<"\n newStnewSt.pop():";
	newSt.pop();
	newStack(newSt);
	return 0;
}

