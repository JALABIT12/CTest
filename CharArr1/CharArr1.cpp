#include<stdio.h> //stdio.h
#include<stdlib.h>//stdlib.h
#include<conio.h> //conio.h
#include<math.h>//math.h
#include<time.h> //time.h
#include<string.h> //string.h
/*문1) scanf 함수를 이용하여 문자열을 입력후
        해당 문자열을 한 글자씩 공백을 삽입하여 
        출력하시오.
*/
// function define
//			prototype	:	int	str_len(char *str) 
// 문자열 str을 받아서 해당 문자열의 길이를 되돌려 줌

int	str_len(char* str)  //str 끝에는 null이 있다는 것을 전제, 배열이 아닌 포인터로 문자열을 받음  []==*  // (char str[]) 로 표기를 바꿔도 수행이 된다.
{
	//return strlen(str); string.h 선언하고 사용, low level function
	int ret = 0;  //초기값 설정
	//while (*(str + ret++)); return ret; ->압축된 식
	while (1)
	{
		if (str[ret] != 0) ret++;   //문자열==문자배열, 0중요 null을 이용해서 문자열을 처리 
		else break;
	}
	return ret;

}

int solution2()
{
	/*문2) scanf 함수를 이용하여 문자열을 입력후
		getch() 함수를 이용하여 숫자 키를 누르면
	   해당 위치의 문자를 출력하시오
*/
	char buf[100]; // buffer: 버퍼, 배열의 이름=포인터 ,  선언
	int i, j, k;
	printf("문자열을 입력하세요: "); 
	scanf("%s", buf); //배열==포인터==주소 입력 ->&사용X,  입력
	j = str_len(buf);
	printf("입력 문자열 [%s]의 길이는 %d 입니다. \n", buf, j);
	for (i = 0; i < j; i++) //루프 안 함수는 처리 속도를 떨어트려 좋지 않다.
	{
		printf("%c_", buf[i]);
	}

	while (1)
	{
		k=getch()-0x30;  //0~9 숫자키 ( )입력->ASCII코드 표 필요
		if (k >= 0 && k <= 9)
		{
			printf("%c", buf[k]);
			continue;
		}
		break;
	}
	return 0;
}

int main()
{

	solution2();

}