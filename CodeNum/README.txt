Pablo Jiménez Rebollo

1.Este programa funciona en Linux y en Windows (en este sistema parcialmente, pierde el formato de los caracteres y para un funcionamiento optimo habría que sustituir en el codigo fuente los system("clear") por clst() para que la pantalla borrara. Por lo demás es multiplataforma y en ambos casos hará los calculos igual y devolverá los mismos valores)

2. Para instalar descomprima el archivo .tar.gz y abra una linea de comandos  en la direccion de la carpeta:

	A. LINUX: 

		a.1 Ejecute el instalador INSTALL.sh (& ./INSTALL.sh), el se encargará de todo. 

		a.2 Necesitará dar permisos de superusuario para poder crear los enlaces simbolicos (si lo desea puede modificar el instalador e incluir la carpeta donde se instala el programa en $PATCH en cuyo caso no necesitará dichos permisos). 

		a.3 Se puede observar que he usado de apoyo /opt/, esto se debe a que está presente en la mayoría de las distribuciones linux y me brinda una ruta estática, no obstante, tras la instalacion se limpian todos los direcctorios.

		a.4 He comprobado que el lanzador pierde el icono que he incluido en el programa en algunos sistemas que he probado, si es su caso puede modificar los lanzadores creados incluyendo el icono que se encuentra en ~/.CodeNum/CodeNum.png

	B. WINDOWS: Aunque no había previsto hacerlo para windows, dado que es practicamente portable se puede hacer un apaño, estoy en proceso de crear un instalador (.bat), no obstante no manejo el shell de windows de forma tan habitual, así que tiempo al tiempo.

		b.1 Para poder instalar en windows se deberán modificar los archivos cambiobase.c y ejecucion.c para adaptar las rutas de las librerias incluidas en el programa, así como para introducir los cambios que se consideren, y compilar a mano con gcc.

		b.2 Tras la compilación guarde el ejecutable y el icono en la carpeta deseada y cree usted mismo el acceso directo, puede borrar el resto de archivos sin problema.

3. No he registrado el programa, pero se agradece el reconocimiento (21/03/2017).
