#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++) {
		//������argv�ɔԂ�\��
		printf(argv[i]);
		//���s
		printf("\n");

	}

	system("pause");
	return 0;
}