#include <iostream.h>
#include <string.h>
template <class T> //sorting function template
void listsort(T A[],const int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n-1;j++)
			if(A[j]>A[j+1])
				Swap(A[j],A[j+1]);
}
template <class T>
void display(T A[],const int size)
{
	for(int i=0;i<size;i++)
		cout << A[i] << " ";
	cout << endl;
}

template <class T>
void Swap(T &x,T &y)
{
	T tmp;
	tmp=x;
	x=y;
	y=tmp;
}
void main()
{
	const int K=6,J=7,N=5;
	int Bill[J] = {20,30,70,80,40,50,60};
	char ch[N] = {'D','E','X','S','Z'};
	double Kim[K] = {4.5,6.7,7.8,9.4,3.1,1.2};
	listsort(Bill,J);
	display(Bill,J);
	listsort(Kim,K);
	display(Kim,K);
	listsort(ch,N);
	display(ch,N);
}