#include<iostream>
using namespace std;
int size;

void def(int arr[])  //to reset array values
{
	for(int i=0;i<size;i++)
	{
		arr[i]=0;
	}
}

void accept(int arr[]) //to accept array values as horse prices
{
	cout<<"enter horse prices:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
}

void print_arr(int arr[])
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	def(arr);
	cout<<endl<<endl;
}
int main()
{
	int k=100;
	
	cout<<"Enter no. of horses:"<<endl;
	cin>>size;
	
	int arr[size];
	accept(arr);
	
	int bet[size];
	def(bet);
	
	int sum=0;
	
	for(int i=0;i<size;i++)
	{
		sum=0;
		for(int j=i;j<size+1;j++)
		{
			if(sum<k)
			{
				sum += arr[j];
				bet[j]= j+1;
			}
			else
			{
				sum -= arr[j-1];
				bet[j-1]= 0;
				break;
			}
		}
		print_arr(bet);
		cout<<endl<<endl;
	}
}
