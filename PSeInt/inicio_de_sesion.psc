Algoritmo inicio_de_sesion
	Definir a, b Como Caracter
	
	u=0
	Mientras u<3 Hacer
		Escribir "ingrese su usuario"
		leer a
		Escribir "ingrese su contrasena"
		leer b
		Si a=="camilo" Entonces
			Si b=="123" Entonces
				Escribir "bienvenido"
				u=4
			SiNo
				Escribir "contrasena incorrecta"
				
			Fin Si
		SiNo
			Escribir "acceso denegado"
			
		Fin Si
		u=u+1
	Fin Mientras
FinAlgoritmo
