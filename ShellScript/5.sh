# Shell script to implement terminal locking.  It should prompt the user for a password.  After accepting the password entered by the user, it must prompt again for password conformation (to retype password).  If a match occurs, it must lock the terminal and prompt for the password.  If the proper password is entered, the terminal must be unlocked.  Note the script must be written to disregard BREAK, Control-D etc.  No time limit need be implemented for the lock duration.

stty -echo 
trap " " 20 30 15 9 2 1 3
echo "Enter the password"
read pass1
echo "Confirm the password"
read pass2

if [ $pass1 = $pass2 ]
then
	echo "Terminal is locked"
	while true
	do
		stty -echo
		echo "Enter the password to unlock"
		read pass3
		if [ $pass1 = $pass3 ]
		then
			echo "Terminal is unlocked"
			stty echo
			exit
		else
			echo "Wrong Password, Try again!!!"
		fi
	done
else
	echo "Password do not match"
fi 
