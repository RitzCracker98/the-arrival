//Isaac Ortega
//Time.h
//Version 0.1

#ifndef TIME_H
#define DATE_H

class Time {
  public:
    //Constructor
    //Pre: Nothing
    //Post: A Time object will be created
    Time();
    
    //Pre: The time object must be insnatiated
    //Post: it will return true or false if the string passed by is a valid date or not.
    bool isValid();
    
  private:
    int hour;
    int minute;

};

#enddif
