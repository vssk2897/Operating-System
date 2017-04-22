echo "Enter the name of the file"
read name
if [ -f $name ]
then 
	echo "$name file exists"
else
	echo "$name file does not exists"
fi		
