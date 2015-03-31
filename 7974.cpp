//http://www.spoj.com/problems/ACPC10A/

#include<iostream>
using namespace std;

int main()
{
	int a=1, b=1, c=1;
	while(a!=0 || b!=0 || c!=0)
	{
		cin>>a>>b>>c;
		if((b-a) == (c-b))
		{
			if((b-a) == 0)
				continue;
			cout<<"AP "<<((2*c)-b)<<endl;
		}
		else
		{
			cout<<"GP "<<(c*c)/b<<endl;
		}
	}
	return 0;
}
