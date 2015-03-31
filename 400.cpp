//http://www.spoj.com/problems/TOANDFRO/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int col=1, i, rows, alpha, beta, ptr;
	char ect[200], dct[200];			//ect = encrypt; dct = decrypt
	while(col != 0)
	{
		cin>>col;		
		if(col != 0){
		cin>>ect;
		rows = strlen(ect)/col;
		i=0;
		for(int j=0; j<col; j++)
		{
			alpha = (2*col) - 1 - (2*j);
			beta = (2*col) - alpha;
			ptr = j;
			for(int k=0; k<rows; k++)
			{
				dct[i] = ect[ptr];
				cout<<dct[i++];
				if(k%2 == 0)
					ptr += alpha;
				else
					ptr += beta;
			}
		}
		cout<<endl;
		}		
	}
	return 0;
}
