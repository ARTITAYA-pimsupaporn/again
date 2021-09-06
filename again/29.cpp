#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร(Level 3)
int main() {

	float h[10];
	for (int i = 0; i < 10; i++) {
		scanf("%f", &h[i]);

	}
	float sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += h[i];

	}
	sum /= 10;
	printf("\n%f", sum);



	return 0;
}
