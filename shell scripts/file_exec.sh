read -p "Enter the file name " name
if [ -f $name ]
then
	echo "The file exists & checking for exec permission"
	if [ -x $name ]
	then
		echo "The file has executable permission"
	else	
		echo "The file does not have executable permission"
	fi
else
	echo "The file does not exist"
fi			
