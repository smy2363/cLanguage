#include <stdio.h>
#include <string.h>

// struct.c
// class A{
//		int age;
//		String name;
//		float eyes;
//}
// A[] �л� = new A[5];
// �л�[0] = new A();
// 
// A �̻�� = new A();
// �̻��.age = 10;
// �̻��.eyes = 1.1;


struct member {
	int age;
	float eyes;
	char name[10];
};

typedef struct grade {
	int kor;
	int mat;
	int eng;
	int total;
	float avg;
}grade;

void tot_avg(grade* p) {
	for (int i = 0; i < 5; i++){
		p[i].total = p[i].kor + p[i].mat + p[i].eng;
		p[i].avg = p[i].total / 3.0;
	}

}


void main() {

	grade std1 = { 88,99,75 };  //�������� ������� �����Ͱ� ��
	std1.kor = 88; std1.mat = 99; std1.eng = 75;
	std1.total = std1.kor + std1.mat + std1.eng;
	std1.avg = std1.total / 3.0;
	
	grade std[5] = { {88,90,34},{66,45,61},{90,11,45},{87,34,91},{84,72,89} };
	// std[0].kor = 84; (���1)
	// scanf_s("%d", &std[0].kor);  ���������� �� �־���� 
	tot_avg(std);

	for (int i = 0; i < 5; i++) {
		printf("%d %d %d %d %.2f \n", std[i].kor, std[i].mat, std[i].eng, std[i].total, std[i].avg);
	}

	




	struct member m;
	m.age = 24;
	m.eyes = 1.1;
	printf("%d    %f \n", m.age, m.eyes);

	strcpy_s(m.name, 10, "ȫ�浿");
	printf("%s \n", m.name);


}

// ����ü : c����� �⺻ ������ Ÿ������ ���Ӱ� �����ϴ�
//			����� ���� ������ Ÿ��
//			�� �κа� ��ҵ��� �� �̷���� ��ü�� ����
