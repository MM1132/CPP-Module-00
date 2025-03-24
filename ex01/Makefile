SRC_DIR := src
OBJ_DIR := obj
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
IFLAGS := -Iinclude

# Executable setup
NAME := phonebook
SRC_FILES := \
	$(SRC_DIR)/Contact.cpp \
	$(SRC_DIR)/main.cpp \
	$(SRC_DIR)/PhoneBook.cpp

OBJ_FILES := $(SRC_FILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

# Other rules
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
