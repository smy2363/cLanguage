#include <stdio.h>
#include <string.h>

#include "struct_file.h"


void print(led *rgb) {
	printf("�ɹ�ȣ : %d \n", rgb->pinNum);
	printf("�÷�: %s \n", rgb->color);
}

void init(led* rgb) {
	rgb->pinNum = 10;
	rgb->onoff = 0;
	strcpy_s(rgb->color, sizeof(rgb->color), "����");

}

// func_file.h

