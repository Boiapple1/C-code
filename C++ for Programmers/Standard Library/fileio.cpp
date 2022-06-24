//
//fopen mode stirng
// 
// r open file for reading
// w create a file for writing
// a append to a file
// r+ open file for read/write
// w+ creates file for read/write
// a+ open file for read/write
// b binary mode
// 
//



#include <cstdio>

constexpr int maxstring = 1024;
constexpr int repeat = 5;

int main() {
	const char* fn = "testfile.txt";//file name
	const char* str = "This is a literal c-string.\n";

	//create/write the file
	puts("write file");
	FILE* fw = fopen(fn, "w");
	for (int i = 0; i < repeat; i++) {
		fputs(str, fw);

	}
	fclose(fw);
	puts("done");

	//read the file
	puts("reading file");
	char buf[maxstring];
	FILE* fr = fopen(fn, "r");
	while (fhers(buf, maxsting, fr)) {
		fputs(buf, stdout);
	}

	fclose(fr);
	remove(fn);
	puts("done.");
	return 0;

}