#include <iostream>

class point   // 기본적으로 private
{
public:
	int x;
	int y;
	point(int a, int b) : x(a), y(b) {}  // point 생성자
	point() {}   // null 생성자
	int getX() { return x; }
	int getY() { return y; }
	void setX(int a) { x = a; }
	void setY(int a) { y = a; }


	//  p1 = p + n;  p:point, n:int  ===>  p1.x = p.x + n;  p1.y = p.y + n;
	point operator+(int n)
	{
		point p1;
		p1.x = x + n;  p1.y = y + n;
		return p1;
	}

	point operator+(point k)
	{
		point p1;
		p1.x = x + k.x;  p1.y = y + k.y;
		return p1;
	}
};

class rectangle
{	
	point p1, p2;
public:
	rectangle(point pp1, point pp2) : p1(pp1), p2(pp2)   // 함수의 local var임, member var 아님. / rectangle 생성자
	{
		p1 = pp1; p2 = pp2;   // class 변수의 대입문
	}
	rectangle() : p1(0,0), p2(0,0) { }

	void setP1(point p) { p1 = p; }
	void setP2(point p) { p2 = p; }

	int getX() { return abs(p1.x - p2.x); }
	int getY() { return abs(p1.y - p2.y); }

	int area()
	{
		int x = p1.x - p2.x;
		int y = p1.y - p2.y;
		return abs(x * y);
	}
};


// point 클래스와 rectangle 클래스는 은닉되어 있음.
// 공개된 정보는 point 생성자와 rectangle 생성자가 알려져 있음.
// rectangle 클래스에는 사각형의 면적을 구하는 area 함수가 존재한다.
//
// ----> ractangle의 대각선 길이를 구하는 distance 함수가 필요함.

class rectangleEx : public rectangle  // rectangle 클래스를 상속 private
{
	int a;
public:
	rectangleEx(point pp1, point pp2, int a) : rectangle(pp1,pp2)
	{
//		setP1(pp1); setP2(pp2);
	}
	double distance()
	{
		int x = getX();
		int y = getY();
		return sqrt(x * x + y * y);
	}
};

// member function : 지름(diameter), 원둘레(CLen), 원면적(CArea)
// ***** 단, rectangle 클래스를 상속받아서 구현하세요 *****
// rectangle의 두 점을 지름으로 하는 원(circle) 정의

#define PI 3.14159265359
class circle : public rectangle
{
private:
	point c;
	double rad;
public:
	circle(point pp1, point pp2) : rectangle(pp1, pp2), c(0,0), rad(0)
	{
		c.setX((pp1.x + pp2.x) / 2);
		c.setY((pp1.y + pp2.y) / 2);
		int x = getX();
		int y = getY();
		rad = sqrt(x * x + y * y)/2;
	}
	double diameter()
	{
		return rad * 2;
	}
	double CLen()
	{
		return rad * 2 * PI;
	}
	double CArea()
	{
		return rad * rad * PI;
	}
};


int func1(rectangle* r);
int func2(rectangle& r);
int func3(circle& c);



int main()
{
	int n1 = 10, n2 = 20;
	point p1(n1, n1), p2(n2, n2);
	rectangle r1(p1, p2);                 // rectangle class 생성자 이용
//		        = { {10,10}, {20,20} };   // struct type 초기화
	rectangle r2;
	circle c1(p1, p2);

	func1(&r1);   // 포인터 변수 전달을 위해 변수(클래스)의 주소 전달
	func2(r1);   // reference type은 그냥 변수명 전달

	printf("여기는 main 입니다 : \n두 점 p1(10,10)과 p2(20,20)으로 이루어진 직사각형의 넓이는 %d입니다.\n"
		, r2.area());


	func3(c1);


	p1.setX(15); p1.setY(15);
	point p3 = p1 + 10;
	printf("point class의 연산자 오버로딩 테스트 (+) : p1(%d, %d) + %d => (%d, %d)\n",
		p1.x, p1.y, 10, p3.x, p3.y);

	point k;
	k.setX(6); k.setY(11);
	point p4 = p1 + k;
	printf("점 p1과 점 k의 합 : p1(%d, %d) + k(%d, %d) => (%d, %d)\n"
		, p1.x, p1.y, k.x, k.y, p4.x, p4.y);
}



int func1(rectangle* r1)
{
	printf("두 점 p1(10,10)과 p2(20,20)으로 이루어진 직사각형의 넓이는 %d입니다.\n"
		, r1->area());   // 포인터는 .이 아니라 ->로 쓴다
	return 0;
}

int func2(rectangle& r1)
{
	printf("두 점 p1(10,10)과 p2(20,20)으로 이루어진 직사각형의 넓이는 %d입니다.\n"
		, r1.area());
	return 0;
}

int func3(circle& c1)
{
	printf("두 점 p1(10, 10)과 p2(20, 20)를 지나는 선분을 지름으로 하는 원의 지름은 %f입니다.\n", c1.diameter());
	printf("두 점 p1(10, 10)과 p2(20, 20)를 지나는 선분을 지름으로 하는 원의 넓이는 %f입니다.\n", c1.CArea());
	printf("두 점 p1(10, 10)과 p2(20, 20)를 지나는 선분을 지름으로 하는 원의 둘레는 %f입니다.\n", c1.CLen());
	return 0;
}
