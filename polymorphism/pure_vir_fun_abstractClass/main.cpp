/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Monday 24 June 2019 12:39:20 PM IST
 * Last modified : Monday 24 June 2019 12:50:39 PM IST
 * Description   : 
 * ***********************************************************************/


#include <iostream>

// Abstract class
class Shape {
	private:
		// some members

	public:
		virtual void draw() = 0; // pure virtual finction
		virtual void rotate() = 0;

		virtual ~Shape()
		{}
};

// all pure virtual functions should be overriden to be a concrete class
class Circle:public Shape {
	public:
		void draw() override
		{
			std::cout << "circle draw\n";
		}

		void rotate() override
		{
			std::cout << "Circle rotate\n";
		}
		virtual ~Circle()
		{}
};

// all pure virtual functions should be overriden to be a concrete class
class Square:public Shape {
	public:
		void draw() override
		{   
			std::cout << "sqaure draw\n";
		}   

		void rotate() override
		{   
			std::cout << "Square rotate\n";
		}   

		void calculate_area()
		{
			std::cout << "Sqaure area\n";
		}
		virtual ~Square()
		{}  
};

int main()
{
	//Shape s; 	// compiler error
	//Shape *ptr = new Shape; //compiler error

	//Shape *s; // ok
	
	Shape *ptr = new Square();
	ptr->draw();
	ptr->rotate();

	Square *s = new Square;
	s->calculate_area();
	Circle c;
	
	return 0;
}
