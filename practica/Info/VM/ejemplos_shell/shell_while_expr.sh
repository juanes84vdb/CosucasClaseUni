# Programa shell que incrementa una variable mediante el comando expr en un bucle while

a=0

while test $a -le 10
do
   echo "El valor de \$a es " $a
   a=`expr $a + 1`
done
