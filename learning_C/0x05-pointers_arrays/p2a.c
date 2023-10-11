#include <stdio.h>

// syntax of p2a is like this: char *ptr = &arrayName;
// syntax of structure pointer : struct structName *ptr;
// syntax of function pointers: int (*ptr)(int, char);
// syntax of a double pointer(pointers to pointer): datatype **pointerName;
// null pointers: dataType *pointerName = NULL; or pointerName = NULL;
// void pointers: void *pointerName;
// wild pointers: int *ptr; int *str;
// constant pointers: dataType * const pointerName;
// pointer to constant: const dataType *pointerName;


struct str {
};

void func(int a, int b){};

int main()
{
	//variable definitions
	int a = 10;
	char c = 'G';
	struct str x;

	//pointer definitions
	int *ptr_int = &a;
	char *ptr_char = &c;
	struct str *ptr_str = &x;
	void (*ptr_func)(int, int) = &func;
	void *ptr_vn = NULL;

	//printing sizes
	
}
