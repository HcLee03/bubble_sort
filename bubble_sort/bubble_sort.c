//bubble sort

#include <stdio.h>

//�������� �迭
char* Arr[16] = {"Sindang", "Wangsimni", "Ttukseom", "Jamsillaru", "Jamsil", "Samseong", "Yeoksam", "Gangnam", "Seocho", "Nakseongdae", "Bangbae", "Bongcheon", "Dangsan", "Hapjeong", "Ahyeon", "Chungjeongno" };

void ascending(void); //�������� ����Լ�
void descending(void); //�������� ����Լ�
int main(void)
{
	printf("BUBBLE SORT \n \n");
	printf("------------------------------------------ \n");
	printf("[Input string] : ");
	//���ڿ� ���
	for (int i = 0; i < 16; i++)
	{
		printf("%s", Arr[i]);
		if (i < 15)
			printf(", ");
		else
			printf("\n");
	}
	printf("[Ascending order] : ");
	ascending(); //�������� ���
	printf("[Descending order ] : ");
	descending(); //�������� ���
	printf("------------------------------------------ \n \n");
	printf("Press \"Enter\" to quit the program...: ");
	//Enter Ű �Է� �� ���α׷� ����
	char c;
	c = getchar();
	while 
		(c != '\n')
		c = getchar();
	return 0;
}

void ascending(void) //�������� ����Լ�
{
	return;
}

void descending(void) //�������� ����Լ�
{
	return;
}