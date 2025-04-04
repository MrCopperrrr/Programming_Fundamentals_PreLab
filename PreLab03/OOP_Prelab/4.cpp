class ClockType
{
   public:
      ClockType(int, int, int); //constructor with parameters
      ClockType(); //default constructor
      
      void printTime() const;

   private:
      int hr;
      int min;
      int sec;
};

void ClockType::printTime() const { 
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

ClockType::ClockType(int h, int m, int s) {
    if (h >= 0 && h < 24) {
        hr = h;
    } else {
        hr = 0;
    }

    if (m >= 0 && m < 60) {
        min = m;
    } else {
        min = 0;
    }
 
    if (s >= 0 && s < 60) {
        sec = s;
    } else {
        sec = 0;
    }
}

ClockType::ClockType() {
    hr = 0;
    min = 0;
    sec = 0;
}


