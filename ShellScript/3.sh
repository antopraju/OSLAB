# find largest file in the directory

echo "Enter the directory path:"
read dir1

if [ ! -d $dir1 ]
	then
	echo "Invalid directory"
	exit
fi

large=0;

for file1 in `find $dir1 -type f`
do 
	size1=`stat -c %s $file1`
	echo "The size of file $file1 is $size1"
	if [ $size1 -gt $large ]
	then
		large=$size1
		lar_file=$file1
	fi
done
echo "The largest file is $file1: "
echo "The size of that file is $large"
