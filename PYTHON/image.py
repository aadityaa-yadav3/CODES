import cv2 as cv
import numpy as np

capture = cv.VideoCapture('C:/Users/hp/Downloads/videoplayback.mp4', )

while True:
    ed, frame = capture.read()
    if not ed:
        capture = cv.VideoCapture('C:/Users/hp/Downloads/videoplayback.mp4', )
        continue
    # Grayscale
    gray = cv.cvtColor(frame, cv.COLOR_BGR2HSV)
    # Color masking
    low_color = np.array([190, 190, 190])
    high_color = np.array([255, 255, 255])
    mask = cv.inRange(gray, low_color, high_color)
    # Blur
    blur = cv.GaussianBlur(gray, (3,3), cv.BORDER_DEFAULT)
    # Edge Detection
    canny = cv.Canny(blur, 340, 400)
    # Dialation
    dialated = cv.dilate(canny, (3,3), iterations = 1)
    # Houghlines
    lines = cv.HoughLinesP(dialated, rho = 1, theta = 1*np.pi/100, threshold = 20, minLineLength = 40, maxLineGap = 20)
    for i in lines:
        x1, x2, y1, y2 = i[0]
        cv.line(frame, (x1, x2), (y1, y2), (0,255,0), 3)
    # Showing Image
    cv.imshow('Dialated', frame)

    if cv.waitKey(20) & 0xFF==ord('d'):
        break

capture.release()
cv.destroyAllWindows() 

cv.waitKey(0)