#include<iostream>

class student 
{
	int roll_num ;
	float mark1,mark2,mark3,marks ;
	char grade ;
	char name[15];

	public :
		void input();
		char calc_grade (float marks);
		void display();

};

void student::input()
{
	std::cout<<"enter the name of the student : ";
	std::cin>>name ;
	std::cout<<"enter the roll number of the student : ";
	std::cin>>roll_num ;
	std::cout<<"enter the mark of first subject : ";
	std::cin>>mark1 ;
	while(mark1>100)
	{
		std::cout<<"The entered mark is greater than 100, Please reneter the mark:";
		std::cin>>mark1;
	}
	std::cout<<"enter the mark of second subject : ";
	std::cin>>mark2 ;
	while(mark2>100)
	{

		std::cout<<"The entered mark is greater than 100, Please reneter the mark:";
		std::cin>>mark2;
	}
	std::cout<<"enter the mark of the third subject : ";
	std::cin>>mark3 ;
	while(mark3>100)
	{
		std::cout<<"the entered mark is greater than 100,please renter the mark : ";
		std::cin>>mark3;
	}
}

char student::calc_grade (float marks)
{
	if(marks<100 and marks>=90)
	{
		grade='A';
	}
	else if(marks<90 and marks>=80)
	{
		grade='B';
	}
	else if(marks<80 and marks>=70)
	{
		grade='C';
	}
	else if(marks<70 and marks>=60)
	{
		grade='d';
	}
	else if(marks<60 and marks>=50)
	{
		grade='e';
	}
	else
	{
		grade='f';
	}
	return grade;
}

void student::display ()
{
	std::cout<<"student : "<<name<<"\n";
	std::cout<<"roll number : "<<roll_num<<"\n";
	std::cout<<"mark of first subject : "<<mark1<<"and grade : "<< calc_grade(mark1)<<std::endl ;
	std::cout<<"mark of the second subject : "<<mark2<<"and grade : "<< calc_grade(mark2)<<std::endl ;
	std::cout<<"mark of the third subject : "<<mark3<<"and grade : "<< calc_grade(mark3)<<std::endl ;
}

int main()
{
	student student1 ;
	student1.input();
	student1.display();
	return 0;
}



				

