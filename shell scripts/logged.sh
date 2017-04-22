echo "Enter the username"
read name
echo "The current date and time is $(date)"
for u in `who | cut -d " " -f 1`
do
	if [ "$u" = "$name" ]
	then
		echo "$name is already logged in"
	else
		echo "$name is not-logged in"
	fi		
done	
