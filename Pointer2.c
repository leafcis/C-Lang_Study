#include <stdio.h>
main()
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int *ap = ary; // ary = &ary[0] <=> ary[0] = *(ary+0) = *(ap+0) = ap[0]
	int i; // ary[i] = *(ary+i) = *(ap+i) = ap[i]

	//배열명은 포인터 상수이므로 자신의 값을 바꿀 수 없음

	//ary = ary + 2; // 잘못 된 사용
	//ary++; // 배열은 변수가 아니므로 자신의 값을 바꿀 수 없음

	//반면 포인터 변수는 기억공간이므로 자신의 값을 바꿀 수 있음

	for (i = 0; i < 5; i++) {
		printf("%5d", *ap);
		ap++;
	}

	//배열에 값을 입력시 각 배열 요소의 포인터만을 사용함

	for (i = 0; i < 5; i++) {
		scanf("%d", ap+i); // ap+i 자체가 주소임
	}
}