read -p "Enter the charecter" c
for u in `ls -l | tr -s " "|cut -d " " -f 9`
do
	x=`echo $u |cut -c 1`
	echo "$x"
	if [ "$x" = "$c" ]
	then
		echo $u
	fi	
done		
