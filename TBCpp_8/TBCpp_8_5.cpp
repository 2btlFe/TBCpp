//TBC 8_5 위임 생성자 -> 남의 생성자를 빌려 쓰는 것
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student{
private:
	int 	m_id;
	string 	m_name;

public:
	
	Student(const string& name_in)	
		//: m_id(0), m_name(name_in)
		: Student(0, name_in)	//생성자를 가져다 쓰는 것 -> 위임 생성자
	{}		
	
	Student(const int& id_in, const string& name_in)
		: m_id(id_in), m_name(name_in)
	{}
	
	
	//초기화 코드를 분리하기도 한다 
	/*
	void init(const int& id_in, const string& name_in)
	{
		m_id = id_in;
		m_name = name_in;
	}
	
	
	Student(const int& id_in, const string& name_in)
		//: m_id(id_in), m_name(name_in)
	{
		init(id_in, name_in);
	}
	*/
	
	
	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};


int main() {
	
	Student st1(1, "Jack Jack");
	st1.print();
	
	Student st2("Black");
	st2.print();
	
	return 0;
}