CCPP = g++
CFLAGS = -Wall -g
BUILD_DIR = build
TARGET = $(BUILD_DIR)/main

all: $(TARGET)

$(TARGET): $(BUILD_DIR)/main.o
	$(CCPP) $(CFLAGS) $< -o $@

$(BUILD_DIR)/main.o: main.cpp | $(BUILD_DIR)
	$(CCPP) $(CFLAGS) -c $^ -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	-rm -fR $(BUILD_DIR)