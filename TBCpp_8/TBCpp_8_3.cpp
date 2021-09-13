//TBC 8_3 생성자 Constructors
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	
	//default 생성자
	//Fraction(){}
	
	//Constructors
	Fraction(const int& num_in, const int& den_in = 1)		//생성자 -> class와 이름이 동일 
	{
		m_numerator = num_in;
		m_denominator = den_in;
	}
	
	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};


class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec;	//class 내부에 class variable을 만듬 
	
public:
	First()
	{
		cout << "class First constructor()" << endl;
	}

};





int main() {
	
	//Fraction frac0{5, 6}; //uniform initializatioin -> type 변환 안함 
	
	Fraction frac(1, 4);	//parameter가 없으면 () 엾이 하자 -> 외워야 한다 
	//encapsulation 하면서 생성하기 -> 생성자 
	
	Fraction frac2 = Fraction{4, 5};
	
	frac.print();
	frac2.print();
	
	//특이 케이스 -> class내부에 class가 존재 
	First fir;
	
	//Second부터 할 수 있다 
	
	
	return 0;
}