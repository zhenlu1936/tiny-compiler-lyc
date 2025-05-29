struct student {
	int number, score;
	char *name;
};

struct teacher {
	int number, salary;
	char *name;
};

void count_score(int x, int y, int &z) { z = x + y; }

void init_student(struct student &s, int number, int score, char *name) {
	// s.number = number;
	// // s.score = score;
	s.name = name;
}

int main() {
	struct student xiaoming;
	// char *name;
	// init_student(xiaoming, 114514, 100, name);
	int a;
	int *b;
	a = *b;

	return 0;
}