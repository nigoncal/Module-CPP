ERASE       		=    \033[2K\r
GREY        		=    \033[30m
RED            		=    \033[31m
GREEN        		=    \033[32m
YELLOW        		=    \033[33m
BLUE        		=    \033[34m
PINK        		=    \033[35m
CYAN        		=    \033[36m
WHITE       		=    \033[37m
BOLD       			=    \033[1m
UNDER       		=    \033[4m
SUR					=    \033[7m
END					=    \033[0m

EXE					=	contact

SRCS_PATH			=	.
SRCS_FILE			=	main.cpp \
						contact.cpp

SRCS				=	$(addprefix $(SRCS_PATH)/, $(SRCS_FILE))

INC_PATH			=	.
INC					=	$(INC_PATH)/contact.hpp

CPPFLAG				=	-std=c++98

COMP				=	clang++ $(CPPFLAG) -Wall -Wextra -Werror

RM					=	rm -rf

all					:	$(EXE)

$(EXE)				:	$(SRCS)
						@$(COMP) $(SRCS) -o $(EXE) -I$(INC)
						@printf "$(ERASE)$(GREEN)$(EXE)\t\t-->\tCREATE\n$(END)"

clean				:
						@$(RM) $(EXE)

fclean				:	clean

re					: 	fclean all

.PHONY: all clean fclean re
