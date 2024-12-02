if test $# -eq 2
then
   if test $1 -eq $2
   then
   	echo El argumento uno y el dos son iguales
   else
	echo El argumentos uno y el dos son diferentes
   fi
else
   echo NUMERO DE ARGUMENTOS INCORRECTO
fi
