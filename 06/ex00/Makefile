# MODULE06_EX00
NAME			:=	converter

# COMPILER
CPP				:=	c++ -std=c++11
FLAGS			:=	-Wall -Wextra -Werror -Wshadow -Wpedantic

# COLORS
GREEN			:=	\033[32m
RED				:=	\033[41m
EC				:=	\033[0m

# SOURCE_FILES
SRCS			:=	main.cpp \
							ScalarConverter.cpp
SRCS_PATH		:=	srcs/

# HEADER_FILES
INCLUDES_PATH		:=	includes/
INCLUDES			:=	$(addprefix -I , $(INCLUDES_PATH))

# OBJECT_FILES
OBJS_PATH		:=	objs/
OBJS			:=	$(addprefix $(OBJS_PATH), $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS_PATH) $(OBJS)
	@$(CPP) $(FLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created successfully!$(EC)"

$(OBJS_PATH)%.o: $(SRCS_PATH)%.cpp
	@$(CPP) $(FLAGS) $(INCLUDES) -c $< -o $@

$(OBJS_PATH):
	@mkdir -p $(OBJS_PATH)

clean:
	@rm -rf $(OBJS_PATH)
	@echo "$(RED)Object files removed!$(EC)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)Full clean up completed successfully!$(EC)"

re: fclean all

.PHONY: all clean fclean re
