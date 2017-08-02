#!/bin/sh
ifconfig | grep "inet " | cut -d t -f 2 | sed 's/ //g' | cut -d n -f 1 > fich
if [ -s fich ]
then
	cat fich
else
	echo "Je suis perdu!"
fi
rm fich
