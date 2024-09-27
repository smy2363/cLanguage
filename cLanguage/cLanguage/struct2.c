#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// struct2.c

typedef struct music {
	char singer[20]; // ������
	int release;  // �߸ų⵵
	float playtime; // ����ð�

}music;

music* input();
void print(music**);

void main() {
	/*music* m1 = (music*)malloc( sizeof(music) );
	m1->release = 2019;
	m1->playtime = 4.41;
	strcpy_s(m1->singer, 20, "��Ŵ");*/


	music** data = NULL;

	for (int i = 1; i <= 5; i++) {
		if (data == NULL)
			data = (music**)malloc(sizeof(music*));
		else
			data = (music**)realloc(data, i * sizeof(music*));

		data[i - 1] = input();
	}

	print(data);

	//�Ҵ� �޸� ����
	for (int i = 0; i < 5; i++) {
		free(data[i]);
	}
	free(data);

}

music* input() {
	music* newData = (music*)malloc(sizeof(music));
	printf("���� : ");
	gets_s(newData->singer, 20);
	printf("�߸ų⵵ : ");
	scanf_s("%d", &newData->release);
	printf("��� �ð� : ");
	scanf_s("%f", &newData->playtime);
	getchar();
	return newData;
}

void print(music** p) {
	for (int i = 0; i < 5; i++) {
		printf("%s (%d��) - %.2f \n",
			p[i]->singer, p[i]->release, p[i]->playtime);
	}
}