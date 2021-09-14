//8_7 this 포인터와 연쇄 호출 
#include<iostream>
#include<vector>
#include<string>

using namespace std;





//1. this의 용법 

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		//this->  생략되어있는 것이다 
		setID(id);
		//(*this).setID(id);
		
		/*
		//this-> 생략됨
		m_id;
		*/
		
		//자신의 주소를 확인 
		cout << this << endl;
	}
	
	void setID(int id) {m_id = id; }
	int getID() {return m_id; }
};

//2. 예제
class Calc
{
private:
	int m_value;
	
public:
	Calc(int init_value)
		: m_value(init_value)
	{}		
	
	/*
	void add(int value) { m_value += value; }
	void sub(int value) { m_value -= value; }
	void mult(int value) { m_value *= value; }
	*/
	
	Calc& add(int value) { m_value += value; return *this;}
	Calc& sub(int value) { m_value -= value; return *this;}
	Calc& mult(int value) { m_value *= value; return *this;}
	
	
	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(4);
	
	cout << &s1 << " " << &s2 << endl;
	
	//Simple::setID(&s2, 4); == s2.setID(4);
	
	/*
	Calc cal(10);
	cal.add(10);
	cal.sub(1);
	cal.mult(2);
	
	cal.print();
	*/
	
	//연쇄 호출 chaining member functioin
	
	Calc cal(10);
	cal.add(10).sub(1).mult(2).print();
	
	//==
	/*
	Calc cal(10);
	Calc &temp1 = cal.add(1);
	Calc &temp2 = temp1.sub(1);
	Calc &temp3 = temp2.mult(2);
	temp3.print();
	
	*/
	
	return 0;
}