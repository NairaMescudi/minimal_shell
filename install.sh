#!/bin/bash

# If User ID is not zero, echo err msg
if [ $UID -ne 0 ]; then
	echo "You are not root"
	exit 1
fi

# make Makefile and copy executable msh to /usr/bin/msh
# makes msh command accessible anywhere in the system
make && cp msh /usr/bin/msh

if [ $? -eq 0 ]; then
	echo
	echo "Cleaning up..."
	make clean
	echo "Successfully Installation..."
	echo "run msh"

else
	echo "some error occured"
	echo "try reinstalling"
fi

