#include <stdio.h>
#include<conio.h>
int main()
{
	char name[20]; 
	int height;
	int age=10;
	float factor = 100.0;

	//int index = 0; //while 문의 수행 횟수를 정의
	
	//while (index<2)
	for (int index = 0; index < 2; index++) //for(index 수행조건 증감)
	{
		printf("당신의 이름을 입력하세요.");
		scanf("%s", name);

		printf("당신의 키를 cm단위로 입력하시고\n나이도 입력해 주세요.");
		scanf("%d %d", &height, &age);

		printf("안녕하세요.  \n%s씨\n", name);
		printf("반갑습니다.\n");
		printf("저는 %d 살이에요.\n", age);  //%d 10진 정수
		printf("제 키는 %5d cm입니다.\n", height );
		printf("제 키는 %5.2f m입니다.", (float)(height) / factor);   // %f 1.7m
		//index++;
	}
	

	getch();
	return 0;
}