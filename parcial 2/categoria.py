class Categoria:
    codigo_categoria = ''
    categoria = ''
    
    def __init__(self,codigo_categoria, categoria):
        self.codigo_categoria = codigo_categoria
        self.categoria = categoria

    def get_codigo_categoria(self):
        return self.codigo_categoria

    def set_codigo_categoria(self, codigo_categoria):
        self.codigo_categoria = codigo_categoria

    def get_categoria(self):
        return self.categoria

    def set_categoria(self, categoria):
        self.categoria = categoria

    def imprimir(self):
        return f'datos de la categoria :{self.codigo_categoria}, {self.categoria}'
    
