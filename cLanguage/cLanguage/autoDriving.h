#pragma once
#ifndef AUTODRIVING
#define AUTODRIVING

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x_pos; // x�� ��ǥ
	int y_pos; // y�� ��ǥ
	int speed; // �ӵ�
	char direction; //���� - N, S, W, E
}carStatus;

void init(carStatus*); // �� �ʱ�ȭ

void print_status(carStatus*); //���� ���


//autoDriving.h
#endif
