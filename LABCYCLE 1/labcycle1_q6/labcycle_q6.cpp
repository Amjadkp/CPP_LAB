#include<iostream>

class Time
{
	private:
	int hours,minutes,seconds;

	public:
		void get_time();
		void put(void);
		void sum(Time,Time);
};

void Time :: get_time()
{
	std::cout<<"enter hours : ";
	std::cin>>hours;
	std::cout<<"enter minutes : ";
	std::cin>>minutes;
	std::cout<<"enter seconds : ";
	std::cin>>seconds;
}

void Time :: put(void)
{
	std::cout<<"TIME = "<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds ";
}

void Time :: sum(Time t1,Time t2)
{
	
	seconds=t1.seconds+t2.seconds;
	minutes=seconds/60;
	seconds=seconds%60;
	minutes=minutes+t1.minutes+t2.minutes;
	hours=minutes/60;
	minutes=minutes%60;
	hours=hours+t1.hours+t2.hours;
}
int main()
{
	Time t1,t2,t3;
	std::cout<<"enter the time t1\n ";
	t1.get_time();
	std::cout<<"enter the time t2\n ";
 	t2.get_time();
	t3.sum(t1,t2);
	std::cout<<"by adding two time t1 & t2 : ";
	t3.put();
	
	return 0;

}
