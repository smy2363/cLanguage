#include "autoDriving.h"

void init(carStatus* car) {
	
	car->x_pos = 0;
	car->y_pos = 0;
	car->speed = 0;
	car->direction = 'N';

}

void print_status(carStatus* car) {
	printf("��ġ : (%d, %d) \n", car->x_pos, car->y_pos);
	printf("�ӵ� : %d \n", car->speed);
	printf("���� : %c \n", car->direction);
}

// initial.c