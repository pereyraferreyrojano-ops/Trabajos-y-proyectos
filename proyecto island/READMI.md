# 🧮 Calculadora de IMC (Índice de Masa Corporal)

Una aplicación simple en Python que permite calcular el **Índice de Masa Corporal (IMC)** a partir del peso y la altura ingresados por el usuario, mostrando además una interpretación del resultado.

---

## 📖 Descripción

Este programa está pensado como una herramienta básica para comprender cómo se calcula el IMC y cómo se clasifican sus resultados.

El usuario ingresa:
- Su peso en kilogramos (kg)
- Su altura en metros (m)

El sistema:
1. Calcula el IMC usando la fórmula estándar
2. Determina la categoría correspondiente
3. Muestra el resultado en pantalla

---

## 🧠 ¿Qué es el IMC?

El **Índice de Masa Corporal (IMC)** es un indicador utilizado para evaluar si una persona tiene un peso adecuado en relación con su altura.

Se calcula con la siguiente fórmula:

---

## 📊 Clasificación del IMC

El programa interpreta el resultado según los siguientes rangos:

| IMC            | Categoría      |
|----------------|---------------|
| Menor a 18.5   | Bajo peso     |
| 18.5 - 24.9    | Peso normal   |
| 25 - 29.9      | Sobrepeso     |
| 30 o más       | Obesidad      |

---

## ⚙️ Funcionamiento del programa

El código está organizado en tres funciones principales:

### 🔹 `calcular_imc(peso, altura)`
Calcula el IMC aplicando la fórmula matemática.

### 🔹 `interpretar_imc(imc)`
Devuelve una cadena de texto con la categoría correspondiente según el valor del IMC.

### 🔹 `main()`
Controla la ejecución del programa:
- Solicita los datos al usuario
- Llama a las funciones de cálculo e interpretación
- Muestra los resultados

---

