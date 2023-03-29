#include<iostream>
using namespace std;

class matrix
{
	int**p;
	int d1,d2;
	
	public:

	matrix(int x,int y);
	void get_element(int i,int j,int value)
	{
		p[i][j]=value;
	}	
	int put_element(int i,int j)
	{
		return p[i][j];
	}	
};
matrix::matrix(int x,int y)
{
	d1=x;
	d2=y;
	p=new int*[d1];
	for(int i=0;i<d1;i++)
	{
		p[i]=new int[d2];
	}
}

int main()
{
	int m,n;
	cout<<"enter the size of matrix (m & n) : \n";
	cin>>m>>n;
	matrix A(m,n);
	int value,i,j;
	cout<<"enter the matrix values raw ways :";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>value;
			A.get_element(i,j,value);
		}
	}
	cout<<"the entered matrix is : "<<"\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<A.put_element(i,j);
			cout<<" ";
		}
		cout<<"\n";
	}
}


