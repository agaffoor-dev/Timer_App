#include <iostream>
#include <unistd.h>
#include <iomanip>

int main()
{
  using namespace std;
  int time;
  int hours;
  int minutes;
  int seconds;
  cout << "How many hours? ";
  cin >> hours;
  cout << "How many minutes? ";
  cin >> minutes;
  cout << "How many seconds? ";
  cin >> seconds;
  time = (hours*3600) + (minutes*60) + seconds;
  while (time > 0)
  {
    cout << setfill('0') << std::setw(2) << time/3600
	 << ':'
	 << setfill('0') << std::setw(2) << (time/60) - ((time/3600)*60)
         << ':'
         << setfill('0') << std::setw(2) << time%60 
         << '\r' 
	 << std::flush;
    --time;
    sleep(1);
  }
}
