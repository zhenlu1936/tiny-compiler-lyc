struct student {
	int number, score;
	char *name;
};

struct teacher {
	int number, salary;
	char *name;
};

struct classes {
	int number[10];
};

void count_score(int x, int y, int &z) { z = x + y; }

void init_student(struct student &s, int number, int score, char *name) {
	s.number = number;
	s.score = score;
	s.name = name;
}

int main() {
	struct classes class_1;
	class_1.number[9] = 20;
	return 0;
}