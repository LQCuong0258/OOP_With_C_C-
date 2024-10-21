CC = gcc
CFLAGS = -Wall -g
BUILD_DIR = build
TARGET = $(BUILD_DIR)/main

C_SOURCES = \
main.c \
$(wildcard Object/Src/*.c) \

OBJECTS = $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o)))
vpath %.c $(sort $(dir $(C_SOURCES)))

C_INCLUDES = \
-IObject/Inc \

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	$(CC) $(C_INCLUDES) $(CFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $@

clean:
	-rm -fR Build