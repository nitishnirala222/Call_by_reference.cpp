#include<iostream>
using namespace std;
int Swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
int main()
{
int x=100,y=500;
cout<<"The values Before swapping...."<<endl;;
cout<<"x= "<<x<<" "<<"y= "<<y<<endl;;
Swap(&x,&y);
cout<<"The values After swapping..."<<endl;
cout<<"x= "<<x<<" "<<"y= "<<y;
}
