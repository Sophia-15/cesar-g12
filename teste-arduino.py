import serial

while True:
  try:
    arduino = serial.Serial("COM7", 9600)
    print("Arduino conectado")
    break

  except:
    pass


while True:
  msg = str(arduino.readline())
  msg = msg[2:-5]
  print("msg")

  arduino.flush()