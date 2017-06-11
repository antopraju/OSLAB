#TO check whether the two input files have same permissions and print out the permissions of the files.

if [ $# -gt 2 ] || [ $# -lt 2 ]
	then 
	echo "Incorrect number of arguments"
	exit
else
	file1=`ls -l $1|cut -c2-10`
	file2=`ls -l $2|cut -c2-10`
	if [ $file1 = $file2 ]
		then
		echo "Permissions are equal"
		echo "The Permission is : $file1"
	else
		echo "The permissions are not equal"
		echo "The permissions of file $1 is : $file1"
		echo "The permissions of file $2 is : $file2"
	fi
fi
