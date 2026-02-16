CC	:= clang 

SRCS	:= cauqui.c

TARGET	:= cauqui

PREFIX	:= /usr/local
BINDIR	:= $(PREFIX)/bin

all: $(TARGET)
	clang -std=c99 -O2 -march=native -o cauqui cauqui.c

install: all
	@mkdir -p $(BINDIR)
	install -m 0755 $(TARGET) $(BINDIR)/$(TARGET)

clean:
	rm -f cauqui
	rm -f cauqui.o

.PHONY: all install clean
