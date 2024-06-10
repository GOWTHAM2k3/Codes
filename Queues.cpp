#include<iostream>
#include<queue>
using namespace std;

void displayAB(queue <int> ab)
{
	queue <int> xy=ab;
	while(!xy.empty())
	{
		cout<<'\t'<<xy.front();
		xy.pop();
	}
	cout<<'\n';
}

int main()
{
	queue <int> stu;
	stu.push(18);
	stu.push(45);
	stu.push(7);
	stu.push(26);
	stu.push(48);
	cout<<"Queue Elements are:";
	displayAB(stu);
	cout<<"\n stu.size():"<<stu.size();
	cout<<"\ stu.top:"<<stu.front();
	cout<<"\n stu.back(): "<<stu.back();
	cout<<"\n stu.pop():";
	stu.pop();
	displayAB(stu);
	return 0;
	
}
