#!/bin/bash

num=138

while [ : ]
do
    if [ $num -lt 130 ]
    then
        break
    fi

    acc new abc$num
    file_name=$num"_A.cpp"
    if [ -f $file_name ];
    then
        mv $file_name abc$num/a/
        cd abc$num/a/
        rm main.cpp
        mv $file_name main.cpp
        cd ../..
    else
        echo $file_name not Found
    fi

    file_name=$num"_B.cpp"
    if [ -f $file_name ];
    then
        mv $file_name abc$num/b/
        cd abc$num/b/
        rm main.cpp
        mv $file_name main.cpp
        cd ../..
    else
        echo $file_name not Found
    fi

    file_name=$num"_C.cpp"
    if [ -f $file_name ];
    then
        mv $file_name abc$num/c/
        cd abc$num/c/
        rm main.cpp
        mv $file_name main.cpp
        cd ../..
    else
        echo $file_name not Found
    fi

    file_name=$num"_D.cpp"
    if [ -f $file_name ];
    then
        mv $file_name abc$num/d/
        cd abc$num/d/
        rm main.cpp
        mv $file_name main.cpp
        cd ../..
    else
        echo $file_name not Found
    fi
    
    num=$(($num-1))
done

