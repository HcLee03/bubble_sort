//bubble sort

#include <stdio.h>

//전역변수 배열
char Arr[16][13]= {"Sindang", "Wangsimni", "Ttukseom", "Jamsillaru", "Jamsil", "Samseong", "Yeoksam", "Gangnam", "Seocho", "Nakseongdae", "Bangbae", "Bongcheon", "Dangsan", "Hapjeong", "Ahyeon", "Chungjeongno"};
char StringArr[16][13];
void printchar(void);//문자열 출력
void intchar(void);//StringArr에 전역변수 배열 가져옴
void ascending(void); //오름차순 정렬함수
void descending(void); //내림차순 정렬함수
void swap(int); //문자열 순서 변경
int main(void)
{
	printf("BUBBLE SORT \n \n");
	printf("------------------------------------------ \n");
	printf("[Input string] : ");
	intchar();//StringArr에 전역변수 배열 가져옴
	printchar(); //문자열 출력
	printf("[Ascending order] : ");
	ascending(); //오름차순 정렬
	printchar(); //문자열 출력
	printf("[Descending order ] : ");
	descending(); //내림차순 정렬
	printchar(); //문자열 출력
	printf("------------------------------------------ \n \n");
	printf("Press \"Enter\" to quit the program...: ");
	//Enter 키 입력 시 프로그램 종료
	char c;
	c = getchar();
	while (c != '\n')
		c = getchar();
	return 0;
}
void intchar(void)//StringArr에 전역변수 배열 가져옴
{
	for (int num = 0; num < 16; num++)
	{
		for (int step = 0; step < 13; step++)
			StringArr[num][step] = Arr[num][step];
	}
	return;
}
void printchar(void)//문자열 출력함수
{
	for (int i = 0; i < 16; i++)
	{
		printf("%s", StringArr[i]);
		if (i < 15)
			printf(", ");
		else
			printf("\n");
	}
}
void ascending(void) //오름차순 정렬함수
{
	intchar();//정렬할 배열 가져옴
	int n = 16;
	while (n > 0)
	{
		//1번째와 2번째, 2번째와 3번째,3번째와 4번째, ... (n-1)번째와 n번째 비교
		//비교가 끝나면 마지막 문자열을 제외하고 다시 비교
		//n-1번 반복
		for (int num = 0; num < (n - 1); num++)
		{
			//비교하는 문자열 중 앞이 더 크면 swap
			//비교하는 문자열 중 뒤가 더 크면 계속
			for (int step = 0; step < 13; step++)
			{
				if (StringArr[num][step] > StringArr[num + 1][step])
				{
					swap(num);
					break;
				}
				else if (StringArr[num][step] == StringArr[num + 1][step])
					continue;
				else
					break;

			}
		}
		n--;
	}
	return;
}

void descending(void) //내림차순 정렬함수
{
	intchar();//정렬할 배열 가져옴
	int n = 16;
	while (n > 0)
	{
		//1번째와 2번째, 2번째와 3번째,3번째와 4번째, ... (n-1)번째와 n번째 비교
		//비교가 끝나면 마지막 문자열을 제외하고 다시 비교
		//n-1번 반복
		for (int num = 0; num < (n - 1); num++)
		{
			//비교하는 문자열 중 뒤가 더 크면 swap
			//비교하는 문자열 중 앞이 더 크면 계속
			for (int step = 0; step < 13; step++)
			{
				if (StringArr[num][step] < StringArr[num + 1][step])
				{
					swap(num);
					break;
				}
				else if (StringArr[num][step] == StringArr[num + 1][step])
					continue;
				else
					break;

			}
		}
		n--;
	}
	return;
}

void swap(int num) //문자열 순서 변경
{
	char temp;
	for (int step = 0; step < 13; step++)
	{
		temp = StringArr[num][step];
		StringArr[num][step] = StringArr[num + 1][step];
		StringArr[num + 1][step] = temp;
	}
	return;
}