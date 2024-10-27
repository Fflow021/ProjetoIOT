import tkinter as tk
import serial
import time

port = 'COM3'
ard = serial.Serial(port,9600, timeout=0.1)

def main():
    root = tk.Tk()
    root.title("Janela")
    root.resizable(False, False)
    root.geometry("500x200")

    # Botão de quadrado
    buttonQuadrado = tk.Button(root, text="Criar quadrado")
    buttonQuadrado['command'] = enviarInteiro(1)
    buttonQuadrado.place(x = 100, y = 100)

    # Botão de Estrela
    buttonQuadrado = tk.Button(root, text="Criar estrela")
    buttonQuadrado['command'] = enviarInteiro(2)
    buttonQuadrado.place(x = 205, y = 100)

    # Botão de Circulo
    buttonQuadrado = tk.Button(root, text="Criar circulo")
    buttonQuadrado['command'] = enviarInteiro(3)
    buttonQuadrado.place(x = 300, y = 100)

    root.iconify() #Minimiza a tela
    root.update()
    root.deiconify() #Maximiza a tela
    root.mainloop()  #loop principal, impede o código de seguir e permite capturar inputs

def enviarInteiro(inteiroEnviado):
    ard.write(bytes(inteiroEnviado, 'utf-8')) 
    time.sleep(0.05)

main()