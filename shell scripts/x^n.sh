echo "Enter the value of X "
read x
echo "Enter the value of n"
read n
i=0
ans=1
while [ $i -ne $n ] 
do
	ans=`expr $ans \* $x`
	i=`expr $i + 1`
done	
echo "The value of $x^$n is $ans"
