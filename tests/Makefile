#----------------------- Makefile for minunit tests -----------------------#
################################ Colors ####################################

GREEN 			= \033[1;32m
YELLOW 			= \033[1;33m
RED 			= \033[1;31m
RESET 			= \033[0m


############################# Project files ################################
SRC 			= ../src/ft_printf.c
HEADER_PROJECT 	= ../src/ft_printf.h

############################# Test files ###################################
TESTS 			= test_pointer.c
PROGRAM_TEST 	= test_pointer
HEADER_MINUNIT 	= ../minunit.h

############################## Compiler ####################################

test:		$(OBJS)
			@cc $(SRC) $(TESTS) -o $(PROGRAM_TEST) && ./$(PROGRAM_TEST)

leak:	test
			@valgrind --track-origins=yes --error-exitcode=42 --leak-check=full ./${PROGRAM_TEST}

clean:		
			@rm -f ${OBJS} ${PROGRAM_TEST}
			@echo "$(YELLOW)Cleaning done!$(RESET)"

fclean:		clean

re:			fclean