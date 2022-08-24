# https://www.youtube.com/watch?v=a8mPKBxQ9No

# put the filename here:
VAR1 = bool1

VAR2 = hello

awesome: $(VAR1).c
	gcc -o $(VAR2) $(VAR1).c
	sleep 1
	echo " "
	./$(VAR2)

clear:
	rm $(VAR2)


