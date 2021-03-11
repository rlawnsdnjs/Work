#include <iostream>
#include <stdio.h>

// class : 객체

class point {    // struct point
public:
    point(int a, int b)   // 생성자 = 무조건 public  // 함수의 타입이 없어서 return값도 없다.
    {
        x = a; y = b;
    }
    ~point()   // 소멸자
    {
        delete ppp;
    }
private:         // 아래 변수들을 해당 class 내부에서만 접근.
    int* ppp;
public:          // 아래 변수들을 해당 class 외부에서도 접근하는것을 허용합니다.
    int x;
    int y;

    int* pointfunc()
    {
        ppp = (int*)malloc(1000);
        return ppp;
    }
};

class rectangle {    // struct rectangle
private:
public:
    //rectangle(int x1, int y1, int x2, int y2)
    //{
    //    p1.x = pp1.x;
    //    p1.y = pp1.y;
    //    p2.x = pp2.x;
    //    p2.x = pp2.y;
    //    p13.x = pp1.x;
    //    p13.x = pp2.y;
    //}

    point p1;
   // point p13;
    point p2;
    
    int area()  // x * y : 두 점으로 이루어진 직사각형 넓이
    {
        int x = p2.x - p1.x;
        int y = p2.y - p1.y;
        return x * y;
    }

    double distance();
    //{
    //    int x = p2.x - p1.x;
    //    int y = p2.y - p1.y;
    //    return sqrt(x*x + y*y);   // d = sqrt(x*x + y*y);  sqrt = square root
    //}
};

class rentangleEx : rectangle  //retangleEx에서 retangle에 있는 모든 내용을 가지고 오겠다(상속하겠다).
{
public:

    /*
    class rentangle의 모든 내용이 들어있음.
    */

    point p3 = { p1.x, p2.y };  //
    point p4 = { p2.x, p1.y };  // p1, p2의 값을 이용해서 구할 것. 

    int totalLength()
    {
        int x = p2.x - p1.x;
        int y = p2.y - p1.y;

        return x * 2 + y * 2;
    }
};

double rectangle::distance()   // class안에서 프로토타입을 선언하고 밖으로 빼도 된다.
{
    int x = p2.x - p1.x;
    int y = p2.y - p1.y;
    return sqrt(x * x + y * y);   // d = sqrt(x*x + y*y);  sqrt = square root
}

int main()
{
    point p1(10, 10), p2(20, 20);  // p1, p2 생성을 위함.

    rectangle r1 = { p1, p2 };

 //   rectangleEx r2 = { {10,10}, {20,20} };
    //r1.p1.x = 15;
    //r1.p1.y = 15;
    //r1.p2.x = 10;
    //r1.p2.y = 10;
    printf("두 점(%d, %d), (%d, %d)로 이루어진 직사각형의 넓이는 %d입니다.\n"
        , r1.p1.x, r1.p1.y, r1.p2.x, r1.p2.y, r1.area());
    printf("두 점(%d, %d), (%d, %d) 사이의 거리는 %.2f입니다.\n"
        , r1.p1.x, r1.p1.y, r1.p2.x, r1.p2.y, r1.distance());
 //   printf("직사각형의 둘레의 길이는 %d입니다.\n", r2.totalLength());
}