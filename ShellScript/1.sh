#To print the arguments in reverse order

if [ $# -eq 0 ]
	then
	echo "Cant have zero arguments"
	exit
else
	while [ $# -gt 0 ]
	do 
	rev="$1 $rev"
	shift
	done
	echo "$rev"
fi
