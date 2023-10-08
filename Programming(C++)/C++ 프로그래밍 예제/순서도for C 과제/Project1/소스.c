#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()

{

	//변수선언

	int i;
	int data[10];
	double average = 0.0;
	int sum = 0;

	//난수배열넣기 for

	srand((int)time(NULL));

	for (i = 0; i < 10; i++) { //10회

		data[i] = rand() % 100;

	}
	//합계

	for (i = 0; i < 10; i++) {

		sum += data[i];
	}

	printf("합은 %d\n", sum);

	//평균

	average = sum / 10.0;

	printf("평균은 %.1f\n", average);



	//출력for

	for (i = 0; i < 10; i++) {

		printf("%d ", data[i]);

	}

	printf("\n");



	return 0;

}