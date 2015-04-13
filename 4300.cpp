//http://www.spoj.com/problems/AE00/

#include<iostream>
using namespace std;

int main()
{
	int n, inc, i=1;
	long int cnt =0;
	cin>>n;
	inc = n;
	while(inc>0)
	{
		cnt += inc;
		inc = (n/(i+1)) - i;
		//inc = inc - i;
		i++;
	}
	cout<<cnt;
	return 0;
}