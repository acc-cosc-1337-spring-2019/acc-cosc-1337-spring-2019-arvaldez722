//main
#include <iostream>
#include <vector>
#include <memory>

#include "line.h"
#include "circle.h"

int main() 
{
	//can't create instance of Shape because it is an abstract class (bc it has a pure virtual funtion)

	Shape* line = new Line(); //creates dynamic memeory (on heap)
	line->draw();
	delete line;

	std::vector<Shape*> shapes{ new Line(), new Circle() }; //created a vector of shape pointers

	for (auto& shape : shapes){
		shape->draw();
	}

	std::cout << "\n";
	for (auto* shape : shapes){
		shape->draw();
	}

	std::cout << "\n";

	//shape instance using smart pointer
	std::unique_ptr<Shape> l = std::make_unique<Line>();
	l->draw();


	//vector of shape instances using smart pointers 
	std::vector <std::unique_ptr < Shape >> shap;   
	shap.push_back(std::make_unique< Line >());
	shap.push_back(std::make_unique< Circle >());

	for (auto & shape : shap)
	{
		shape->draw();
	}

	return 0;
}