class Persona:
    codigo_persona= ""
    nombre = ""
    apellido_paterno = ""
    apellido_materno = ""
    fecha_nacimiento = ""

    # constructo
    def __init__(self,nombre, apellido_paterno, apellido_materno, fecha_nacimiento):
        self.nombre = nombre
        self.apellido_paterno = apellido_paterno
        self.apellido_materno = apellido_materno
        self.fecha_nacimiento = fecha_nacimiento

    def get_nombre(self):
        return self.nombre

    def set_nombre(self, nombre):
        self.nombre = nombre

    def get_apellido_paterno(self):
        return self.apellido_paterno

    def set_apellido_paterno(self, apellido_paterno):
        self.apellido_paterno = apellido_paterno

    def get_apellido_materno(self):
        return self.apellido_materno

    def set_apellido_materno(self, apellido_materno):
        self.apellido_materno = apellido_materno

    def get_fecha_nacimiento(self):
        return self.fecha_nacimiento

    def set_fecha_nacimiento(self, fecha_nacimiento):
        self.fecha_nacimiento = fecha_nacimiento

    def imprimir(self):
        apellidos = self.apellido_paterno + ' ' + self.apellido_materno        
        return f'{self.nombre=}, {apellidos=}, {self.fecha_nacimiento=}'
