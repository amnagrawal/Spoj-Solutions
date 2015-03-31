http://www.spoj.com/problems/SAMER08F/

#include<iostream>
using namespace std;

int main()
{
	int n=1;
	long int sq;
	while(n!=0)
	{
		cin>>n;
		sq = (n*(n+1)*((2*n)+1))/6;
		if(sq != 0)
			cout<<sq<<endl;
	}
	return 0;
}
