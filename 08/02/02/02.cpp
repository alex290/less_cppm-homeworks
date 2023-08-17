#include <iostream>
#include "equilateral_triangle.h"
#include "rhomb.h"
#include "square.h"
#include "rectangular_triangle.h"

void print_info(Triangle& figure)
{

	std::cout << figure.get_name() << ": " << std::endl;
	figure.print_info();
};


int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		Triangle triangle(10, 20, 30, 50, 60, 70);
		print_info(triangle);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		RectangularTriangle rectangularTriangle(10, 20, 30, 50, 60);
		print_info(rectangularTriangle);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
		print_info(isoscelesTriangle);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		EquilateralTriangle equilateralTriangle(30);
		print_info(equilateralTriangle);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
		print_info(quadrangle);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Rectangle rectangle(10, 20);
		print_info(rectangle);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Square square(20);
		print_info(square);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Parallelogram parallelogram(20, 30, 30, 40);
		print_info(parallelogram);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Rhomb rhomb(30, 30, 40);
		print_info(rhomb);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}
