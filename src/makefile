PROGRAM=studentList
CC=gcc
CFLAGS=-g

${PROGRAM}:	${PROGRAM}.o
	${CC} ${CFLAGS} ${PROGRAM}.o -o ${PROGRAM}

${PROGRAM}.o:	${PROGRAM}.c ${PROGRAM}.h

clean:
	rm -f *.o ${PROGRAM}
