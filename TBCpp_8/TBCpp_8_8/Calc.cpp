#include "Calc.h"

//using은 조심해서 사용 
using namespace std;

Calc::Calc(int init_value)
	: m_value(init_value)
{}	

Calc& Calc::add(int value) 
{
	m_value += value; 
	return *this;
}

Calc& Calc::sub(int value) 
{ 
	m_value -= value; 
	return *this;
}

//inline 
//헤더파일에 만들어 놓음 -> main에서 대체하여 들어가게 되는 것임 -> 적용이 빠름 
Calc& Calc::mult(int value) 
{ 
	m_value *= value; 
	return *this;
}

void Calc::print()
{
	cout << m_value << endl;
}