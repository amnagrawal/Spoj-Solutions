//http://www.spoj.com/problems/ABSYS/

#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main()
{
	int t, x, y, z;			//Mathematical expression written as x + y = z
	//string str1, str2, str3;
	char s,str1[100], str2[100], str3[100];
	char operator1, operator2;
	cin>>t;
	while(t--)
	{
		s = getchar();
		cin>>str1>>operator1>>str2>>operator2>>str3;

		//cout<<s;

		if(strspn("m", str1)) {			//strspn(str1, str2) returns the length of the initial portion of str1 which consists of charac of only str2
 			y = atoi(str2);
			z = atoi(str3);
			x = z-y;
		}
		else if(strspn("m", str2)) {
			x = atoi(str1);
			z = atoi(str3);
			y = z-x;
		}
		else {
			x = atoi(str1);
			y = atoi(str2);
			z = x+y;
		}

		cout<<x<<" + "<<y<<" = "<<z<<endl;
	}
	return 0;
}