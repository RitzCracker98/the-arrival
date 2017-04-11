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
    // Preconditions: Nothing.
    // Postconditions: The private variables are initialized to default values.
    bool isValid(string, string, string);
    // Preconditions: A date must be passed into the function.
    // Postconditions: The date is either a valid date or an invalid date.
};
#endif
