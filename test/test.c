struct student{
	int number,score;
	char_ptr name;
};

struct teacher{
	int number,salary;
	char_ptr name;
};

int a[10],b,c;
int main() {
	int a,b;
	int_ptr c;
	
	a=1;
	b=2;
	c=&a;
	c[5]=3;

	return 0;
}