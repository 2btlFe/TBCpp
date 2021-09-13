//TBC 8_1 객체지향 프로그래밍과 클래스 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//class는 구조체+함수 -> 멤버 + 메서드

class Friend{ //access specifier (public, private, protected) 접근 제한자
public:
	
	string name;
	string address_; 	//_이런 식의 경우도 있다
	int _age; 			//이런 경우도 있다 	
	double height;
	double weight;
	
	void print(){
		cout << name << " " <<  address << " " << age << " " << height << " " << weigth << '\n';
	}
};

int main() {
	Friend jj{"Jack JAck", "Uptown", 2, 30, 10}; //instanciation, instance
	
	jj.print();
	
	//typing을 극적으로 줄여줌 
	vector<Friend> my_friends;
	my_friends.resize(2);

	for(auto &ele : my_friends)
	{
		ele.print();
	}
	
	
	
	
	
	
	
	return 0;
}