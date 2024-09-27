#pragma once
#ifndef STRUCT_FILE
#define STRUCT_FILE

// #ifdef : ���� ���ǰ� �Ǿ� �ִٸ� 
// #define ���� �̸��� �����ϰ� ���ǵ� �̸��� �����Ǿ��ٸ�
// #ifdef ���� #else������ �����ϰ� 
// #define���� �̸��� ���ǵ��� �ʾ����� #else���� #endif���� ����

// #ifndef : ���� �������� �Ǿ� ���� �ʴٸ�
// #define���� �̸��� �����ϰ� ���ǵ� �̸��� ������ ���� �ʾ�����
// #ifndef ���� #else���� ����
// ���ǵǾ����� #else ���� #endif���� ����
// ��� ������ �ѹ��� �����Ͽ� �����Ϸ���
// #ifdef�� �����ϴ�.

#include <stdio.h>
#include <string.h>

typedef struct LED {
	int pinNum;
	int onoff;
	char color[10];
}led;

void init(led*); //func.c �������� �Լ�

void print(led*); //func.c �������� �Լ�

void power(led* rgb);
//struct_file.h

#endif