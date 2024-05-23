# MODULE00_EX01
NAME			:=	phonebook

# COMPILER
CPP				:=	c++ -std=c++17
FLAGS			:=	-Wall -Wextra -Werror -g 

# COLORS
GREEN			:=	\033[32m
RED				:=	\033[41m
EC				:=	\033[0m

# SOURCE_FILES
SRCS			:=	main.cpp PhoneBook.cpp Contact.cpp

# HEADER_FILES
HEADERS			:=	PhoneBook.hpp Contact.hpp
INCLUDES		:=	$(addprefix -I , $(HEADERS))

# OBJECT_FILES
OBJS_PATH		:=	objs/
OBJS			:=	$(addprefix $(OBJS_PATH), $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS_PATH) $(OBJS)
	@$(CPP) $(FLAGS)  $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created successfully!$(EC)"

$(OBJS_PATH)%.o: %.cpp $(HEADERS)
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