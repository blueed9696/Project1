
// 주석
int main()
{	
	// 자료형 (크기단위, byte)
	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형 : float(4), double(8)


	int i = 0;
	// 256가지 -> 0~255ㄷ
	unsigned char c = 0; // 양의 정수만 표현 가능

	c = 0;
	c = 255;

	// 1 byte 로 양수, 음수 둘다 표현
	// -128 ~ 0 ~127
	// 최상위 bit는 음수 양수를 구분
	// 11111111  --> -1
	char c1 = 0;
	c1 = -1;
	c1 = 255;

	// c1 --> 1, 8개이므로 -1을 표현함

	// 음의 정수 찾기(2의 보수법)
	// 0을 1로 1을 0으로 바꾸고 맨 첫자리에 1을 더한다.
	// 두 숫자 더하면 0이됨!

	int a = 4 + 4.0;

	// 실수 표현방식은 정밀도에 의존
	// double(8) 이 float(4)보다 더 아래의 소수점까지 정확하게 표현 가능

	// 정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현방식의 피 연산자가 연산될 경우 명시적으로 변환하자.

	float f = 10.2415f + (float)20; // f --> 4 byte float으로 인식

	// 산술 연산자
	// /(몫), %(나머지, 피연산자가 모두 정수)
	// ++, -- (증감연산자)
	int data = 10 + 10;
	// data = data + 20;
	data += 20;

	data = int(10.f / 3.); // --> f안붙히면 double 8byte 로 인식
	++data; 
	// 증가는 같은데 연산자 우선순위가 바뀜
	a = 10;
	data = a++;	//a를 넣고 증가 data = 10
	data = ++a; // a를 증가하고 넣음 data = 11

	// if, else
	data = 0;
	if (100 && 200) {
		data = 100;
	}
	if (data == 100)
	{

	}
	else if(10) {

	}
	else {

	}

	// 비트 연산자
	unsigned char byte = 1;
	byte << 1;
	byte <<= 1; // byte = byte << 1 1칸 2칸 3칸 미는거

	byte <<=  3; // 3칸 미는거

	return 0;
}