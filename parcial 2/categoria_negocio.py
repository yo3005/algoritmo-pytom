import pandas as pd
from openpyxl import Workbook
from categoria import Categoria

class CategoriaNegocio():
    listado_categoria=[]
    registros_categorias = 'listado_categorias.xlsx'

    def __init__(self):
        self.listado_categoria=[]

    def obtener_categorias(self):
        
        df = pd.read_excel(self.registros_categorias)
        listado_categoria = []
        for index, row in df.iterrows():
            categoria = Categoria(row['Codigo de la Categoria'], row['Categoria'])
            listado_categoria.append(categoria)
        
        return listado_categoria

    def registrar_categorias(self,codigo_categoria, categoria):

        print(f'\n\n\tDatos:\nCodigo: {codigo_categoria} \nCategoria: {categoria} ')
        self.listado_categoria = self.obtener_categorias()
        categoria = Categoria(codigo_categoria, categoria)

        self.listado_categoria.append(categoria)


    def guardar_categorias(self):
        print(f'\nCantidad de categorias asignados: {len(self.listado_categoria)}')
        
        if len(self.listado_categoria) > 0:
            data =[]
            for categoria in self.listado_categoria:
                data.append([categoria.codigo_categoria, categoria.categoria])
            columnas = ['Codigo de la Categoria', 'Categoria']
            df = pd.DataFrame(data, columns=columnas)
            df.to_excel(self.registros_categorias, index=False, engine='openpyxl')
            print (f'se registro el categoria correctamente')
        else:
            print (f'se genero un erro al registrar la categoria')



    def editar_categorias(self, _indice, codigo_categoria, categoria):
        
        # Leer el archivo Excel y cargar los datos en un DataFrame
        df = pd.read_excel(self.registros_categorias)
        
        # Actualizar los valores en el DataFrame con los nuevos datos
        df.loc[_indice, 'Codigo de la Categoria'] = codigo_categoria
        df.loc[_indice, 'Categoria'] = categoria

        # Guardar los cambios en el archivo Excel
        df.to_excel(self.registros_categorias, index=False, engine='openpyxl')
        
        return f'categoria en el índice {_indice + 1} actualizado correctamente.'


    def eliminar_categoria(self, _indice):
        try:
            
            # Leer el archivo Excel y cargar los datos en un DataFrame
            df = pd.read_excel(self.registros_categorias)
            
            # Verificar si el índice está dentro del rango válido
            if 0 <= _indice < len(df):
                # Eliminar el categoria en el índice especificado
                # inplace=True, los cambios se aplican directamente al DataFrame original
                df.drop(_indice, inplace=True)
                
                # Guardar los cambios en el archivo Excel
                df.to_excel(self.registros_categorias, index=False, engine='openpyxl')
                
                return f'categoria en el índice {_indice + 1} eliminado correctamente.'
            else:
                return 'Índice de categoria fuera de rango, no se pudo eliminar.'
            
        except FileNotFoundError:
            return 'Archivo de registros de categorias no encontrado.'
