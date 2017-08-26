CC = g++
IDIR = ../includes
CFLAGS = -I$(IDIR)

ODIR = obj

_DEPS = shape.hpp student.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = shape.o student.o
OBJ = $(patsubst %,%(ODIR)/%,$(_OBJ))

$(ODIR)/shape.o: shape.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/student.o: student.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ $(IDIR)/*~
