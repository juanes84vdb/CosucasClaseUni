# Programa shell que realiza un bucle while mientras el usuario no introduzca un valor mayor que 10

a=0

while test $a -le 10
do
   echo "El valor de $a es " $a
   echo "Introduzca un nuevo valor para $a:"
   read a
done
