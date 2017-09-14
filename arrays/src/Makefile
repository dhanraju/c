
IDIR = ../hfiles
CC=gcc
CFLAGS=-I$(IDIR)

ODIR = ../obj

_DEPS = array_ops.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = array_ops.o array_ops_usage.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

array_ops_usage: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~

