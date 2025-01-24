/**
Nolan Tibbles
PE 1
This is my point class cpp file that implements the functions of the class.
The goal of the class is to initalize a point in a n dimensional space and to
calculate the distance between it and another point in a n dimensional space.
*/
#include <iostream>
#include <vector>
#include <cmath>

#include "Point.h"

/**
  Initializes a point with one dimension

  @param the cordinate to be initialized
*/
Point::Point(int initalPoint) {
  std::vector<int> tmp;
  tmp.push_back(initalPoint);
  cordinate_ = tmp;
}

/**
  Initalizes a point with x dimensions where x is the size of the vector

  @param the vector of cordinate values
*/
Point::Point (std::vector<int> initialPoints) {
  std::vector<int> tmp;
  for (int i : initialPoints) {
    tmp.push_back(i);
  }
  cordinate_ = tmp;
}

/**
  Initalizes a point with x dimensions where x is the size of the array

  @param the array of cordinate values and the size of the array
*/
Point::Point (int initialPoints[], int size) {
  std::vector<int> tmp;;
  for (int i = 0; i < size; i++) {
    tmp.push_back(initialPoints[i]);
  }
  cordinate_ = tmp;
}

/**
  Returns the vector of cordinates for a given point

  @return The private cordinate_ vector of a given point
*/
std::vector<int> Point::GetPoint () {
  return cordinate_;
}

/**
  Sets the cordinate_ private variable equal to a passed in vector

  @param a vector of ints that will be used for cordinate values
*/
void Point::SetPoint(std::vector<int> newCordinates) {
  cordinate_ = newCordinates;
}

/**
  Calculates the distance between two points.
  For cases where dimensions are not equal it will treat the non-exists dimensional
  Values as zero.

  @param A point class variable
  @retrurn The euclidan distance between two points
*/
int Point::Distance(Point cordinateSet2) {
  std::vector<int> tmp = cordinateSet2.GetPoint();
  int distance = 0;
  
  /**
    The if statments are to handle edge cases where points have diffrent dimensional values
  */
  if (cordinate_.size() < tmp.size()) {
    for (std::vector<int>::size_type i = 0; i < cordinate_.size(); i++) {
      distance += pow((cordinate_[i]-tmp[i]),2);
    }
    for (std::vector<int>::size_type i = cordinate_.size(); i < tmp.size(); i++) {
      distance += pow(tmp[i],2);
    }
  }
  else if (cordinate_.size() > tmp.size()) {
    for (std::vector<int>::size_type i = 0; i < tmp.size(); i++) {
      distance += pow((cordinate_[i]-tmp[i]),2);
    }
    for (std::vector<int>::size_type i = tmp.size(); i < cordinate_.size(); i++) {
      distance += pow(cordinate_[i],2);
    }
  }
  else {
    for (std::vector<int>::size_type i = 0; i < cordinate_.size(); i++) {
      distance += pow(cordinate_[i]-tmp[i],2);
    }
  }
  return sqrt(distance);
}

/**
  Increases or decreases all cordinate values by a given values

  @param the amount to shift our cordinates by
*/
void Point::Translate(int translate) {
  for (std::vector<int>::size_type i = 0; i < cordinate_.size(); i++) {
    cordinate_[i] += translate;
  }
}
