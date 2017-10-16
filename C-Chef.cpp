#include<iostream>
using namespace std;
int main()
{
	long long int c=1;
	int n,k;
	cin>>n>>k;
	int p[n];
	p[n-1]=n;
	int j;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=n-2;i>=0;i--)
	{
		j=i+1;
		while(a[j] >= a[i])
		{
		
			j=p[j];
			if(j==n)
				break;
		}
		p[i]=j;
	}
 
	for(int i=0;i<n;i++)
	{
		if(p[i] == n)
			continue;
		c=(c*(p[i]-i+1))%1000000007;
	}
	cout<<c<<"\n";
} 
