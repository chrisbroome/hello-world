CC = gcc
CFLAGS = -g -Wall -std=c99
EXENAME = hi
TARGETS = hello main
SRCS = $(addsuffix .c,$(TARGETS))
OBJS = $(addsuffix .o,$(TARGETS))
DEPS = $(addsuffix .d,$(TARGETS))

all: $(EXENAME)

-include $(DEPS)

deps: $(DEPS)
objs: $(OBJS)

$(EXENAME): $(OBJS)
	$(CC) -o $(EXENAME) $(OBJS)

run: exe
	@./$(EXENAME)

clean:
	@rm -f $(DEPS) $(OBJS) $(EXENAME)

%.d: %.c
	$(CC) -MM $< -MP > $@

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: all clean run exe deps objs
