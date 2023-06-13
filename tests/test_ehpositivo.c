#include "minunit.h"

int ehpositivo(int n);

MU_TEST(test_positivo)
{
	int numero_a_ser_testado = 42;
	int resultado_esperado = 1;

	int resultado_obtido = ehpositivo(numero_a_ser_testado);

	mu_assert_int_eq(resultado_obtido, resultado_esperado);
}

MU_TEST(test_negativo)
{
	int numero_a_ser_testado = -42;
	int resultado_esperado = 0;

	int resultado_obtido = ehpositivo(numero_a_ser_testado);

	mu_assert_int_eq(resultado_obtido, resultado_esperado);
}

MU_TEST_SUITE(ehpositivo_suite)
{
	MU_RUN_TEST(test_positivo);
	MU_RUN_TEST(test_negativo);
}

int main(void)
{
	MU_RUN_SUITE(ehpositivo_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}