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
