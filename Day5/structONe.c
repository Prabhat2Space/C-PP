#include <stdio.h>

struct ABC{
	int a;
	double c;
	float b;
};

int main(){
	printf("Size: %lu\n", sizeof(struct ABC));
}
