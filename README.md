# CADENASPUNTEROS — Control de acceso por edad con punteros en C++

**Materia:** Laboratorio de Programación (LPR) — E.E.S.T. N° 1 "Eduardo Ader", Vicente López  
**Curso:** 5° 3° A-B — **Docentes:** Prof. York, Prof. Ganduglia
**Alumno:** Lucas Del Pino

## ¿De qué trata?
Programa en C++ que pide una edad y decide si el acceso es aprobado (>= 18) o rechazado,
trabajando directamente sobre la memoria con **punteros**:

- `int* p = &edad;` → `p` guarda la dirección de memoria de `edad` (`&` = operador de dirección).
- `cin >> *p;` → `*` desreferencia: guarda el dato en el casillero de `edad`.
- `if (*p >= 18)` → evalúa el valor contenido en esa dirección.
- `cout << p;` muestra la dirección hexadecimal; `cout << *p;` muestra el valor.

## Estructura
```
cadenaspunteros/
├── .gitignore
├── LICENSE
├── README.md
├── docs/InformeProyectoCADENASPUNTEROS.pdf
├── src/main.cpp
└── capturas/ (ejecucion_punteros.png, esquema_ram.png)
```

## Compilar y ejecutar (PowerShell, Windows)
```
g++ src/main.cpp -o src/cadenaspunteros.exe
.\src\cadenaspunteros.exe
```
