import tkinter as tk
import serial
import time

port = 'COM7'
ard = serial.Serial(port,9600)

def main():
    root = tk.Tk()
    root.title("Janela")
    root.resizable(False, False)
    root.geometry("500x200")

    # Botão de quadrado
    buttonQuadrado = tk.Button(root, text="Criar quadrado")
    buttonQuadrado['command'] = lambda: enviarOpcao(1)
    buttonQuadrado.place(x = 100, y = 100)

    # Botão de Estrela
    buttonQuadrado = tk.Button(root, text="Criar estrela")
    buttonQuadrado['command'] = lambda: enviarOpcao(2)
    buttonQuadrado.place(x = 205, y = 100)

    # Botão de Circulo
    buttonQuadrado = tk.Button(root, text="Criar circulo")
    buttonQuadrado['command'] = lambda: enviarOpcao(3)
    buttonQuadrado.place(x = 300, y = 100)

    #resposta = ard.readline().decode().strip()
    #print(resposta)

    root.iconify() #Minimiza a tela
    root.update()
    root.deiconify() #Maximiza a tela
    root.mainloop()  #loop principal, impede o código de seguir e permite capturar inputs

def enviarOpcao(inteiroEnviado):
    ard.write(f"{inteiroEnviado}\n".encode())
    time.sleep(0.05)

main()