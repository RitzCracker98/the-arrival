//Isaac Ortega Mark McKinnon
//Time.cpp
//4/10/2017
//Version 0.1

using namespace std;

//Constructor
Time::Time(string s)
{
  hour = stoi(s.subset(0,1));
  minute = stoi(s.subset(3,4));
  meridiem = s.subset(7,8);
}

/
