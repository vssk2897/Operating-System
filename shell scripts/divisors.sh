echo "Enter the number for which you want to find the divisor"
read n
i=1
while [ $i -lt $n ]
do
	if [ $(($n%$i)) -eq 0 ]
	then
		echo "$i is divisor"
	fi
	i=$(($i + 1 ))
done		
