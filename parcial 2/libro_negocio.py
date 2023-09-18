import pandas as pd
from openpyxl import Workbook
from autor import Autor
from libro import Libro
from categoria import Categoria

class LibroNegocio():
    listado_libros=[]
    registros_libros = 'listado_libros.xlsx'

    def __init__(self):
        self.listado_libros=[]

    def obtener_libros(self):
        
        # --------------------------------------------------------------------------
        # copiando el contenido de listado_autores.xlsx 
        # Lee los datos del archivo Excel en un DataFrame
        df = pd.read_excel('listado_autores.xlsx')
        
        # Inicializa una lista para almacenar objetos Autores
        lista_autores_copia = []
        
        # Itera a través de las filas del DataFrame y crea objetos Autores
        for index, row in df.iterrows():
            autor = Autor(row['Nombre'], row['Apellido Paterno'], row['Apellido Materno'], row['Fecha de Nacimiento'], row['Codigo del Autor'], row['Pais'], row['Editorial'])
            lista_autores_copia.append(autor)
        # --------------------------------------------------------------------------
        
        
        # --------------------------------------------------------------------------
        # copiando el contenido de listado_categorias.xlsx 
        # Lee los datos del archivo Excel en un DataFrame
        df = pd.read_excel('listado_categorias.xlsx')
        
        # Inicializa una lista para almacenar objetos Docente
        lista_categorias_copia = []
        
        # Itera a través de las filas del DataFrame y crea objetos Docente
        for index, row in df.iterrows():
            
            categoria = Categoria(row['Codigo de la Categoria'], row['Categoria'])
            lista_categorias_copia.append(categoria)
        # --------------------------------------------------------------------------
        
        
        df = pd.read_excel(self.registros_libros)
        listado_libros = []
        
        for index, row in df.iterrows():
            libro = Libro(row['Codigo del Libro'], row['Titulo'], row['Año'])
            codigo_autor = row['Codigo del Autor']
            codigo_categoria = row['Codigo de la Categoria']
            
            for autor in lista_autores_copia:
                if codigo_autor == autor.get_codigo_autor():
                    libro.asignar_autor(autor)
            
            for categoria in lista_categorias_copia:
                if codigo_categoria == categoria.get_codigo_categoria():
                    libro.asignar_categoria(categoria)
            
            listado_libros.append(libro)
        
        return listado_libros
    
    
    def registrar_libros(self, codigo_libro, titulo, anio, codigo_autor, codigo_categoria):
        
        self.listado_libros = self.obtener_libros()
        libro= Libro (codigo_libro, titulo, anio)

        # --------------------------------------------------------------------------
        # copiando el contenido de listado_autores.xlsx 
        # Lee los datos del archivo Excel en un DataFrame
        df = pd.read_excel('listado_autores.xlsx')
        
        # Inicializa una lista para almacenar objetos 
        lista_autores_copia = []
        
        # Itera a través de las filas del DataFrame y crea objetos Docente
        for index, row in df.iterrows():
            autor = Autor(row['Nombre'], row['Apellido Paterno'], row['Apellido Materno'], row['Fecha de Nacimiento'], row['Codigo del Autor'], row['Pais'], row['Editorial'])
            lista_autores_copia.append(autor)
        # --------------------------------------------------------------------------
        
        # --------------------------------------------------------------------------
        # copiando el contenido de listado_categorias.xlsx 
        # Lee los datos del archivo Excel en un DataFrame
        df = pd.read_excel('listado_categorias.xlsx')
        
        # Inicializa una lista para almacenar objetos Docente
        lista_categorias_copia = []
        
        # Itera a través de las filas del DataFrame y crea objetos Docente
        for index, row in df.iterrows():
            
            categoria = Categoria(row['Codigo de la Categoria'], row['Categoria'])
            lista_categorias_copia.append(categoria)
        # --------------------------------------------------------------------------
        
        
        for autor in lista_autores_copia:
            if autor.get_codigo_autor() == codigo_autor:
                libro.asignar_autor(autor)
                print(f'\nAutor asignado al libro')
                print(f'\n\t\t registro Autor\nlibro: {libro.get_codigo_libro()} \nTitulo: {libro.get_titulo()} \nAutor: {autor.nombre}, {autor.apellido_paterno} {autor.apellido_materno}')
        
        for categoria in lista_categorias_copia:
            if categoria.get_codigo_categoria() == codigo_categoria:
                libro.asignar_categoria(categoria)
                print(f'\nCategoria asignado al libro')
                print(f'\n\t\tregistro Categoria \ncodigo: {libro.get_codigo_libro()} \nTitulo: {libro.get_titulo()} \nCategoria: {categoria.get_categoria()}')
                self.listado_libros.append(libro)
            


    def guardar_libros(self):
        
        print(f'\nLa cantidad de libros registrados es: {len(self.listado_libros)}')
        if len(self.listado_libros) > 0:
            data =[]
            
            for libro in self.listado_libros:
                nombre_autor = libro.mostrar_autor().nombre + ", " + libro.mostrar_autor().apellido_paterno + libro.mostrar_autor().apellido_materno
                data.append([libro.get_codigo_libro(), libro.get_titulo(), libro.get_anio(), libro.mostrar_autor().get_codigo_autor(), nombre_autor, libro.mostrar_categoria().get_codigo_categoria(), libro.mostrar_categoria().get_categoria()])
                columnas = ['Codigo del Libro', 'Titulo', 'Año', 'Codigo del Autor', 'Nombre del Autor', 'Codigo de la Categoria', 'Categoria']
            df = pd.DataFrame(data, columns=columnas)
            df.to_excel(self.registros_libros, index=False, engine='openpyxl')
            print('se registro correctamento los datos del libro')
        else:
            print('se genero un error al registrar el libro')


    def editar_libros(self, _indice, codigo_libro, titulo, anio, codigo_autor, codigo_categoria):
        
        # --------------------------------------------------------------------------
        # copiando el contenido de listado_autores.xlsx 
        # Lee los datos del archivo Excel en un DataFrame
        df = pd.read_excel('listado_autores.xlsx')
        
        # Inicializa una lista para almacenar objetos Docente
        lista_autores_copia = []
        
        # Itera a través de las filas del DataFrame y crea objetos Docente
        for index, row in df.iterrows():
            autor = Autor(row['Nombre'], row['Apellido Paterno'], row['Apellido Materno'], row['Fecha de Nacimiento'], row['Codigo del Autor'], row['Pais'], row['Editorial'])
            lista_autores_copia.append(autor)
        # --------------------------------------------------------------------------
        
        # --------------------------------------------------------------------------
        # copiando el contenido de listado_categorias.xlsx 
        # Lee los datos del archivo Excel en un DataFrame
        df = pd.read_excel('listado_categorias.xlsx')
        
        # Inicializa una lista para almacenar objetos Docente
        lista_categorias_copia = []
        
        # Itera a través de las filas del DataFrame y crea objetos Docente
        for index, row in df.iterrows():
            
            categoria = Categoria(row['Codigo de la Categoria'], row['Categoria'])
            lista_categorias_copia.append(categoria)
        # --------------------------------------------------------------------------
        
        # 'Codigo del Libro', 'Titulo', 'Año', 'Codigo del Autor', 'Nombre del Autor', 'Codigo de la Categoria', 'Categoria'
        
        for autor in lista_autores_copia:
            if autor.get_codigo_autor() == codigo_autor:
                autor_codigo = autor.get_codigo_autor()
                autor_nombre= autor.nombre + ', ' + autor.apellido_paterno + autor.apellido_materno
        
        for categoria in lista_categorias_copia:
            if categoria.get_codigo_categoria() == codigo_categoria:
                categoria_codigo = categoria.get_codigo_categoria()
                categoria_nombre = categoria.get_categoria()
        
        # Leer el archivo Excel y cargar los datos en un DataFrame
        df = pd.read_excel(self.registros_libros)
        
        # Actualizar los valores en el DataFrame con los nuevos datos
        df.loc[_indice, 'Codigo del Libro'] = codigo_libro
        df.loc[_indice, 'Titulo'] = titulo
        df.loc[_indice, 'Año'] = anio
        df.loc[_indice, 'Codigo del Autor'] = autor_codigo
        df.loc[_indice, 'Nombre del Autor'] = autor_nombre
        df.loc[_indice, 'Codigo de la Categoria'] = categoria_codigo
        df.loc[_indice, 'Categoria'] = categoria_nombre
        
        # Guardar los cambios en el archivo Excel
        df.to_excel(self.registros_libros, index=False, engine='openpyxl')
        
        return f'Docente en el índice {_indice + 1} actualizado correctamente.'


    def eliminar_libros(self, _indice):
        try:
            
            # Leer el archivo Excel y cargar los datos en un DataFrame
            df = pd.read_excel(self.registros_libros)
            
            # Verificar si el índice está dentro del rango válido
            if 0 <= _indice < len(df):
                # Eliminar el docente en el índice especificado
                # inplace=True, los cambios se aplican directamente al DataFrame original
                df.drop(_indice, inplace=True)
                
                # Guardar los cambios en el archivo Excel
                df.to_excel(self.registros_libros, index=False, engine='openpyxl')
                
                return f'libro en el índice {_indice + 1} eliminado correctamente.'
            else:
                return 'Índice de libro fuera de rango, no se pudo eliminar.'
            
        except FileNotFoundError:
            return 'Archivo de registros de libros no encontrado.'
        