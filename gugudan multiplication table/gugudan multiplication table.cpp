#include<stdio.h> //stdio.h
#include <conio.h> //conio.h

int main()
{
	int i, j, k;
	int dan = 1; // 구구단의 2단~9단
	int nDan = 9; //:9
	int hDan = 3; //horizontal dan 상수를 줄이면 코드가 깔끔해진다.

	for (; dan < 10; dan += hDan) //++은 1씩 증가 idx +=3  hDan:가로 방향 열 수
	{
		for (int idx = 1; idx <= nDan; idx++) //for (int idx = 1; idx < nDan; idx+=1) 로도 표현 가능
		{
			for (i = 0; i < hDan; i++) // hDan: 가로 방향 열 수
			{
				printf("%2d x %2d = %3d      ", dan+i, idx, (dan+i) * idx);    // 2x2=4 dan x idx =(dan * idx)
			}
			printf("\n");
		}
		printf("\n\n\n");
	}
	
	while (1)
	{
		scanf("%d", &k);
		
		switch (k)
		{
		case 1: printf(">1: One\n"); break;
		case 2: printf(">2: Two\n"); break;
		case 3: printf(">3: Three\n"); break;
		case 4: printf(">4: Four\n"); break;
		case 5: printf(">5: Five\n"); break;
		case 6: printf(">6: Six\n"); break;
		case 7: printf(">7: Seven\n"); break;
		case 8: printf(">8: Eight\n"); break;
		case 9: printf(">9: Nine\n"); break;
		default: break;
		}
		if (k == 0) break;
	}
	printf("프로그램을 종료하려면 아무 키나 누르세요..."); getch();
}