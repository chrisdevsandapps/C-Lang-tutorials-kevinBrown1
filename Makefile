# https://www.youtube.com/watch?v=a8mPKBxQ9No

# put the filename here:
# VAR1 = bool1
# VAR1 = loopWhile1
# VAR1 = loopDoWhile1
# VAR1 = loopFor1
# VAR1 = loopBreakContinue1
# VAR1 = functionBasics1
# VAR1 = arrayBasics1
# VAR1 = stringBasics1
VAR1 = stringBasics2
# VAR1 = typeCasting1
# VAR1 = fileAccessBasics1
# VAR1 = commandLineArgs1

VAR2 = hello

wow: $(VAR1).c
	gcc $(VAR1).c -o $(VAR2)
	sleep 1
	echo " "
	./$(VAR2)

clear:
	rm $(VAR2)


