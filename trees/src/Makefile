IDIR = ../hfiles
CC=gcc
CFLAGS=-I$(IDIR)

ODIR = ../obj

_DEPS = array_btree.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = array_btree.o array_btree_usage.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

EXE_NAME=array_btree_usage

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXE_NAME): $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ $(EXE_NAME)

# Ref: http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
