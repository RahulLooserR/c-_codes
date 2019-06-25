/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Tuesday 25 June 2019 03:13:18 PM IST
 * Last modified : Tuesday 25 June 2019 03:39:20 PM IST
 * Description   : 
 * ***********************************************************************/

#include <iostream>

//template <int N>
template <typename T, int N>

class Array{
	int size{N};
	int values[N];

	// operator << overloading 
	//friend std::ostream &operator << (std::ostream &os, const Array &obj)
	// friend std::ostream &operator << (std::ostream &os, const Array<N> &arr)
	friend std::ostream &operator << (std::ostream &os, const Array<T, N> &arr)
	{
		os << "[ ";
		for (auto const &val:arr.values){
			os << val << " ";
		}
		os << "]" << std::endl;

		return os;
	}
	
	public:

	// operator [] overloading
	// int &operator [](int index) 
	T &operator [] (int index)
	{
		return values[index];
	}
	
	int get_size () const
	{
		return size;
	}

	void fill(T value)
	{
		for(auto &val:values)
			val = value;
	}
};


int main()
{
	// Array<5> arr
	Array<int, 5> arr;
	arr.fill(20);

	std::cout << arr;
	
	arr[4] = 100;
	std::cout << arr;

	return 0;
}
