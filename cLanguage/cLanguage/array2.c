#include <stdio.h>

// array2.c

void main() {
	//int a[3]; // 10���� ������ 3ũ�� �迭
	//char word[6] = {'t','a',NULL,'l','e'}; //���� 5�� ���尡���� �迭
	//
	//for (int i = 0; i < 5; i++) {
	//	printf("%c", word[i]);
	//}

	//word[5] = NULL;
	//printf("   \n  %s   \n", word+2); //���ڿ��� �Ҷ� ����ũ�⺸�� 1���� �� �߰��� ��������(null�� �־������)
	//
	//char like[10] = { "banana" };
	//printf(" %s \n", like);
	//
	//// ���ڿ� �Է��ϱ� ���� ���
	//// ���� �Է� �Լ�
	//char ch2=getch();
	//printf("getch �Է� : %c", ch2);


	//char ch3 = getchar();
	//printf("\n getchar �Է� : %c\n", ch3);
	//putchar(ch3); //���� ��� �Լ�
	//
	//getch(); //���ڿ� �Է� ���� ���ڳ� ���� �Է½� 
	////���ۿ� �����ִ� ���͸� �����ϱ� ����
	//// 
	////���ڿ� �Լ�
	//char str[50];
	//puts("���ڿ� �Է� : ");
	//gets_s(str, sizeof(str));

	//puts(str);

	//char info[100] = {"���� ���α׷����� �� ����ִ�."};
	//
	//// �� ����ִ�. �� ����ϰ� 
	//// ���� ���α׷����̶�� ��µǱ� ���� �����Ͽ� ���
	//// ������� - �ѱ� 1�ڴ� ���ĺ� 2�ڿ� �ش�ȴ�.

	//printf("%s \n", info + 18);
	//info[15] = NULL;
	//printf("%s \n", info);

	// ���� �̸��� ����, ��ȭ��ȣ�� �Է��ϰ� ����ϱ�

	char name[10];
	char age[10];
	char number[20];
	puts("�̸� : ");
	gets_s(name, sizeof(name));
	puts("���� : ");
	gets_s(age, sizeof(age));
	puts("��ȭ��ȣ : ");
	gets_s(number, sizeof(number));

	printf("�̸���? %s \n���̴�? %s \n��ȭ��ȣ��? %s", name, age, number);



}