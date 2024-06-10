#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char* s1="224";
	char*s2="456.78";
	
	int a=atoi(s1);
	int b=atoi(s2);
	
	cout<<a<<endl;
	cout<<b<<endl;
	
	cout<<"Sum is:"<<a+b<<endl;
	return 0;
}
