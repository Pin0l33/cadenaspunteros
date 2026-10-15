/* 
   ====================================================================
   Materia: Laboratorio de Programación (LPR)
   E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
   Curso: 5° Año 3° División A
   Profesor: Prof. York, Prof. Ganduglia
   Archivo: main.cpp
   Objetivo: Control de accesos operando directamente sobre la RAM con punteros.
   ====================================================================
*/

#include <iostream>

using namespace std;

int main() {
    int edad = 0;
    int* p = &edad; // El puntero 'p' guarda la dirección de memoria física de 'edad'

    // REGLA OBLIGATORIA (EVITA EL PLAGIO): nombre y apellido reales.
    cout << "=====================================================" << endl;
    cout << "   CONTROL DE ACCESO RAM - ESTUDIANTE: Lucas Del Pino " << endl;
    cout << "=====================================================" << endl;

    cout << "=> Ingrese su edad: ";

    // 1. CAPTURA MEDIANTE DESREFERENCIACIÓN
    //    'cin >> *p;' guarda el número directamente en el casillero de 'edad'.
    //    'cin >> p;' (sin asterisco) intentaría sobrescribir la dirección del puntero.
    cin >> *p; // Captura el dato guardándolo directo en la memoria apuntada

    cout << "\n--- ANALIZANDO ACCESO SEGURO EN MEMORIA ---" << endl;

    // 2. CONDICIONAL CON PUNTERO DESREFERENCIADO
    //    '*p >= 18' evalúa el valor alojado en la memoria.
    //    Mostrar solo 'p' imprime la dirección hexadecimal (ej: 0x61fe1c).
    if (*p >= 18) {
        cout << "[ACCESO APROBADO] El usuario es mayor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    } else {
        cout << "[ACCESO RECHAZADO] Menor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    }

    cout << "=====================================================" << endl;
    return 0; // Finalización exitosa
}
