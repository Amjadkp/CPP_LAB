#include<iostream>
using namespace std;

class Matrices
{
	private:
		int**a;
		int r,c;

	public:
		Matrices(){};
		Matrices(int x,int y)
		{
			r=x;
			c=y;
			{
				a=new int *[r];
				for(int i=0;i<r;i++)
				{
					a[i]=new int [c];
				}
			}
			cout<<"matrix created";

		}	
		~Matrices()
		{
			for(int i=0;i<r;i++)
			{
				delete a[i];
			}
			delete a;
		}

		void get_matrix(void);
		void add_matrix(Matrices &x,Matrices &y);
		void display();
		void transpose_matrix(Matrices &x);
		void mult_matrix(Matrices &x,Matrices &y);
		int trace_matrix(void);

		};

void Matrices::get_matrix()
{
	for(int i=0;i<r;i++)
	{
		cout<<"enter "<<c<<"elements of "<<i+1<<" raw";
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"matrix elements have entered";
}

void Matrices :: transpose_matrix(Matrices &x)
{
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			a[i][j]=x.a[j][i];
		}
		cout<<endl;
	}
	display();
}
void Matrices :: mult_matrix(Matrices &x,Matrices &y)
{
	for (int i=0;i<x.r;i++)
	{
		for(int j=0;j<y.r;j++)
		{
			a[i][j]=0;
			for(int k=0;k<x.c;k++)
			{
				a[i][j]+=x.a[k][j]*y.a[k][j];
			}
		}
	}
}
 void Matrices :: add_matrix(Matrices &x,Matrices &y)
{
	for(int i=0;i<x.r;i++)
	{
		for(int j=0;j<x.c;j++)
		{
			a[i][j]+=x.a[i][j]+y.a[i][j];
		}
	}
}

int Matrices :: trace_matrix()
{
	int sum=0,j;
	for(int i=0;i<r;i++)
	{
		sum=sum+a[i][j];
	}
	return sum;
}
void Matrices :: display()
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
	cout<<endl;
	}
}
int main()
{
	int r1,c1,r2,c2;
	cout<<"enter the number of raws and coloumns of the first matrix"<<endl;
	cin>>r1>>c1;
	Matrices mat1(r1,c1);
	cout<<"enter the elements of the first matrix";
	mat1.get_matrix();
	cout<<"enter the number of raws and coloumns of the second matrix "<<endl;
	cin>>r2>>c2;
	Matrices mat2(r2,c2);
	cout<<"enter the elements of the second matrix ";
	mat2.get_matrix();
	cout<<"the transpose of the first matrix : "<<endl;
	Matrices matr1(c1,r1);
	matr1.transpose_matrix(mat1);
	cout<<"the transpose of the second matrix : "<<endl;
	Matrices matr2(c2,r2);
	matr2.transpose_matrix(mat2);
	int trace1=mat1.trace_matrix();
	cout<<"the trace of the first matrix : "<<trace1<<endl;
	int trace2=mat2.trace_matrix();
	cout<<"the trace of the second matrix : "<<trace2<<endl;
	if (r1==r2 && c1==c2)
	{
		Matrices mat3(r1,c1);
		cout<<"the sum of the two matrices : \n";
		mat3.add_matrix(mat1,mat2);
		mat3.display();
	}
	else
	{
		"for the matrix addition,matrices should have same number of raws and coloumns";
	}
	if (c1==r2)
	{
		Matrices mat4(r1,c2);
		mat4.mult_matrix(mat1,mat2);
		cout<<"the product of two matrices  : \n";
	       	mat4.display();
	}
	else
	{
	cout<<"multiplication not possible because order is not matching"<<endl;
	}
	return 0;
}	

