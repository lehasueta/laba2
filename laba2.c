#include <stdio.h>
#include < locale.h >
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	z1();
	z2();
	z3();
	return 0;
}

int z1()
{
	setlocale(LC_CTYPE, "RUS");
	printf("1\n"); // подзадание 1
	printf("  2\n");
	printf("    3\n");
	printf("      4\n");
	printf("%d%d%d%d", 1, 2, 3, 4);
	printf("%10.3f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен");
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("Результат умножения %d на %d равен %d\n", 2000, 4, 2000 * 4);
	printf("%d разделить %d равно %d\n ", 5., 2000000., 5. / 2000000);
	printf("%f разделить %f равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("%g разделить %g равно %g\n ", 5., 2000000., 5. / 2000000);
	printf("%e разделить %e равно %e\n ", 5., 2000000., 5. / 2000000);

	return 0;
}

int z2()


{
	int N, K, C;
	N = 12;
	K = 37;
	C = 5030;

	printf("Сейчас %d часов, %d минут, 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", C);
	printf("Текущий час  = %d суток  и текущая минута =  %d часа", N, K);

	return 0;
}
	
int z3()

{
	int m = 1, n = 2, k = 3, L = 333;
	printf("\nдано:\n\t%d\n\t%d\n\t______""\nответ:\n\t%d", k , L , m , n , k / L );
	return 0;
}
