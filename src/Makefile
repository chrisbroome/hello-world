CC = gcc

EXENAME = hi
TARGETS = hello main
SRCS = $(addsuffix .c,$(TARGETS))
OBJS = $(addsuffix .o,$(TARGETS))
DEPS = $(addsuffix .d,$(TARGETS))

all: $(EXENAME)

$(EXENAME): $(OBJS)
	$(CC) -o $(EXENAME) $(OBJS)

run: $(EXENAME)
	@./$(EXENAME)

include $(DEPS)

clean:
	@rm -f $(DEPS) $(OBJS) $(EXENAME)

%.d: %.c
	$(CC) -MM $< -MP > $@

.PHONY: all clean run
