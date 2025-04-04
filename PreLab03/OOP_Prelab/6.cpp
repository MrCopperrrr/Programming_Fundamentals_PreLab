class ClockType
{
public:
    ClockType();
      
    void setTime(int, int, int);
    void printTime() const;

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

void ClockType::setTime(int h, int m, int s) {
 // Kiểm tra và gán giá trị cho biến thành viên hr
    if (h >= 0 && h < 24) {
        hr = h;
    } else {
        hr = 0;
    }
// Kiểm tra và gán giá trị cho biến thành viên min
    if (m >= 0 && m < 60) {
        min = m;
    } else {
        min = 0;
    }
// Kiểm tra và gán giá trị cho biến thành viên sec
    if (s >= 0 && s < 60) {
        sec = s;
    } else {
        sec = 0;
    }
}

