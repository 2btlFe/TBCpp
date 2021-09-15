//8_9 클래스와 const 
#include<iostream>
#include<string>

using namespace std;

class Something
{
public:
	int m_value = 0;
	
	/* 기본적으로 내장되어 있음 
	Something(const Something& st_in)
	{
		m_value = st_in.m_value;
		
		cout << "Copy constructor" << endl;
	}
	*/
	
	
	Something()
	{
		cout << "Constructor" << endl;
	}
	
	void setValue(int value) {m_value = value; }
	
	int getValue() const 	//이런 식으로 const 시킨다 
	{ 
		return m_value; 
	}
};


//복사가 됨 -> address가 다름 -> 고로 const & 사용하자 
void print(Something st)
{
	cout << &st << endl;	
	cout << st.getValue() << endl;
}


class Some{
public:
	string m_value = "default";
	
	const string& getValue() const { 	//const 버전의 멤버 대부분 const 둘 다 들어간다 
		cout << "const versioin" << endl;
		return m_value; }
	
	string& getValue() { 
		cout << "non-const version" << endl;
		return m_value; }
};

int main()
{
	
	/*
	const Something something; //object = instance = variable
	//something.setValue(3);	//당연히 안됨
	
	cout << something.getValue() << endl; //instance가 const 일 경우 const 멤버만 쓸 수 있다 
	*/
	
	/*
	Something some;
	cout << &some << endl;	
	print(some);
	*/
	
	Some something;
	something.getValue() = 10;
	
	const Some something2; // const 이기 때문에 const 멤버를 불러온다 
	something2.getValue(); //변경 불가 
	
	return 0;
}