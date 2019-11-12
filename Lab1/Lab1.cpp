
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	string rawinput;
	cout << "Enter the course number, meeting days, and time period separated by commas Ex.(293, 1, 3, 5): ";
	getline(cin, rawinput);

	istringstream inputdata{ rawinput };

	int cnum, days, period;
	vector<int> arrayDays;
	char comma;

	inputdata >> cnum >> comma;
	while (inputdata >> days) {
		//cout << days << "\n";
		arrayDays.push_back(days);
		inputdata >> comma;
	}
	period = arrayDays.back();

  arrayDays.pop_back();

	ostringstream output;

	vector<string> weekdays{ "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	vector<string> timePeriod{ "8:00 - 9:15", "9:25 - 10:40", "10:50 - 12:05", "12:15 - 1:30", "3:05 - 4:20", "4:30 - 5:45", "5:55 - 7:10", "7:20 - 8:35", "8:45 - 10:00" };

	output << "CSCI" << cnum << " ";
  for(int i = 0; i < arrayDays.size(); i++){
    output << weekdays[arrayDays[i] - 1];
    if(i < arrayDays.size()){
      if(i == arrayDays.size() - 1){
        break;
      }
      output << "/";
    }
  }
  output << ", " << timePeriod[period - 1] << "\n";

	cout << output.str();
}