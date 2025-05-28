void add(int x, int y, int &z) { z = x + y; }
int main() {
	int *a, b;
	*(a + 4) = 10;
	b = *(a + 4);
	return 0;
}