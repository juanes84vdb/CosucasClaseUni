# Definición de una variable con varios valores
semana="lunes martes miercoles jueves viernes sabado domingo"

# Asignación de cada elemento de la variable en un array
i=0
for dia in $semana
do
   array_semana[$i]=$dia
   i=`expr $i + 1`
done

echo ${array_semana[@]}

# Otra manera de recorrer el array
for dia_array in ${array_semana[@]}
do
   echo $dia_array
done
   
