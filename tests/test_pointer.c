#include "minunit.h"
#include <stdio.h>
#include "../src/ft_printf.h"

MU_TEST(test_pointer_value_is_negative)
{
	int valor_do_ponteiro = -42;
	int comprimento_do_ponteiro = ft_printf("%p", &valor_do_ponteiro);
	int comprimento_do_printf = printf("%p", &valor_do_ponteiro);
	mu_assert_int_eq(comprimento_do_ponteiro, comprimento_do_printf);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_pointer_value_is_negative);
}

int main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}