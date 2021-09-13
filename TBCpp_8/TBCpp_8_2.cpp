//TBC 8_2 캡슐화, 접근 지정자, 접근 함수 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
//access specifier(public, private, protected)
	//private를 해야지 class 내부에서만 변경해도 사용이 가능하다 -> 캡슐화
	//괜히 public 해두면 하나하나 다 바꿔야한다
	int m_month;
	int m_day;
	int m_year;

public:
	void setDate(const int& month_input, const int& day_input, const int& year_input)			//setters
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}
	
	const int& getDay()		//getters	//값을 받아오되 변경을 막는다 
	{
		return m_day;
	}
	
	void copyFrom(const Date& original)	// 같은 메모리, 같은 클래스라서 가능하다
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
	
};

int main() {
	Date today;
	today.setDate(8, 4, 2015);
	
	cout << today.getDay() << endl;
	
	Date copy;
	copy.copyFrom(today);
	
	cout << copy.getDay() << endl;
	
	
	
	
	return 0;
}