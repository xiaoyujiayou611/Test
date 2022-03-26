#!/bin/bash
file="./*.core*"
if [ -f $file ]
then 
   gdb test $file -x command.gdb
else 
   echo "there is no core file."
fi
   
