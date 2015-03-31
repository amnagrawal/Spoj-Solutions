//http://www.spoj.com/problems/FASHION/

#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
	void msort(int a[], int ini, int fin);
	int t, n, m[1000], w[1000], hb;
	cin>>t;
	while(t--)
	{
		hb = 0;
		cin>>n;
		for(int i=0; i<n; i++)
			cin>>m[i];
			
		for(int j=0; j<n; j++)
			cin>>w[j];
		
		msort(m, 0, n-1);
		msort(w, 0, n-1);
		
		for(int k=0; k<n; k++)
		{
			hb += m[k]*w[k];
		}
		cout<<hb<<endl;
	}
	return 0;
}

void msort(int a[], int ini, int fin)
{
	void merge(int a[], int ini, int mid, int fin);
	int mid = (ini + fin)/2;
	if (ini<fin)
	{
		msort(a, ini, mid);
		msort(a, mid+1, fin);
		merge(a, ini, mid, fin);
	}
}

void merge(int a[], int ini=0, int mid=0, int fin=0)
{
	int i=0, j=0, k=0;
	int l1 = mid - ini + 2;
	int l2 = fin - mid +1;
	int l[l1], r[l2];

	l[l1-1] = r[l2 - 1] = INT_MAX;

	for(i=0;i<l1-1;i++)
	{
		l[i] = a[ini+i];
	}

	for(i=0; i<l2-1;i++)
	{
		r[i] = a[mid+i+1];
	}

	for(i=0, j=0, k=ini; k<=fin; k++)
	{
		if(l[i]<r[j])
		{
			a[k] = l[i];
			i++;
		}
		else
		{
			a[k] = r[j];
			j++;
		}
	}
}
