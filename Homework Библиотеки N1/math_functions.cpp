#include "math_functions.h"

int sum(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int division(int a, int b) {
	if (b == 0) {
		return 0;
	}
	else {
		return a / b;
	}
}
int deg(int a, int b) {
	int p = 1;
	if (b == 0) {
		return 1;
	}
	else {
		for (int i = 0; i < b; i++) {
			p *= a;
		}
	}
	return p;
}