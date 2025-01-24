/**
Nolan Tibbles
PE 1
This is the header file for my point class. It defines the initilization of a point,
ways that the point can be manipulated, and the distance between two points.
*/
#pragma once

class Point {
  public:
    Point(int);
    Point(std::vector<int>);
    Point(int[],int);
    std::vector<int> GetPoint();
    void SetPoint(std::vector<int>);
    int Distance(Point);
    void Translate(int);
  private:
    std::vector<int> cordinate_;
};
