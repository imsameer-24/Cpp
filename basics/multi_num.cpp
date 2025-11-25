#include<iostream>
using namespace std;
int multi_num(int a,int b)
{
	int result = a*b;
	return result;
}

int main()
{
	int a=5;
	int b =2;

	int multi=multi_num(a,b);
	cout<<"multiplication = "<<multi<<endl;
	cout<<"multiplication = "<<multi_num(5,7)<<endl;
}
