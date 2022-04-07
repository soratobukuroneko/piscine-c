#!/bin/sh

TESTS_ROOT="`dirname $0`"
TESTS_SERIE="$1"
EXERCICE_ROOT="$2"

for i in "$TESTS_ROOT/$TESTS_SERIE"/*
do
	EXERCICE="${i##*/}"
	SRC=`ls "$EXERCICE_ROOT/$EXERCICE"/ft_*.c 2>/dev/null`
	if [[ -f "$SRC" && -f "$i/test.c" ]]
	then
		gcc -Wall -Wextra -Wpedantic -Werror "$EXERCICE_ROOT/$EXERCICE"/*.c \
			"$i/test.c" -o "$EXERCICE.bin"

		if [[ $? ]]
		then
			if [[ -f "$i/test.out" ]]
			then
				if [[ `"./$EXERCICE.bin" | diff "$i/test.out" -` ]]
				then
					echo "Test $EXERCICE failed!"
				else
					echo "Test $EXERCICE passed!"
				fi
			else
				"./$EXERCICE.bin"
				if [[ $? -eq 0 ]]
				then
					echo "Test $EXERCICE passed!"
				else
					echo "Test $EXERCICE failed!"
				fi
			fi
			rm "$EXERCICE.bin"
		else
			echo "$EXERCICE failed to build!"
		fi
	else
		echo "Missing exercice $EXERCICE"
	fi
done
