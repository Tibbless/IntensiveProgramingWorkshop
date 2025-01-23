#include <iostream>
#include <vector>
#include <cmath>

#include "Point.h"

Point::Point(int initalPoint) {
  std::vector<int> tmp;
  tmp.push_back(initalPoint);
  cordinate_ = tmp;
}

Point::Point (std::vector<int> initialPoints) {
  std::vector<int> tmp;
  for (int i : initialPoints) {
    tmp.push_back(i);
  }
  cordinate_ = tmp;
}

Point::Point (int initialPoints[], int size) {
  std::vector<int> tmp;;
  for (int i = 0; i < size; i++) {
    tmp.push_back(initialPoints[i]);
  }
  cordinate_ = tmp;
}

std::vector<int> Point::GetPoint () {
  return cordinate_;
}

void Point::SetPoint(std::vector<int> newCordinates) {
  cordinate_ = newCordinates;
}

int Point::Distance(Point cordinateSet2) {
  std::vector<int> tmp = cordinateSet2.GetPoint();
  int distance = 0;

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

void Point::Translate(int translate) {
  for (std::vector<int>::size_type i = 0; i < cordinate_.size(); i++) {
    cordinate_[i] += translate;
  }
}
