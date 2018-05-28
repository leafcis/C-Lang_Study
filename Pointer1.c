#include <stdio.h>
main()
{
	char ch;
	int tmp;
	double db;
	*&ch = 'P'; //포인터 &ch가 가르키는 주소(기억공간)에 'P' 저장
	*&tmp = 100; //포인터 &tmp가 가르키는 주소(기억공간)에 100 저장
	*&db = 3.14; //포인터 &db가 가르키는 주소(기억공간)에 3.14 저장
	printf("변수 ch에 저장된 문자 : %c\n", ch); //*&ch, P 출력
	printf("변수 tmp에 저장된 숫자 : %d\n", tmp); //*&tmp, 100 출력
	printf("변수 db에 저장된 숫자 : %lf\n", db); //*&db, 3.14 출력
	tmp = 300;
	printf("변수 tmp에 저장된 숫자 : %d\n", *&tmp); //300 출력

	int a1 = 100, b1 = 10;
	b1 = *&a1; //포인터 &a1가 가리키는 주소의 값을 b1에 대입, b1 = 100 즉, b1 = a1;

	int a2 = 10, b2 = 20;
	*&a2 = *&b2; //a2 = 20 즉, a2 = b2;

}