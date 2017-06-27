ROOT=..
PLATFORM=$(shell $(ROOT)/systype.sh)
EXTRALIBS=-lcurses
include $(ROOT)/Make.defines.$(PLATFORM)
objs = ls 1-4 1-5 1-6 1-7 1-8 1-9 1-10 ascii

all: $(objs)
objs:	$(LIBAPUE)
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(objs) $(TEMPFILES) *.o

include $(ROOT)/Make.libapue.inc
