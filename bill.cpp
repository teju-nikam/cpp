#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string item[3]={"rice","oil","soap"};
	int price[3]={50,1415,45};
	int sum=0;
	cout<<"items\tprice";
	cout<<"\n----------------";
	for(int i=0;i<3;i++)
	{
		cout<<"\n"<<item[i]<<"\t"<<setw(5)<<price[i];
		sum+=price[i];
	}
	cout<<"\n----------------";
	cout<<"\n"<<"total\t"<<setw(5)<<sum;
}
