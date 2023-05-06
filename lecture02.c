#include <stdio.h>

int main()
{
	int confession;
	scanf("%d", &confession);
	if(confession)
        {
		printf("고백해도 모쏠이다 이놈들아...");
        }
        else
	{
		printf("그래 나 모쏠이다 나쁜놈들아...");
        }
        printf("문수철이 웅장한 마음으로 백호형한테 다가갑니다.");

	printf("그는 열정적으로 %d번 고백하고 차였다...", confession);

	return 0;
}
