echo "Enter the value of the number for which you want to print the table "
read n
i=1
ans=1
while [ $i -ne 10 ]
do
	ans=`expr $n \* $i`
	echo "$n x $i = $ans"
	i=$(($i + 1))
done	
