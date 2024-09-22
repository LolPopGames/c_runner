# main goal
EXEC = build/c_runner

# dirs
SRC_DIR = src
BUILD_DIR = build
INC_DIR = inc

# lib
LIB_DIR = lib
LIB_SUBDIRS = $(wildcard $(LIB_DIR)/*)
LIB_SRCS = $(wildcard $(LIB_DIR)/*/*.c)
LIB_HEADERS = $(wildcard $(LIB_DIR)/*/*.h)

# files
SRCS = $(wildcard $(SRC_DIR)/*.c) $(LIB_SRCS)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(wildcard $(SRC_DIR)/*.c))
OBJS += $(patsubst $(LIB_DIR)/*/%.c, $(BUILD_DIR)/%.o, $(LIB_SRCS))

# C
CC = gcc
CFLAGS = -Wall -I$(INC_DIR) $(foreach dir, $(LIB_SUBDIRS), -I$(dir))

# linking
$(EXEC): $(OBJS)
	@$(CC) $(OBJS) -o $(EXEC)

# compile source files from src/
build/%.o: src/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

# compile source files from lib/ and store in build/
build/%.o: lib/*/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /Q build\*

# UNIX-clean
u_clean:
	rm -f build/*
