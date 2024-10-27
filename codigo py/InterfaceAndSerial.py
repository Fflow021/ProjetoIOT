import tkinter as tk
import serial
import time

port = 'COM3'
arduino = serial.Serial(port,9600,.1)

def main():
    root = tkinter.Tk()
    root.title("Titulo da janela")
    root.resizable(False, False)
    root.geometry("600x600")

    # Botão de quadrado
    buttonQuadrado = tk.Button(root, text="Criar quadrado")
    buttonQuadrado['command'] = enviarInteiro(1)
    buttonQuadrado.place(x = 100, y = 100)

    # Botão de Estrela
    buttonQuadrado = tk.Button(root, text="Criar estrela")
    buttonQuadrado['command'] = enviarInteiro(2)
    buttonQuadrado.place(x = 200, y = 100)

    # Botão de Circulo
    buttonQuadrado = tk.Button(root, text="Criar circulo")
    buttonQuadrado['command'] = enviarInteiro(3)
    buttonQuadrado.place(x = 300, y = 100)

    root.iconify() #Minimiza a tela
    root.update()
    root.deiconify() #Maximiza a tela
    root.mainloop()  #loop principal, impede o código de seguir e permite capturar inputs

def enviarInteiro(inteiroEnviado):
    arduino.write(bytes(inteiroEnviado, 'utf-8')) 
    time.sleep(0.05)

main()