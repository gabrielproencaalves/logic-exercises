EXERCISES = 01 02 03 04 05 06 07 08

install:
	for dir in $(EXERCISES); do \
		(cd $$dir; cc main.c -g -std=c89); \
	done

clear:
	for dir in $(EXERCISES); do \
		(cd $$dir; rm a.out); \
	done
