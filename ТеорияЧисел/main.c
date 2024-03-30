#include <stdio.h>

#define NOD 7
#define NumX 385
#define NumY 133

int main() {

	// номер 3
	int x, y, res = 0;
	for (x = -100 ; x < 100; x++){
		for (y = -100 ; y < 100; y++) {
			res = NumX * x + NumY * y;
			if (res == NOD) {
				printf("Ex 3 : x = %d, y = %d\n", x, y);
			}
		}
	}

	// номер 7 
	for (int i = 0; i < 100; i++) {
		if ((17 * i + 7) % 38 == 0)
			printf("Ex 7 : x = %d ", i);
	}

	return 0;
}