# main goal
EXEC = build/c_runner

# dirs
SRC_DIR = src
BUILD_DIR = build
INC_DIR = inc

# files
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# C
CC = gcc
CFLAGS = -Wall

$(EXEC): $(OBJS)
	@$(CC) $(OBJS) -o $(EXEC)

build/%.o: src/%.c inc/%.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /Q build\*

# UNIX-clean
u_clean:
	rm -f build/*