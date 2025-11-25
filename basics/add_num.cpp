#include<iostream>
using namespace std;

int add_num(int a,int b)
{
        int result=a+b;
        return result;
}
int main(){
        int a=12;
        int b=8;

        int sum=add_num(a,b);
        cout<<"sum = "<<sum<<endl;
        cout<<"sum = "<<add_num(3,7)<<endl;
}
