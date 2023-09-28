echo "ENTER THE NUMBER"
read n
reamider  $((n%2))

if[reamider -eq 0];
then 
echo $n is a even number
else
echo $n is a odd number
fi
