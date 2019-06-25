/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Tuesday 25 June 2019 11:47:47 AM IST
 * Last modified : Tuesday 25 June 2019 12:22:20 PM IST
 * Description   : 
 * ***********************************************************************/

#include <iostream>
#include <string>

template <typename T>
T min (T a, T b){
	return (a < b) ? a : b;
}

template <typename T1, typename T2>
int fun (T1 a, T2 b){
	return 1;
}

template <typename T1, typename T2, typename T3>
T3 fun1 (T1 a, T2 b, T3 c){
	return 0;
}

struct Person {
	std::string name;
	int age;

	bool operator < (const Person &rhs){
		return (this->age < rhs.age);
	}
};


int main()
{
	Person p1 {"person1" , 40};
	Person p2 {"person2", 30};
	Person p3 = min (p1, p2);

	std::cout << p3.name << std::endl;

	std::cout << min(10, 11) << std::endl;
	std::cout << fun<int, char>(2, 'a') << std::endl;
	std::cout << fun(2, 4.1f) << std::endl;
	std::cout << fun1<int, char, float>(1, 'w', 4.2f) << std::endl;
	std::cout << fun1(3.1f, 4, 'o') << std::endl;

	return 0;
}
