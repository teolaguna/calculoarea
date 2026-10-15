/*
====================================================================
Materia: Laboratorio de Programacion (LPR)
E.E.S.T. N 1 "Eduardo Ader" - Vicente Lopez
Curso: 5 Ano
Profesor: Prof. York
Estudiante: Teo Laguna
Archivo: main.cpp
Objetivo: Calcular el area de un circulo mediante funciones modulares
           y simular una diana de tiro en ASCII.
====================================================================
*/
#include <iostream>
using namespace std;
// ====================================================================
// 1. PROTOTIPO DE LA FUNCION (Firma de la funcion)
// Le avisamos al compilador la existencia del modulo de calculo antes del main
// ====================================================================
double calcularAreaCirculo(double radio);

int main() {
    double radioEstudiante;

    // ====================================================================
    // REGLA OBLIGATORIA (EVITA EL PLAGIO):
    // Modifiquen la salida de pantalla agregando su Nombre y Apellido reales.
    // ====================================================================
    cout << "=====================================================" << endl;
    cout << " CALCULADORA DE AREA MODULAR - ESTUDIANTE: Teo Laguna" << endl;
    cout << "=====================================================" << endl;
    cout << "=> Ingrese el radio del circulo/diana (en cm): ";
    cin >> radioEstudiante;

    // FILTRO DE CONSISTENCIA (Validacion del dato geometrico)
    if (radioEstudiante <= 0) {
        cout << "[ERROR] El radio debe ser un valor positivo y mayor a cero." << endl;
        return 1; // Salida controlada del sistema indicando error en consola
    }

    // ====================================================================
    // 2. LLAMADA / INVOCACION DE LA FUNCION (COMPLETAR)
    // Convoquen al modulo 'calcularAreaCirculo' pasandole 'radioEstudiante'
    // y guarden el resultado en una nueva variable decimal llamada 'areaFinal'.
    //
    // SINTAXIS DE REFERENCIA (EJEMPLO GUIA):
    // Si quisieramos llamar a una funcion 'calcularIva' que recibe 'precio'
    // y guardar el resultado en 'ivaTotal', escribiriamos:
    // double ivaTotal = calcularIva(precio);
    // ====================================================================
    double areaFinal = calcularAreaCirculo(radioEstudiante);

    // ====================================================================
    // 3. SALIDA DE DATOS (COMPLETAR)
    // Muestren en pantalla el area calculada utilizando 'areaFinal'.
    //
    // SINTAXIS DE REFERENCIA (EJEMPLO GUIA):
    // Para mostrar texto y variables combinadas en pantalla:
    // cout << "El total es: " << costoTotal << " pesos." << endl;
    // ====================================================================
    cout << "El area del circulo es: " << areaFinal << " cm2." << endl;

    // ====================================================================
    // BONUS GAMIFICACION: RENDER DE LA DIANA EN CONSOLA
    // Dependiendo del radio que ingresaron, la consola simulara un blanco
    // de tiro correspondiente al tamanio calculado.
    // ====================================================================
    cout << "\n[SISTEMA] Dibujando escala de la Diana en la RAM..." << endl;
    if (radioEstudiante <= 5.0) {
        cout << "  .---.  " << endl;
        cout << " / X \\ -> [DIANA MINI / COMPACTA]" << endl;
        cout << " \\ * /  " << endl;
        cout << "  '---'  " << endl;
    } else if (radioEstudiante <= 12.0) {
        cout << "   .---.   " << endl;
        cout << "  / .---. \\  " << endl;
        cout << " | / O \\ | -> [DIANA ESTANDAR DE TIRO]" << endl;
        cout << " | \\ * / |  " << endl;
        cout << "  \\ '---' /  " << endl;
        cout << "   '---'   " << endl;
    } else {
        cout << "   .---.   " << endl;
        cout << "  / .---. \\  " << endl;
        cout << " | / .-. \\ |  " << endl;
        cout << " | | X | | -> [DIANA GIGANTE DE COBERTURA]" << endl;
        cout << " | \\ '-' / |  " << endl;
        cout << "  \\ '---' /  " << endl;
        cout << "   '---'   " << endl;
    }

    cout << "=====================================================" << endl;
    return 0; // Finalizacion exitosa de Windows (Codigo 0)
}

// ====================================================================
// 4. DEFINICION / DESARROLLO DE LA FUNCION (COMPLETAR)
// Implementen la formula matematica de la geometria utilizando variables
// locales y la constante de pi locked en memoria.
//
// SINTAXIS DE REFERENCIA (EJEMPLO GUIA):
// Para calcular un valor dentro de la funcion y retornarlo:
// double total = base * altura;
// return total;
// ====================================================================
double calcularAreaCirculo(double r) {
    const double PI = 3.1415926535;
    double area = PI * r * r;
    return area;
}
