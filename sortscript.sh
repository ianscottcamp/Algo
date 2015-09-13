#!/bin/sh
# Example: sh sortscript.sh SortTime ucm_id

for s in "a" "d" "u"                                             # s={'a','d','u'}
  do
  for k in 100000 10000000                               # k={10,10^3,10^5,10^7}
    do
    for n in 10 100 1000 10000 100000 1000000 10000000 # n={10,10^2,10^3,10^4,10^5,10^6,10^7,10^8}
      do
      ./$1 $s $k $n $2
    done
  done
done

# 
