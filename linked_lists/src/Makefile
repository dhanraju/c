
IDIR = ../hfiles
CC=gcc
CFLAGS=-I$(IDIR)

ODIR = ../obj

_DEPS = linked_list_ops.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = linked_list_ops.o linked_list_ops_usage.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

linked_list_ops_usage: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ linked_list_ops_usage

