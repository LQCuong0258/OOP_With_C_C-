C_COMPILE = gcc
CLAGS = -Wall -g
TARGET = Build/main
OBJ_DIR = Build

C_SOURCE = main.c shape.c
OBJ_SOURCE = $(C_SOURCE:%.c=$(OBJ_DIR)/%.o)

all: $(TARGET)

$(TARGET): $(OBJ_SOURCE)
	$(C_COMPILE) $(CLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(C_COMPILE) $(CLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf Build