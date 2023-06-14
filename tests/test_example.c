#include "minunit.h"
#include <stdio.h>
#include "../src/example.h"

MU_TEST(test_pointer_value_is_negative)
{
	int valor_do_ponteiro = -42;
	int result = ft_printf("%p", &valor_do_ponteiro);
	int expected = printf("%p", &valor_do_ponteiro);
	mu_assert_int_eq(result, expected);
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