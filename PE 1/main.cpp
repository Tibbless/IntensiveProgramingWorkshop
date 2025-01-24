/**
Nolan Tibbles
PE 1
This is main is built to test the functionalites of my Point class.
It does this by calling methods of the class and printing the response
to the console to validate the results.
*/
#include <iostream>
#include <vector>
#include "Point.h"

int main() {

  int defaultTest = 5;
  std::vector<int> vectorTest = {-5,20,50,-20,-15};
  int arrTest[3] = {-2,5,6};
  int arrSize = 3;

  Point Point1(defaultTest);
  Point Point2(vectorTest);
  Point Point3(arrTest, arrSize);
  
  std::cout << "Cordinates of Point1: ";
  for (std::vector<int>::size_type i = 0; i < Point1.GetPoint().size(); i++) {
    std::cout << Point1.GetPoint()[i] << ",";
  }
  std::cout << '\n';

  std::cout << "Cordinates of Point2: ";
  for (std::vector<int>::size_type i = 0; i < Point2.GetPoint().size(); i++) {
    std::cout << Point2.GetPoint()[i] << ",";
  }
  std::cout << '\n';

  std::cout << "Cordinates of Point3: ";
  for (std::vector<int>::size_type i = 0; i < Point3.GetPoint().size(); i++) {
    std::cout << Point3.GetPoint()[i] << ",";
  }
  std::cout << '\n';

  std::cout << "Distance between Point1 and Point2: " << Point1.Distance(Point2) << '\n';
  std::cout << "Distance between Point2 and Point3: " << Point2.Distance(Point3) << '\n';
  std::cout << "Distance between Point3 and Point1: " << Point3.Distance(Point1) << '\n';
  
  Point2.Translate(10);

  std::cout << "Translated Point2 by 10, new cordiantes: ";
  for (std::vector<int>::size_type i = 0; i < Point2.GetPoint().size(); i++) {
    std::cout << Point2.GetPoint()[i] << ",";
  }
  std::cout << '\n';

  std::cout << "Distance between Point1 and new Point2: " << Point1.Distance(Point2) << '\n';
  std::cout << "Distance btweeen Point3 and new Point2: " << Point3.Distance(Point2) << '\n';
  
  Point2.Translate(-20);
  
  std::cout << "Translated Point2 by -20, new cordiantes: ";
  for (std::vector<int>::size_type i = 0; i < Point2.GetPoint().size(); i++) {
    std::cout << Point2.GetPoint()[i] << ", ";
  }
  std::cout << '\n';

  std::cout << "Distance between Point1 and new Point2: " << Point1.Distance(Point2) << '\n';
  std::cout << "Distance btweeen Point3 and new Point2: " << Point3.Distance(Point2) << '\n';

  return 0;
}
