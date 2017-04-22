read -p "Enter the file name " name
if [ -f $name ]
then
	echo "The file exists & assigning r w x permission"
	chmod +x $name
else
	echo "The file does not exist"
fi	
	

