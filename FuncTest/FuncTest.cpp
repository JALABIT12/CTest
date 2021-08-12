﻿#include<stdio.h> //stdio.h
#include<conio.h> //conio.h

// Function Test 프로그램
// 기능: 키보드에서 단일 문자를 입력받고
//				해당 문자가 대(0)/소문자(1)/특수(2)/숫자 키(3)임을 분류
// ---- 함수를 선언하고 호출할 것-함수명 sub
int sub(char a); //sub function의 prototype (함수의 원현)

int main()
{
	int i, j, k;
	char c;

	while (1)
	{
		printf("아무 키나 누르세요");
		c = getch(); // ASCII 0번키 Dec 48  Hx는 0x30으로 표시해야  숫자키 '0'(48,0x30)~'9'(57,0x39) 번 키에 해당하는가?
		if (c == 'z') break;
		i = sub(c); 

		switch (i)
		{
			case 1:
				printf("> 입력하신 key ['%c']는 소문자입니다. \n", c);
				break;

			case 2:
				printf("> 입력하신 key ['%c']는 특수키입니다. \n", c);
				break;

			case 3:
				printf("> 입력하신 key ['%c']는 숫자키입니다. \n", c);
				break;

			default: 
				printf("> 입력하신 key ['%c']는 대문자입니다. \n", c);
		}

		/*if (sub(c) == 3)
		{
			printf("> 입력하신 key ['%c']는 숫자키입니다. \n", c);
		}
		else if (sub(c) == 2)
		{
			printf("> 입력하신 key ['%c']는 특수키입니다. \n", c);
		}
		else if (sub(c) == 1)
		{
			printf("> 입력하신 key ['%c']는 소문자입니다. \n", c);
		}
		else //if (sub(c) == 0)
		{
			printf("> 입력하신 key ['%c']는 대문자입니다. \n", c);
		}*/
		}
	}

	int sub(char a)
		{
			int ret;

			if ((a >= 0x30) && (a <= 0x39))
			{
				ret = 3; //숫자 키
			}
			else if ((a >= 0x41) && (a <= 0x5A)) ret = 0; //대문자
			else if ((a >= 0x61) && (a <= 0x7A)) ret = 1; //소문자
			else ret = 2; //특수키(기타 나머지)

			return ret;

		}
