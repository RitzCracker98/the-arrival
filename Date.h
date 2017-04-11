// Mark McKinnon
// April 10, 2017
// Version 1.0

#ifndef DATE_H
#define DATE_H
#include <string>

using namespace std;

class Date
{
  private:
    string day;
    string month;
    string year;
  public:
    date();
    bool isValid(string, string, string);
};
#endif
