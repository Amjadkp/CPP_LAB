#include<iostream>
#include<cmath>

void area(int length,int breadth)
{
	int area;
	area=length*breadth;
	std::cout<<"area of the rectangle : "<<area<<"\n";
}

void area(int side)
{
	int area;
	area=side*side;
	std::cout<<"area of the square : "<<area<<"\n";

}

void area(float radius)
{
	float area;
	area=3.14*radius*radius;
	std::cout<<"area of the triangle : "<<area<<"\n";

}

void area(int side1,int side2,int side3)
{
	int s,area;
	s=(side1+side2+side3)/2;
	area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
	std::cout<<"area of the triangle : "<<area<<"\n";

}

void area(float radius,int hight)
{
	float area;
	area=2*3.14*radius*(radius+hight);
	std::cout<<"total area of the cylinder : "<<area<<"\n";

}

int main()
{	
	int side;
	std::cout<<"enter the side of the square : ";
	std::cin>>side;
	area(side);

	float radius;
	std::cout<<"enter the radius of the circle : ";
	std::cin>>radius;
	area(radius);

	int length,bredth;
	std::cout<<"enter the bredth and length of the rectangle : ";
	std::cin>>length>>bredth;
	area(length,bredth);
	
	int side1,side2,side3;
	std::cout<<"enter the three sides of the triangle : ";
	std::cin>>side1>>side2>>side3;
	area(side1,side2,side3);

	int hight;
	std::cout<<"enter the radius and hight of the cylinder : ";
	std::cin>>radius>>hight;
	area(radius,hight);
	
	}
