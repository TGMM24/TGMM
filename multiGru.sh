#! /bin/bash

for loop in "functionDeclaration" "program" "classDeclaration"
do
    echo $loop
    ./main3 $loop
done