//bubble sort

#include <stdio.h>

//�������� �迭
char Arr[16][13]= {"Sindang", "Wangsimni", "Ttukseom", "Jamsillaru", "Jamsil", "Samseong", "Yeoksam", "Gangnam", "Seocho", "Nakseongdae", "Bangbae", "Bongcheon", "Dangsan", "Hapjeong", "Ahyeon", "Chungjeongno"};

void printchar(void);//���ڿ� ���
void ascending(void); //�������� ����Լ�
void descending(void); //�������� ����Լ�
void swap(int);
int main(void)
{
	printf("BUBBLE SORT \n \n");
	printf("------------------------------------------ \n");
	printf("[Input string] : ");
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


void printchar(void)// ���ڿ� ����Լ�
{
	for (int i = 0; i < 16; i++)
	{
		printf("%s", Arr[i]);
		if (i < 15)
			printf(", ");
		else
			printf("\n");
	}
}
void ascending(void) //�������� �����Լ�
{
	int n = 16;
	while (n > 0)//n-1�� �ݺ�
	{
		for (int a = 0; a < (n - 1); a++)//���������� 2���� ��
		{
			for (int b = 0; b < 13; b++)//�ܾ��� ���ڼ����� ���� ��
			{
				if (Arr[a][b] > Arr[a + 1][b]) //���� �� ũ�� swap �� ���� ��
				{
					swap(a);
					break;
				}
				else if (Arr[a][b] == Arr[a + 1][b])//������ ���� ���� ��
					continue;
				else //���� �� ������ ���� ��
					break;

			}
		}
		n--;
	}
	return;
}

void descending(void) //�������� �����Լ�
{
	int n = 16;
	while (n > 0)//n-1�� �ݺ�
	{
		for (int a = 0; a < (n - 1); a++)//���������� 2���� ��
		{
			for (int b = 0; b < 13; b++)//�ܾ��� ���ڼ����� ���� ��
			{
				if (Arr[a][b] < Arr[a + 1][b]) //���� �� ������ swap �� ���� ��
				{
					swap(a);
					break;
				}
				else if (Arr[a][b] == Arr[a + 1][b])//������ ���� ���� ��
					continue;
				else //���� �� ũ�� ���� ��
					break;

			}
		}
		n--;
	}
	return;
}

void swap(int a) //�ܾ� ���� ����
{
	char temp;
	for (int i = 0; i < 13; i++)
	{
		temp = Arr[a][i];
		Arr[a][i] = Arr[a + 1][i];
		Arr[a + 1][i] = temp;
	}
	return;
}