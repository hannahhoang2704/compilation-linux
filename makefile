#compiler 
CC := gcc
#compiler flags
CFLAGS := -Wall -Wextra -Wfatal-errors -Wpedantic
#source files
SOURCES := $(wildcard *.c)
#object files
OBJS ?= main.o random.o
#executable file
EXC_FILE := random_nr
#linker flags
LDFLAGS  := -lm

$(EXC_FILE): $(OBJS)
	$(CC) -o $(EXC_FILE) $(SOURCES)
	

#compilation rule for object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(LDFLAGS) 

.PHONY: clean

clean:
	@rm -f $(OBJS) $(EXC_FILE)
	@echo "Delete .o files and executable file"

