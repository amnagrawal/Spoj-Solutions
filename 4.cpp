//http://www.spoj.com/problems/ONP/

#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

int main()
{
	int t, top;
	char a[400], stack[200];
	cin>>t;
	while(t--)
	{
		top = 0;
		cin>>a;
		for(int i=0; i<strlen(a); i++)
		{
			if(a[i] == '(')
			{
				stack[top] = a[i];
				top++;
				//continue;
			}
			
			else if(a[i] == ')')
			{
				top--;
				while(stack[top] != '(')
				{
					cout<<stack[top];
					top--;
				}
			}
			
			else if(isalpha(a[i]))
			{
				cout<<a[i];
			}
		
			else
			{
				stack[top] = a[i];
				top++;
			}
			
		}
		cout<<endl;
	}
	return 0;
}
