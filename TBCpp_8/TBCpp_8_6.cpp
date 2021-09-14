//8_6 소멸자 destructor 
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Constructor " << m_id << endl;		
	}
	
	//memory leak 방지 -> 편리하게 메모리를 없애버림 
	~Simple()
	{
		cout << "Destructor " << m_id << endl;
	}
	
};

int main()
{
	//동적할당 
	//Simple *s1 = new Simple(0);
	//delete s1;
	
	//순서가 있음 -> 1생기고 2생기고 2없어지고 1없어지고
	Simple s1(0);
	Simple s2(1);
	
	
}