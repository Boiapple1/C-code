#include <sctdio>
#include <cstdarg>

double average(const int count, ...) {
	va_list ap;
	int i;
	double total = 0.0;

	va_start(ap, count);
	for (i = 0; i < count; i++) {
		total += va_arg(ap, double);

	}
	val_end(ap);
	return total / count;
}

int meddage(const char* fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	int rc = vfprintf(stdout, fmt, ap);
	puts("");
	va_end(ap);
	return rc;
}

int main() {
	message("This is a message");
	message("Average: %lf", average(5, 25.0, 35.7, 50.2, 123.4, 345.4));
}