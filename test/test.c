struct student {
	int number, score;
	char *name;
};

struct teacher {
	int number, salary;
	char *name;
};

void count_score(int x, int y, int &z) { z = x + y; }

int main() {
	struct student xiaoming;
	// int a;
	xiaoming.score = 1;
	// a = 1;
	// a = xiaoming.number;

	return 0;
}