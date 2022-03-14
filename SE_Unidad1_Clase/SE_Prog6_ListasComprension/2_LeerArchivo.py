archivo = open("Archivo.csv")
contenidoArchivo = archivo.readlines()
print(contenidoArchivo)

archivoProcesado = [i.split(",") for i in contenidoArchivo]
print("Archivo Procesado")

for i in archivoProcesado:
    print(i)

intancia = [list(map(int, i)) for i in archivoProcesado]
print(intancia)