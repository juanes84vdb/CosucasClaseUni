# Definición directa de array
semana=(lunes martes miercoles jueves viernes sabado)

# Acceso a los elementos de arrays
echo $semana
echo ${semana[1]}
echo ${semana[2]}
echo ${semana[3]}
echo ${semana[4]}
echo ${semana[5]}

# Cambio de uno de los valores del array
semana[3]='miércoles'
echo ${semana[3]}

# Añadimos un valor al array
semana[6]='domingo'

# Numero de elementos de array
echo "El numero de elementos de \$semana es" ${#semana[@]}

# Bucle que recorre el array
i=0
while test $i -lt ${#semana[@]}
do
   echo ${semana[$i]}
   i=`expr $i + 1`
done
   
