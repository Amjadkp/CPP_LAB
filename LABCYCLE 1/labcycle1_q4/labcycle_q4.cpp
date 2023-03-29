#include<iostream>
#include<string>

class strings
{
	private:
		int len;
		string name;

	public:
		void get();
		void compare_str(strings,strings);
		void get_len(strings);
		void concate(strings,strings);

};

void strings ::get()
{
	std::cout<<"enter the first string : ";
	std::cin>>name;
}

void strings ::compare(strings str1,strings str2)
{
	if (str1==str2)
	{
		std::cout<<"both strings are same";
	}
	else
	{
		std::cout<<"these two strings are not equal";
	}	
}

void strings ::get_len(strings)
{
	len=strings.name.length;
	std::cout<<"length of the string : "<<len;
}

void strings ::concate(strings str1,strings str2)
{
	name=str1.name+str2.name;
	std::cout<<new_string;
}

int main()
{
	strings str1,str2,new_str;

	str1.get();
	str1.get_len(str1);

	str2.get();
	str2.get_len(str2);

	new_str.compare_str(str1,str2);
	new_str.concate(str1,str2);

	return 0;
}



