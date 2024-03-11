//Angelyn Judith Diaz Zeceña 5090-23-1407
//Programa 2 Registro de estudiantes

#include <iostream>
#include <string>

using namespace std;

//  Aqui se define  la clase
class Estudiante {
private:
    //  Aqui podemos ver los atributos privados que sirven para almacenar  la información del estudiante
    string nombre;
    string apellido;
    int edad;
    string curso;
    string cumpleanios;

public:
    // Aqui se utilizan métodos para establecer los datos
    void setNombre(const string& nuevoNombre) {
        nombre = nuevoNombre;
    }

    void setApellido(const string& nuevoApellido) {
        apellido = nuevoApellido;
    }

    void setEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }

    void setCurso(const string& nuevoCurso) {
        curso = nuevoCurso;
    }

    void setCumpleanios(const string& nuevoCumpleanios) {
        cumpleanios = nuevoCumpleanios;
    }

    //  Aqui se utilizan métodos para obtener  los datos
    string getNombre() const {
        return nombre;
    }

    string getApellido() const {
        return apellido;
    }

    int getEdad() const {
        return edad;
    }

    string getCurso() const {
        return curso;
    }

    string getCumpleanios() const {
        return cumpleanios;
    }

    // Aqui se utilizan métodos para mostrar información sobre el estudiante
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << " " << apellido << endl;
        cout << "Edad: " << edad << " anos" << endl;
        cout << "Curso: " << curso << endl;
        cout << "Cumpleanios: " << cumpleanios << endl;
    }
};

int main() {
    cout << "-----Hola personita, bienvenida a registro de estudiantes-----" << endl;

    // Aqui se crea una instancia de la clase 
    Estudiante estudiante;

    // Aqui se le Solicita al usuario que ingrese la información del estudiante
    string nombre, apellido, curso, cumpleanios;
    int edad;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    estudiante.setNombre(nombre);

    cout << "Ingrese el apellido del estudiante: ";
    getline(cin, apellido);
    estudiante.setApellido(apellido);

    cout << "Ingrese la edad del estudiante: ";
    cin >> edad;
    estudiante.setEdad(edad);

    cin.ignore();

    cout << "Ingrese el curso del estudiante: ";
    getline(cin, curso);
    estudiante.setCurso(curso);

    cout << "Ingrese el cumpleanios del estudiante: ";
    getline(cin, cumpleanios);
    estudiante.setCumpleanios(cumpleanios);

    //  y para finalizar, aqui se muestra la información del estudiante al usuario.
    cout << "\nInformacion del Estudiante:" << endl;
    estudiante.mostrarInformacion();

    return 0;
}
