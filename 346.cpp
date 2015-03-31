//http://www.spoj.com/problems/COINS/

#include<iostream>
#include<stdio.h>
using namespace std;

long long int ar[100000]={0},m;
long long int coin(long int a)
{
if(a<((a/2)+(a/3)+(a/4)))
{
	if(a<100000&&ar[a]!=0)
	    return ar[a];

	else if(a<100000)
    {
    	m=coin(a/2)+coin(a/3)+coin(a/4);
    	ar[a]=m;
   		return m;
    }
    
    else
    {
    	 return coin(a/2)+coin(a/3)+coin(a/4);}
    }
    
    else
    	return a; 
}

int main()
{
	long long int n,i=0;
    while(scanf("%lld",&n)!=EOF)
    {
		cout<<coin(n)<<endl;
	    i++;
    }
    return 0;
} 
