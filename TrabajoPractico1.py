#Trabajo Practico Numero 1 - Alumno: Martin Ignacio Cabrera Cazenave



#inicio

flagIngreso = True
contadorPares = 0
sumaImpares = 0
sumaPares = 0

while flagIngreso:
	
	numIngresado = int(input("Ingrese un numero (0 para terminar): "))

	if numIngresado != 0:

		if (numIngresado % 2) != 0:

			sumaImpares = numIngresado + sumaImpares

		else:

			contadorPares = contadorPares + 1
			sumaPares = numIngresado + sumaPares

	else:
		flagIngreso = False



print("Suma de impares: ", sumaImpares)

if (contadorPares > 0):
	print("Promedio: ", sumaPares / contadorPares)

else:
	print("No se ingresaron numeros pares")


		





#fin