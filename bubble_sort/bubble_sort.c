//bubble sort

#include <stdio.h>

//�������� �迭
char Arr[16][13]= {"Sindang", "Wangsimni", "Ttukseom", "Jamsillaru", "Jamsil", "Samseong", "Yeoksam", "Gangnam", "Seocho", "Nakseongdae", "Bangbae", "Bongcheon", "Dangsan", "Hapjeong", "Ahyeon", "Chungjeongno"};
char StringArr[16][13];
void printchar(void);//���ڿ� ���
void intchar(void);//StringArr�� �������� �迭 ������
void ascending(void); //�������� �����Լ�
void descending(void); //�������� �����Լ�
void swap(int); //���ڿ� ���� ����
int main(void)
{
	printf("BUBBLE SORT \n \n");
	printf("------------------------------------------ \n");
	printf("[Input string] : ");
	intchar();//StringArr�� �������� �迭 ������
	printchar(); //���ڿ� ���
	printf("[Ascending order] : ");
	ascending(); //�������� ����
	printchar(); //���ڿ� ���
	printf("[Descending order ] : ");
	descending(); //�������� ����
	printchar(); //���ڿ� ���
	printf("------------------------------------------ \n \n");
	printf("Press \"Enter\" to quit the program...: ");
	//Enter Ű �Է� �� ���α׷� ����
	char c;
	c = getchar();
	while (c != '\n')
		c = getchar();
	return 0;
}
void intchar(void)//StringArr�� �������� �迭 ������
{
	for (int num = 0; num < 16; num++)
	{
		for (int step = 0; step < 13; step++)
			StringArr[num][step] = Arr[num][step];
	}
	return;
}
void printchar(void)//���ڿ� ����Լ�
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
void ascending(void) //�������� �����Լ�
{
	intchar();//������ �迭 ������
	int n = 16;
	while (n > 0)
	{
		//1��°�� 2��°, 2��°�� 3��°,3��°�� 4��°, ... (n-1)��°�� n��° ��
		//�񱳰� ������ ������ ���ڿ��� �����ϰ� �ٽ� ��
		//n-1�� �ݺ�
		for (int num = 0; num < (n - 1); num++)
		{
			//���ϴ� ���ڿ� �� ���� �� ũ�� swap
			//���ϴ� ���ڿ� �� �ڰ� �� ũ�� ���
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

void descending(void) //�������� �����Լ�
{
	intchar();//������ �迭 ������
	int n = 16;
	while (n > 0)
	{
		//1��°�� 2��°, 2��°�� 3��°,3��°�� 4��°, ... (n-1)��°�� n��° ��
		//�񱳰� ������ ������ ���ڿ��� �����ϰ� �ٽ� ��
		//n-1�� �ݺ�
		for (int num = 0; num < (n - 1); num++)
		{
			//���ϴ� ���ڿ� �� �ڰ� �� ũ�� swap
			//���ϴ� ���ڿ� �� ���� �� ũ�� ���
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

void swap(int num) //���ڿ� ���� ����
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