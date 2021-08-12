#include<stdio.h> //stdio.h
#include<stdlib.h>//stdlib.h
#include<conio.h> //conio.h
#include<math.h>//math.h
#include<time.h> //time.h
const int students = 20; //배열 안에 상수가 필요한데 앞에 const를 붙이면 해결 된다.
// const로 선언한 것은 상수로 표현했지 실질적으로 students는 변수이다.
int score()
{
	int i, j, k;
	double average, total;
	double kor[students], eng[students], math[students];

	srand(time(NULL));
	for (i = 0; i < students; i++)
	{
		kor[i] =(double) ((rand() % 1000) + 1) / 10; // 난수 발생기: 임의의 숫자를 int(정수)로 발생 0~100.0  0~999  0.1~100.0
		eng[i] = (double)((rand() % 1000) + 1) / 10; // 난수 발생기: 임의의 숫자를 int(정수)로 발생 0~100.0  0~999  0.1~100.0
		math[i] = (double)((rand() % 1000) + 1) / 10; // 난수 발생기: 임의의 숫자를 int(정수)로 발생 0~100.0  0~999  0.1~100.0
	}
	printf("코스타 IoT 국어 점수 현황\n=======================\n\n개인점수 리스트:\n");
	total = 0.; //.은 실수를 의미
	for (i = 0; i < students; i++)
	{
		printf("%7.1f\n", kor[i]); //%7.1f: 실수 출력의 전체 자리수를 7자리, 소수점 이하1자리
		total += kor[i]; //가장 기본적인 누적 계산 방법
	}
	average = total / students;

	printf("총점 : %7.1f\n", total);
	printf("평균 : %7.1f\n", average);

	return 0;
}

int Good()
{
	int i, j, k;
		char good[5] = "Good";
		char morn[] = "morning";
		char noon[] = "afternoon";
		char even[] = "evening";
		char str5[] = "night";
		
		while (1)
		{
			printf("지금 몇 시죠?"); scanf("%d", &k);
			if (k>7 && k < 12)
			{
				printf("%s %s \n", good, morn);
			}
			else if (11< k && k < 18)
			{
				printf("%s %s \n", good, noon);
			}
			else if  (17< k && k< 23)
			{
				printf("%s %s \n", good, even);
			}
			else 
			{
				printf("HI! \n");
			}
		}
		return 0;
}
int PointerTest()
{
	int a[3][2] = { 1, 2, 3, 4, 5, 6 };

	printf("a   : %x \n", a);
	printf("a+1 : %x \n", a + 1);
	printf("a+2 : %x \n", a + 2);

	printf("a[0] : %x \n", a[0]);  // a[0][0], a[0][1] 첫 번째 줄을 의미한다.
	printf("a[1] : %x \n", a[1]);
	printf("a[2] : %x \n", a[2]);   //%d는 10진 정수, %x는 16진수
	printf("a    : %x \n", a);

	return 0;

}
// function define
//			prototype	:	void	swap( int a, int b)
// 정수 변수 a와 b의 값을 교환.
void swap(int *a, int *b) //a,b를 포인터로 선언하고 전달된 매개변수 값으로 설정 (초기화)
{                                              // 포인터 사용방법: 포인터가 가리키는 주소의 값: *p
												// 주소 자체: p
	int c = *a; // int c=a[0]; 
	//printf("	Input > a(%08x) : %d, b(%08x) : %d\n", a, *a, b, *b); 
	*a = *b; //a[0]=b[0];
	*b = c;  //b[0]=c;
	//printf("	Result > a(%08x) : %d, b(%08x) : %d\n",a, *a, b, *b); 
}

int SwapTest()
{
	int a = 50, b = 60;
	//printf("Original> a(%08x) : %d, b(%08x) : %d\n", &a, a, &b, b); //%x 부호없는 16진 정수 표현 %8x:8자리,  %08x: 빈자리를 0으로 채움
																													// ____0001-> 00000001 8자리의 16진수 표현을 위해 %08x 사용
	swap(&a, &b);  //받을 때도 주소로 받아야 한다. int *a, int*b

	//printf("After swap> a(%08x) : %d, b(%08x) : %d\n",&a, a, &b, b);

	return 0;
}
void sort(int *a, int n) // 다른 이름으로 받아도 된다. 단, data 타입은 같아야 한다.
{
	int i, j, k; // 제일 앞에 있는 것을 기준으로 비교
	for (i = 0; i < n; i++) //n은 전체 구간
	{
		for (j = i; j < n; j++) //j=i : j의 시작 구간은 i이다.
		{
			if (a[i] < a[j])  //a[i] 기준이 되는 array
				swap(a+i, a+j); //a array의 i 번째 요소의 주소, j번째 요소의 주소
			// swap(&a[i], &a[j]); =swap(a+i,a+j);
		}
	}
}
//전역변수 : 이하의 함수에서 사용 가능
const int nArr = 7; //배열의 개수도 상수화
int kor[] = { 82 , 93  ,71 , 69,  78,  84  ,75 }; //초기화 과정
int eng[] = { 76,  91,  67,  73,  86,  63,  83 };
char nam[] = "ABCDEFGH";
const char* name[] = { "홍길동" ,"홍길이" ,"홍길삼", "홍길사", "홍길오" ,"길육" ,"길칠" }; //String Array
//문자열 포인터로 변경: "홍길동" "홍길이" "홍길삼" "홍길사" "홍길오" "길육" "길칠"
// char*nam[] 포인터 배열 변경->배열이니까 const 붙이고 아래 함수들도 변경

void swapEx(double* a, double* b) //int 대신 double->tot //double->float으로 변경
{
	double c = *a;
	*a = *b;
	*b = c;
}
void swapEx1(char* a, char* b) //int 대신char->nam
{
	char c = *a;
	*a = *b;
	*b = c;
}
void swapEx2(const char** a, const char** b) //string의 배열 타입이라 *이 2개 붙는다. string*: 4byte
{
	const char *c = *a; //보관하는 c값   ''abc'' **a='a' 포인터들이 저장되있는 장소를 바꾼다.
	*a = *b;
	 *b = c;
}
void SWAP(void* a, void* b, int op) //void pointer와 option
{
	if (op == 1) //char 1byte
	{
		char c = *(char*)a; //casting 변환을 통해, 입력 값에 맞게 적용
		*(char*)a = *(char*)b;
		*(char*)b = c;
	}
	if (op == 4) //int 4byte
	{
		int c = *(int*)a; //casting 변환을 통해, 입력 값에 맞게 적용
		*(int*)a = *(int*)b;
		*(int*)b = c;
	}
	if (op == 8) //double 8byte
	{
		double c = *(double*)a; //casting 변환을 통해, 입력 값에 맞게 적용
		*(double*)a = *(double*)b;
		*(double*)b = c;
	}
	//float, string(char*) 4byte
}
void sortEx(double* a, int n) // int 대신 float->변수 타입이 달라졌다.
{
	int i, j, k; 

	for (i = 0; i < n; i++) 
	{
		for (j = i; j < n; j++)
		{
			if (a[i] < a[j]) 
			{
				//swapEx (a + i, a + j); // swap(&a[i], &a[j]); =swap(a+i,a+j); //tot: double double
				//swap(kor + i, kor + j); //int
				//swap(eng + i, eng + j); //int
				//swapEx2(name+i , name+j); //안정적이지 않지만, 컴파일러를 속인다.   char*=string //string
				SWAP(a + i, a + j, 8); //8byte
				SWAP(kor + i, kor + j, 4); //4byte
				SWAP(eng + i, eng + j, 4); //4byte
				SWAP(name + i, name + j, 4); //4byte
			}
			
		}
	}
}

void sortTest()
{
	const int nArr = 7; //double tot를 위한 상수화, nArr은 변수다.
	double f_kor = 0.3, f_eng = 0.7; //가중치
	//int kor[] = { 82 , 93  ,71 , 69,  78,  84  ,75 };
	//int eng[] = { 76,  91,  67,  73,  86,  63,  83 };
	double tot[nArr]; //const를 이용하여 배열 상수를 만든다.
	//char nam[] = "ABCDEFG"; //name
	//기본 선언이 끝났고 다음 과정은 초기화할 차례, total에 대한 계산 과정 필요.
	int i, j, k;

	for (i = 0; i < nArr; i++)
	{
		tot[i]= kor[i] * f_kor + eng[i] * f_eng; // tot 계산 주목하기, 배열의 덧셈, 곱셈
	}
	printf("Original :\n ");
	printf("이름 : "); for (int i = 0; i < nArr; i++) printf("%7s	", name[i]); printf("\n\n"); 
	printf("국어 : "); for (int i = 0; i < nArr; i++) printf("%7d	", kor[i]); printf("\n\n");
	printf("영어 : "); for (int i = 0; i < nArr; i++) printf("%7d	", eng[i]); printf("\n\n"); 
	printf("합계 : "); for (int i = 0; i < nArr; i++) printf("%7.2f	", tot[i]); printf("\n\n");  //tot는 double
	
	sortEx(tot, nArr);
	
	printf("Sorted :\n ");
	printf("이름 : "); for (int i = 0; i < nArr; i++) printf("%7s	", name[i]); printf("\n\n"); 
	printf("국어 : "); for (int i = 0; i < nArr; i++) printf("%7d	", kor[i]); printf("\n\n");
	printf("영어 : "); for (int i = 0; i < nArr; i++) printf("%7d	", eng[i]); printf("\n\n");
	printf("합계 : "); for (int i = 0; i < nArr; i++) printf("%7.2f	", tot[i]); printf("\n\n");  //tot는 double
	//sort(arr, nArr); //nArr은 배열의 개수

	//printf("Sorted : "); for (int i = 0; i < nArr; i++) printf("%d	", arr[i]); printf("\n\n");
}
/*문) 두 과목의 성적이 다음과 같을 때 배열을 이용하여 초기화하고, 
      각각의 성적에 가중치를 곱한 후 개인별 합계를 구하여
      합이 큰 순서대로 정렬하여 출력하시오.

  자료(예)
     이름   A    B   C   D   E    F   G         	
	 국어  82  93  71  69  78  84  75    --- 가중치 0.3
     영어  76  91  67  73  86  63  83    --- 가중치 0.7
	 */
void VoidPrint(void* p, int i)
{
	if (i == 1)
	{
		char* cp = (char*)p;
		printf("%c\n", *cp);
	}
	if (i == 2)
	{
		int* ip = (int*)p;
		printf("%d\n", *ip);
	}
	if (i == 3) printf("%f", *(double*)p);
	
}
void VoidTest()
{
	char c = 'z';
	int n = 10;
	double a = 1.414;

	void* vp;
	VoidPrint( &c, 1);
	VoidPrint( &n, 2);
	VoidPrint( &a, 3);

}
int main()
{
	//score();  score 수행하지 않도록 처리-> 프로젝트 여러개 구성할 필요 없이.
	//Good();
	//PointerTest();
	//SwapTest();
	sortTest();
	//VoidTest();
}