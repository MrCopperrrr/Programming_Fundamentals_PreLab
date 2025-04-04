class ClockType
{
public:
    ClockType(int, int, int);
    ClockType();    
    void printTime() const;
    void setTime(int, int, int);
    
    void getTime(int&, int&, int&) const;
    

private:
    int hr;
    int min;
    int sec;
};

void ClockType::printTime() const
{
   if (hr < 10)
      cout << "0";
   cout << hr << ":";
   if (min < 10)
      cout << "0";
   cout << min << ":";
   if (sec < 10)
      cout << "0";
   cout << sec;
}

void ClockType::getTime(int& hours, int& minutes, int& seconds) const {
    hours = hr;
    minutes = min;
    seconds = sec;
}


