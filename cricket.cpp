#include<iostream>
using namespace std;
int main()
{
	int n=11;
	int arr[n]={86,16,16,53,19,0,0,0,0,0,0};
	int i,j,cnt=0;
	int k=0;
	for(i=0,j=1; i<n,j<n;j++)
	{
		if(arr[i]+arr[j]==0 )
		{
			cnt++;
			cout<<arr[i]<<" = "<<arr[j]<<endl;
			cout<<i<<" = "<<j<<endl<<endl;
		}
		if(j== n-1)
		{
			i++;
			j= i;
		}
	}
	cout<<cnt;
}
