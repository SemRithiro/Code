#!/bin/bash/
set result = $RANDOM;
TOP:
echo "Please input value: "; read value
if [ $value -eq $result ] then
	echo "You got the correct answer"
elseif [ $value -gt $result ] then
	echo "Smaller than this"
	goto TOP
else
	echo "Bigger than this"
	goto TOP
fi
