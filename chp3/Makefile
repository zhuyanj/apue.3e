ROOT=..
PLATFORM=$(shell $(ROOT)/systype.sh)
include $(ROOT)/Make.defines.$(PLATFORM)

objs = 3-1 3-2 3-5 3-11

all:	$(objs)
objs:	$(LIBAPUE)
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(objs) *.o $(TEMPFILES)

include $(ROOT)/Make.libapue.inc

