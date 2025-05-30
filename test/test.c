struct student {
	int number, score;
	char *name;
};

struct teacher {
	int number, salary;
	char *name;
};

struct classes {
	int number[30];
	struct student students[30];
	struct student teacher[30];
};

void init_student(struct student &s, int number, int score, char *name) {
	s.number = number;
	s.score = score;
	s.name = name;
}

int main() {
	struct classes class_1;
	int i;
	char name[20];
	for (i = 0; i < 30; i = i + 1) {
		init_student(class_1.students[i], i, 100, name);
	}

	return 0;
}