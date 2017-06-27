#
# Makefile for lib
#
#-------------------------------------
ROOT=..
PLATFORM = $(shell $(ROOT)/systype.sh)
include $(ROOT)/Make.defines.$(PLATFORM)

lib = libapue.a
objs = error.o errorlog.o

all: $(lib)

$(lib): $(objs)
	$(AR) rv $(lib) $?

#$(RUNLIB) $(lib)

clean:
	rm -f *.o a.out core temp.* $(lib)

include $(ROOT)/Make.libapue.inc
