import serial as connector
import time

arduino = connector.Serial("COM3", baudrate=9600, timeout=1)

while(True):
    arduino.write("1".encode())
    time.sleep(1)