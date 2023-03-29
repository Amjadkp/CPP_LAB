#include<iostream>

class complex
{
	private:
		float x;
		float y;

	public:
		complex()
		{
			x=0;
			y=0;
		}
		
		complex (float real,float imag)
		{
			x=real;
			y=imag;
		}
	
		complex operator +(complex);
		void show (void);
};

complex complex :: operator +(complex c)
{
	complex temp;
	temp.x=x+c.x;
	temp.y=y+c.x;
	return temp;
}

void complex :: show (void)
{
	std::cout<<x<<" + "<<y<<" i \n";
}

int main()
{
	complex c1(2.5,3.5),c2(1.6,2.7),c3;
	c3=c1+c2;
	c3.show();
}
