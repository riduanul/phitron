import pyautogui


for i in range(0, 3):
    pyautogui.write('Hello World!', interval=0.23)
    pyautogui.press('enter')
