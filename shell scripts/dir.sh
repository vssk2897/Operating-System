echo "Enter the name of the dir"
read name
if [ -d $name ]
then 
	echo "$name directory exists"
else
	echo "$name directory does not exists"
fi		
