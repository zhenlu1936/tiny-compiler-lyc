void add(int &x, int &y, int &z) { z = x + y; }
int main() {
	int a, b, c;
	int *d;
	a = 10;
	b = -a;
	add(c, a, b);
	return 0;
}