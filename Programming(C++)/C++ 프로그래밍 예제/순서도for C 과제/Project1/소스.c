#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()

{

	//��������

	int i;
	int data[10];
	double average = 0.0;
	int sum = 0;

	//�����迭�ֱ� for

	srand((int)time(NULL));

	for (i = 0; i < 10; i++) { //10ȸ

		data[i] = rand() % 100;

	}
	//�հ�

	for (i = 0; i < 10; i++) {

		sum += data[i];
	}

	printf("���� %d\n", sum);

	//���

	average = sum / 10.0;

	printf("����� %.1f\n", average);



	//���for

	for (i = 0; i < 10; i++) {

		printf("%d ", data[i]);

	}

	printf("\n");



	return 0;

}