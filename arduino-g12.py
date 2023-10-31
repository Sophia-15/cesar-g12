import serial

while True:
  try:
    arduino = serial.Serial('COM9', 9600)
    break
  except:
    pass

while True:
  msg = arduino.readline()
  print(msg.decode())

  arduino.flush()