echo "Enter the value of the number"
read n
x=$n
sum=0
while [ $n -ne 0 ]
do
	sum=$(($sum + ($n % 10) \* ($n % 10) \* ($n % 10)))
	n=$(($n/10))
done	
if [ $sum -eq $x ]
then
	echo "$x is amstrong"
else	
	echo "$x is not amstrong"
fi	
