#include <iostream>
#include <string>
using namespace std;

typedef struct {
	int hour;
	int minute;
	int second;
}Time;

Time setTime(string time) {
	return Time{
		stoi(time.substr(0,2)),
		stoi(time.substr(3,2)),
		stoi(time.substr(6,2))
	};
}

void printTime(Time time) {
	string hour = to_string(time.hour);
	string minute = to_string(time.minute);
	string second = to_string(time.second);

	hour = hour.length() == 1 ? '0' + hour : hour;
	minute = minute.length() == 1 ? '0' + minute : minute;
	second = second.length() == 1 ? '0' + second : second;

	cout << hour << ":" << minute << ":" << second << '\n';
}

int main(void) {
	string currentTime, startTime;
	cin >> currentTime >> startTime;

	Time current = setTime(currentTime);
	Time start = setTime(startTime);

	Time result;
	result.second = start.second - current.second;

	if (result.second < 0) {
		result.second += 60;
		start.minute--;
	}

	result.minute = start.minute - current.minute;

	if (result.minute < 0) {
		result.minute += 60;
		start.hour--;
	}

	result.hour = start.hour - current.hour;

	if (result.hour < 0) {
		result.hour += 24;
	}
	printTime(result);
	return 0;
}

// stoi 함수: string to int 말 그대로 문자열을 정수형으로 바꾸는 함수
// substr 함수: string substr(size_t index=0, size_t len=npos) const;
// string을 index에서부터 len만큼 잘라서 반환하는 함수.