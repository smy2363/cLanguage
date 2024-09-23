#include <stdio.h>

// array2.c

void main() {
	//int a[3]; // 10진수 정수의 3크기 배열
	//char word[6] = {'t','a',NULL,'l','e'}; //문자 5개 저장가능한 배열
	//
	//for (int i = 0; i < 5; i++) {
	//	printf("%c", word[i]);
	//}

	//word[5] = NULL;
	//printf("   \n  %s   \n", word+2); //문자열로 할때 원래크기보다 1개를 더 추가로 만들어야함(null값 넣어줘야함)
	//
	//char like[10] = { "banana" };
	//printf(" %s \n", like);
	//
	//// 문자열 입력하기 위한 방법
	//// 문자 입력 함수
	//char ch2=getch();
	//printf("getch 입력 : %c", ch2);


	//char ch3 = getchar();
	//printf("\n getchar 입력 : %c\n", ch3);
	//putchar(ch3); //문자 출력 함수
	//
	//getch(); //문자열 입력 전에 숫자나 문자 입력시 
	////버퍼에 남아있는 엔터를 제거하기 위해
	//// 
	////문자열 함수
	//char str[50];
	//puts("문자열 입력 : ");
	//gets_s(str, sizeof(str));

	//puts(str);

	//char info[100] = {"나는 프로그래밍이 참 재미있다."};
	//
	//// 참 재미있다. 만 출력하고 
	//// 나는 프로그래밍이라고만 출력되기 위해 수정하여 출력
	//// 참고사항 - 한글 1자는 알파벳 2자에 해당된다.

	//printf("%s \n", info + 18);
	//info[15] = NULL;
	//printf("%s \n", info);

	// 나의 이름과 나이, 전화번호를 입력하고 출력하기

	char name[10];
	char age[10];
	char number[20];
	puts("이름 : ");
	gets_s(name, sizeof(name));
	puts("나이 : ");
	gets_s(age, sizeof(age));
	puts("전화번호 : ");
	gets_s(number, sizeof(number));

	printf("이름은? %s \n나이는? %s \n전화번호는? %s", name, age, number);



}