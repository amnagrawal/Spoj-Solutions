//http://www.spoj.com/problems/CANDY/

#include<iostream>
using namespace std;

int main()
{
	int n=0, l[10000], avg, count;
	long int sum;
	while(1)
	{
		sum=0; count=0;
		cin>>n;
		if(n == -1)
			break;
		for(int i=0; i<n; i++)
		{
			cin>>l[i];
			sum += l[i];
		}
		if(sum%n != 0)
			cout<<"-1"<<endl;
		else
		{
			avg = sum/n;
			for(int j=0; j<n; j++)
			{
				if(l[j]<avg)
					count += (avg - l[j]);
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
