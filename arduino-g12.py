import webbrowser
from pymata4 import pymata4
from time import sleep

HIGH = 1
LOW = 0

trig_pin = 10
echo_pin = 8
led = 12

board = pymata4.Pymata4()

def distance(data):
  print(f"Distância de {data[2]} CM: ")
  sleep(0.125)

board.set_pin_mode_digital_output(led)
board.set_pin_mode_sonar(trig_pin, echo_pin, distance)

while True:
  distance_value = board.sonar_read(trig_pin)

  if distance_value < 15:
    webbrowser.open('https://dinosaur-game.io/')
    board.digital_write(led, HIGH)
  else:
    board.digital_write(led, LOW)