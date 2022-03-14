from pynput.keyboard import Key, Controller

teclado = Controller()
teclado.press('a')
teclado.press("c")
teclado.press("a")
teclado.release("a")

teclado.release("u")
teclado.release("a")
teclado.release("t")