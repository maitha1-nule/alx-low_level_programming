In this project "0x1C-makefiles" it was all about working with makefiles. I leaned diffrent methods of using makediles in c.

makefile in c are to help decide which parts of a large program needs to be recompiled and they can be used to in situations where we have a series of instructions to run depending on what files have been changed.

Below I'm going to write a small C script showing how to make makefile and use them'

firt thing first the syntax of makefile is as follows:
	targets:prequisites
	command
	command
	command

^targets are typically file names
^prequisites are also file names just separated by commas
^commands are a series of steps typically use to make targets.

after creating a makefile we use the word make "to run it" in simple terms

example1

makefile

hello:
	echo "Hello, welcome to the world of makefile"
	echo "This line only prints after the first one"

then torun it just use 	"make"

Thats all for now, welcome and incase you see something i could have done netter, feel free to help me with it, im still a student
