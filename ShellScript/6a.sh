# Find the largest of three numbers

echo "Enter the three numbers"
read a b c

L=$a

if [ $b -gt $a ] && [ $b -gt $c ]
then
L=$b
fi

if [ $c -gt $a ] && [ $c -gt $b ]
then
L=$c
fi

echo "The largest number is: $L"
