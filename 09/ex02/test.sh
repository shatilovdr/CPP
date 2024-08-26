#!/bin/bash

for i in {1..100}
do
    max_range=$(shuf -i 1-2147483647 -n 1)
    num_elements=$1
#linux
    args=$(shuf -i 1-$max_range -n $num_elements | tr "\n" " ")
#macOS
    # args=$(jot -r $num_elements 1 $max_range | tr "\n" " ")

    ./PmergeMe $args
done

# ./PmergeMe `shuf -i 1-2147483647 -n 100 | tr "\n" " "`
