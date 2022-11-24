#include <iostream>

using namespace std;

typedef struct {
    string nombre;
    string apellido;
    int edad;
    bool presente;
    double calificacion;

    string toString() {
        return "Nombre: " + nombre + " " + apellido +" | edad: " + to_string(edad)+" | presente: " + to_string(presente) + " | calificación: " + to_string(calificacion);
    }
} tAlumno;

int main(int argc, char** argv) {
    int cantidad_alumnos;
    cout << "Formulario de Alumnos" << endl;
    cout << "¿Cuántos alumnos va a ingresar?" << endl;
    cin  >> cantidad_alumnos;
    tAlumno alumnos[cantidad_alumnos];

    for (int i = 0; i <= cantidad_alumnos - 1; i++) {
        cout << "\n" << endl;
        cout << "Va a ingresar los datos del alumno " << i + 1 << endl;

        cout << "Ingrese el nombre del Alumno" << endl;
        cin  >> alumnos[i].nombre;

        cout << "Ingrese el apellido del Alumno" << endl;
        cin  >> alumnos[i].apellido;

        cout << "Ingrese la edad del Alumno" << endl;
        cin  >> alumnos[i].edad;

        cout << "¿El alumno estuvo presente? (Ingrese 0 para NO, 1 para SÍ)" << endl;
        cin  >> alumnos[i].presente;

        cout << "¿Cómo queda su calificación final?" << endl;
        cin  >> alumnos[i].calificacion;
    }

    cout << "\n" << endl;
    cout << "Tabla de alumnos" << endl;
    for (int i = 0; i <= cantidad_alumnos - 1; i++) {
        cout << alumnos[i].toString() << endl;
    }

    return 0;
}
