# Función para calcular el IMC
def calcular_imc(peso, altura):
    # Calcula el IMC con la fórmula
    imc = peso / (altura ** 2)
    return imc

# Función para interpretar el IMC
def interpretar_imc(imc):
    if imc < 18.5:
        return "Bajo peso"
    elif 18.5 <= imc < 24.9:
        return "Peso normal"
    elif 25 <= imc < 29.9:
        return "Sobrepeso"
    else:
        return "Obesidad"

# Función principal del programa
def main():
    print("Calculadora de Índice de Masa Corporal (IMC)")

    
    peso = float(input("Ingresa tu peso en kg: "))
    altura = float(input("Ingresa tu altura en metros: "))

    # Calcular el IMC
    imc = calcular_imc(peso, altura)

    # Llamar a la función interpretar_imc() y mostrar la interpretación
    interpretacion = interpretar_imc(imc)

    # Mostrar el IMC y su interpretación
    print(f"Tu IMC es: {imc:.2f}")
    print(f"Interpretación: {interpretacion}")

# Ejecutar el programa
main()