import serial
import webbrowser
from time import sleep

PORT = 'COM9'

arduino = serial.Serial(PORT, 9600)

while True:
  cu = ""
  msg = str(arduino.readline())
  for i in range(len(msg)):

    if i == 2 or i == 3 or i == 4 or i == 5:
      cu += msg[i]

  if cu == 'abre':
    # o cu abriu!
    webbrowser.open("https://dinosaur-game.io")

  arduino.flush()
