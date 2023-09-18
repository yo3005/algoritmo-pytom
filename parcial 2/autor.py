from persona import Persona

class Autor(Persona):
    codigo_autor = ''
    pais = ''
    editorial = ''

    def __init__(self, nombre, apellido_paterno, apellido_materno, fecha_nacimiento, codigo_autor, pais, editorial):
        super().__init__(nombre, apellido_paterno, apellido_materno, fecha_nacimiento)
        self.codigo_autor = codigo_autor
        self.pais = pais
        self.editorial = editorial

    def get_codigo_autor(self):
        return self.codigo_autor

    def set_codigo_autor(self, codigo_autor):
        self.codigo_autor = codigo_autor

    def get_pais(self):
        return self.pais

    def set_pais(self, pais):
        self.pais = pais

    def get_editorial(self):
        return self.editorial

    def set_editorial(self, editorial):
        self.editorial = editorial

    def imprimir(self):
        per_data = super().imprimir()
        return f'datos del autor : {per_data=},  {self.codigo_autor=}, {self.pais=}, {self.editorial=}'

