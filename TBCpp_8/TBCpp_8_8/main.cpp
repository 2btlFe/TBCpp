//8_8 클래스 코드와 헤더 파일 
#include "Calc.h"

//대략적인 상황을 볼때는 헤더파일을
//자세한 분석과 수정을 위해서는 cpp 파일을 쓴다 

int main()
{

	Calc(10).add(10).sub(1).mult(2).print();
	
	return 0;
}