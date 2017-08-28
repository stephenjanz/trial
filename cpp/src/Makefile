CC = g++
IDIR = ../includes
CFLAGS = -I$(IDIR)

ODIR = obj

_DEPS = shape.hpp student.hpp rectangle.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = shape.o student.o rectangle.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

main : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

$(ODIR)/shape.o: shape.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/student.o: student.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/rectangle.o: rectangle.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/main.o: main.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ $(IDIR)/*~
