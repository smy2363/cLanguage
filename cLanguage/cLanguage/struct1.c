#include <stdio.h>

//stryct1.c



typedef struct info {
	int age;
	float weight;
}info;

typedef struct User {
	char name[10];
	// info i; //����
	info * data; //(�����ͺ����� ���� ����ص���) �ܺ�����(�ٸ�����ü�� �����ؼ� ����ϴ� ���)
	struct User* next; //��������(������ �����ؼ� ����ϴ°�)
}User;

void input(info* p) {
	for (int i = 0; i < 3; i++) {
		printf("���� : ");
		scanf_s("%d", &p[i].age);
		printf("������ : ");
		scanf_s("%f", &p[i].weight);
	}
}

void print(info * p){
	for (int i = 0; i < 3; i++) {
		printf("%d. ���� : %d��, ������ : %.1fkg \n",
			i+1, p[i].age, p[i].weight);
	}
}
void main() {

	User u;
	info i;
	u.data = &i;
	u.data->age = 10; //.ó�� ���ٿ����� -> �ּҸ����� ������
	u.data->weight = 75.1;

	info i2;
	User daum = { "������", &i2 };
	daum.data->age = 24;
	daum.data->weight = 65.8;

	u.next = &daum;

	printf("%s %d \n",u.next->name, u.next->data->age); //������, 24 ���

	info member[3];
	input(member);
	print(member);

}

// ����(����)�� ������(�Ǽ�)�� �����Ҽ� �ִ� ����ü
// 3���� ������ �Է��ϰ� ����غ�����
// input - �Է��Լ�
// print - ����Լ�

