/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Tuesday 25 June 2019 12:23:43 PM IST
 * Last modified : Tuesday 25 June 2019 03:06:42 PM IST
 * Description   : 
 * ***********************************************************************/

#include <iostream>

template <typename T>

class Item{
	private:
	std::string name;
	T value;
	
	public:
	Item(std::string name, T value)
		:name{name}, value{value}
		{
		}
	
	std::string get_name() {return name;}
	T get_value() {return value;}
};

template <typename T1, typename T2>
struct Pair {
	T1 first;
	T2 second;
};

int main()
{	
	Item<int> item1{"item1", 100};
	std::cout << item1.get_value() << std::endl;

	Item<std::string> item2{"item2", "item2 string"};
	std::cout << item2.get_value() << std::endl;

	Item<Item<std::string>> item3{"string1", {"string2", "string3"}};
	std::cout << item3.get_value().get_name() << std::endl;
	return 0;
}
