#include <stdio.h>
#include <stdlib.h> 

// alloc.c (�� - �޸𸮰��� �Ҵ�)

void main() {

	// int *parr[17];

	int* std1 = (int*)malloc(12);
	std1[0] = 90; std1[1] = 88; std1[2] = 76;
	
	int* std2 = (int*)malloc(12);
	std2[0] = 79; std2[1] = 57; std2[2] = 90;

	int** parr=(int**)malloc(12 * sizeof(int*));
	parr[0] = std1;
	parr[1] = std2;
	parr[2] = (int*)malloc(12);
	parr[3] = (int*)malloc(12);

	printf("%d \n", parr[0][1]); //ù��° �л��� 88�� ���

	// �������� �̸��� �����ϱ� ���� �����Ҵ�
	// char name[10];
	// char* name = (char*)mallco(10);
	
	char** name = (char**)malloc(sizeof(char*));
	int cnt = 1;
	while (1) {
		name[cnt - 1] = (char*)malloc(10);
		printf("�̸� : ");
		gets_s(name[cnt - 1], 10);
		cnt++;
		name = (char**)realloc(name, cnt * sizeof(char*));

	}





	//int num = 10;
	//short s = 20;
	//double d = 3.14;

	//int arr[20];

	//int size;
	//printf("������ � : ");
	//scanf_s("%d", &size);

	//int*p = (int*)malloc(size*sizeof(int));  //��ü�� �־��ִ°�
	//p[0] = 10;
	//p[1] = 20;
	//p[2] = 30;
	//p[3] = 40;
	//p[4] = 50;

	//printf("malloc -> %d %d \n", p[2], p[4]);

	//int*pc = (int*)calloc(4, sizeof(int)); //�����Ʈ¥�� ��� �ʿ�����
	//pc[0] = 100;
	//pc[1] = 200;
	//pc[2] = 22;
	//pc[3] = 500;

	//printf("%d %d %d \n", pc[0], pc[1], pc[2]);

	//printf("���Ҵ� �� : %p \n", p);

	//p = (int*)realloc(p, 16);
	//printf("p -> %d %d \n", p[2], p[4]);

	//printf("���Ҵ� �� : %p \n", p);

	//pc = (int*)realloc(pc, 40);
	//pc[4] = 600;
	//pc[5] = 1000;
	//printf("%d %d \n", pc[4], pc[5]);

	//free(pc);
	//printf("free���� -> %d %d \n", pc[4], pc[5]);

}

// malloc(�⺻�Ҵ�/�޸��Ҵ�), calloc(Ŀ�����Ҵ�), realloc(���Ҵ�) (�� 3���� �Ҵ�)
// free(�Ҵ�� ������ �����ϴ°�/�ݳ�)