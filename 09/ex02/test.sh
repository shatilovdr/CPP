#!/bin/bash

sum=0

if [ $1 ]; then
    rm -rf inputs.txt
    for i in {1..1000}
    do
        if [[ "$OSTYPE" == "darwin"* ]]; then
            max_range=$(jot -r 1 0 2147483647)
            cmd=$(jot -r $1 1 $max_range | tr "\n" " ")
        else
            max_range=$(shuf -i 0-2147483647 -n 1)
            cmd=$(shuf -i 1-$max_range -n $1 | tr "\n" " ")
        fi
        echo "$cmd" >> inputs.txt
    done
fi

while IFS= read -r line
do
    read -a numbers <<< "$line"
    output=$(./PmergeMe "${numbers[@]}")
    sum=$(echo "$sum + $output" | bc)
done < inputs.txt


average=$(echo "scale=5; $sum / 1000" | bc)
echo "Average: $average"