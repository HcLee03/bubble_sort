//bubble sort

#include <stdio.h>

//전역변수 배열
char* Arr[16] = {"Sindang", "Wangsimni", "Ttukseom", "Jamsillaru", "Jamsil", "Samseong", "Yeoksam", "Gangnam", "Seocho", "Nakseongdae", "Bangbae", "Bongcheon", "Dangsan", "Hapjeong", "Ahyeon", "Chungjeongno" };

void ascending(void); //오름차순 출력함수
void descending(void); //내림차순 출력함수
int main(void)
{
	printf("BUBBLE SORT \n \n");
	printf("------------------------------------------ \n");
	printf("[Input string] : ");
	//문자열 출력
	for (int i = 0; i < 16; i++)
	{
		printf("%s", Arr[i]);
		if (i < 15)
			printf(", ");
		else
			printf("\n");
	}
	printf("[Ascending order] : ");
	ascending(); //오름차순 출력
	printf("[Descending order ] : ");
	descending(); //내림차순 출력
	printf("------------------------------------------ \n \n");
	printf("Press \"Enter\" to quit the program...: ");
	//Enter 키 입력 시 프로그램 종료
	char c;
	c = getchar();
	while 
		(c != '\n')
		c = getchar();
	return 0;
}

void ascending(void) //오름차순 출력함수
{
	return;
}

void descending(void) //내림차순 출력함수
{
	return;
}