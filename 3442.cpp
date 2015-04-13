//http://www.spoj.com/problems/LASTDIG/
//This program is kept unindented as indentation makes the file exceed the size limit
//Remove the comments before submitting the code
#include<iostream>
using namespace std;
main()
{
int t, a, r[10][4], i=4;
long int b;
while(i--)
r[0][i] = 0;
i=4;
while(i--)
r[1][i] = 1;
r[2][1] = 2;r[2][2] = 4;r[2][3] = 8;r[2][0] = 6;
r[3][1] = 3;r[3][2] = 9;r[3][3] = 7;r[3][0] = 1;
r[4][1] = 4;r[4][2] = 6;r[4][3] = 4;r[4][0] = 6;
r[5][1] = 5;r[5][2] = 5;r[5][3] = 5;r[5][0] = 5;
r[6][1] = 6;r[6][2] = 6;r[6][3] = 6;r[6][0] = 6;
r[7][1] = 7;r[7][2] = 9;r[7][3] = 3;r[7][0] = 1;
r[8][1] = 8;r[8][2] = 4;r[8][3] = 2;r[8][0] = 6;
r[9][1] = 9;r[9][2] = 1;r[9][3] = 9;r[9][0] = 1;
cin>>t;
while(t--)
{
cin>>a>>b;
if(b==0)
{
if(a==0)
cout<<"0\n";
else
cout<<"1\n";
}
else
{
a = a%10; b = b%4;
cout<<r[a][b]<<"\n";
}}return 0;}