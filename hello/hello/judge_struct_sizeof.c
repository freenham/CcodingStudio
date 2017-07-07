#include <stdio.h>

struct EncryptionHeader {
	char flags;
	int value[2];
};

int main() {
	struct EncryptionHeader header;
	printf("%d\n", sizeof(header));
	return 0;
}