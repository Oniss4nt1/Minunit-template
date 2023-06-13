#----------------------- Makefile for minunit tests -----------------------#

############################# Project files ################################
SRC 			= ../src/ehpositivo.c
HEADER_PROJECT 	= ../minunit.h

############################# Test files ###################################
TESTS 			= test_ehpositivo.c
PROGRAM_TEST 	= test_ehpositivo
HEADER_MINUNIT 	= ../minunit.h

############################# Compiler #####################################

test:		$(OBJS)
			cc $(SRC) $(TESTS) -o $(PROGRAM_TEST) && ./$(PROGRAM_TEST)

leak:	test
			valgrind --track-origins=yes --error-exitcode=42 --leak-check=full ./${PROGRAM_TEST}
