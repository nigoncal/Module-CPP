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

NAME				=	philo.a
EXE					=	philo

SRCS_PATH			=	.
SRCS_FILE			=	megaphone.cpp

SRCS				=	$(addprefix $(SRCS_PATH)/, $(SRCS_FILE))
OBJ_PATH			=	.obj
OBJS_FILES			=	$(SRCS_FILE:%.c=%.o)
OBJS				=	$(addprefix $(OBJ_PATH)/, $(OBJS_FILES))

INC_PATH			=	includes
INC					=	$(INC_PATH)/$(EXE).h

COMP				=	clang++ -Wall -Wextra -Werror

RM					=	rm -rf

$(OBJ_PATH)/%.o		:	$(SRCS_PATH)/%.c $(INC)
						@mkdir -p $(OBJ_PATH)
						@$(COMP) -I$(INC_PATH) -c $< -o $@
						@printf "$(ERASE)$(YELLOW)$<$(END)"

all					:	$(NAME) $(EXE)	

$(NAME)				:	$(OBJS)
						@ar rcs $(NAME) $(OBJS)
						@printf "$(ERASE)$(GREEN)$(NAME)\t\t-->\tCREATE\n$(END)"

$(EXE)				:	$(OBJS) $(NAME)
						@$(COMP) $(NAME) -o $(EXE) -I$(INC_PATH)
						@printf "$(ERASE)$(GREEN)$(EXE)\t\t-->\tCREATE\n$(END)"

clean				:
						@$(RM) $(OBJ_PATH)

fclean				:	clean
						@$(RM) $(NAME) $(EXE)

re					: 	fclean all

norm				:	
						@printf "$(RED)"
						@(norminette $(SRCS) $(INC) | grep "Error") || printf "$(BOLD)$(GREEN)Norminette $(EXE)\t[OK]\n"
						@printf "$(END)"

.PHONY: all clean fclean re norm
