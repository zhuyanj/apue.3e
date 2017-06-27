DIRS = lib chp1 chp3

all:
	for i in $(DIRS); do \
	    (cd $$i && echo "making $$i" && $(MAKE)) || exit 1; \
		done

clean:
	for i in $(DIRS); do \
	    (cd $$i && echo "cleaning $$i" && $(MAKE) clean) || exit 1;\
		done 
