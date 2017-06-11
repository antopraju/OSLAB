# TO check wheather the given username is valid login.

if [ $# -eq 0 ]
then
	echo "Incorrect number of arguments"
	exit
fi

for login in $*
	do 
	if grep $login /etc/passwd >/dev/null
		then
		dir1=`grep $login /etc/passwd|cut -d ":" -f 6`
		echo "LOGIN: $login"
		echo "Directory: $dir1"
	else
		echo "Directory is not found for the Login"
	fi
	done
