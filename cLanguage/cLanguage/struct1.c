#include <stdio.h>

//stryct1.c



typedef struct info {
	int age;
	float weight;
}info;

typedef struct User {
	char name[10];
	// info i; //포함
	info * data; //(포인터변수를 만들어서 사용해도됨) 외부참조(다른구조체를 참조해서 사용하는 방법)
	struct User* next; //내부참조(본인을 참조해서 사용하는것)
}User;

void input(info* p) {
	for (int i = 0; i < 3; i++) {
		printf("나이 : ");
		scanf_s("%d", &p[i].age);
		printf("몸무게 : ");
		scanf_s("%f", &p[i].weight);
	}
}

void print(info * p){
	for (int i = 0; i < 3; i++) {
		printf("%d. 나이 : %d세, 몸무게 : %.1fkg \n",
			i+1, p[i].age, p[i].weight);
	}
}
void main() {

	User u;
	info i;
	u.data = &i;
	u.data->age = 10; //.처럼 접근연산자 -> 주소를통한 연산자
	u.data->weight = 75.1;

	info i2;
	User daum = { "김유신", &i2 };
	daum.data->age = 24;
	daum.data->weight = 65.8;

	u.next = &daum;

	printf("%s %d \n",u.next->name, u.next->data->age); //김유신, 24 출력

	info member[3];
	input(member);
	print(member);

}

// 나이(정수)와 몸무게(실수)를 저장할수 있는 구조체
// 3명의 정보를 입력하고 출력해보세요
// input - 입력함수
// print - 출력함수

