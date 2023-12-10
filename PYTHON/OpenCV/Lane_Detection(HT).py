import cv2 as cv
import numpy as np

capture = cv.VideoCapture('C:/Users/hp/Downloads/drive.mp4', )

while True:
    ed, frame = capture.read()
    if not ed:
        capture = cv.VideoCapture('C:/Users/hp/Downloads/drive.mp4', )
        continue

    # Blur
    blur = cv.GaussianBlur(frame, (3,3), cv.BORDER_DEFAULT)

    # Grayscale
    hsv = cv.cvtColor(blur, cv.COLOR_BGR2HSV)
    
    # Color masking
    sensitivity = 30
    low_color = np.array([0,0,255-sensitivity])
    upper_color = np.array([255,sensitivity,255])
    mask = cv.inRange(hsv, low_color, upper_color)

    # Edge Detection
    canny = cv.Canny(mask, 100, 120)

    # Houghlines
    lines = cv.HoughLinesP(canny, rho = 2, theta = 1*np.pi/180, threshold = 50, minLineLength = 10, maxLineGap = 80)
    if lines is not None:
        for i in lines:
            x1, x2, y1, y2 = i[0]
            cv.line(frame, (x1, x2), (y1, y2), (0,255,0), 3)
    # Showing Image
    cv.imshow('Video', frame)
    # cv.imshow('Mask', canny)

    if cv.waitKey(20) & 0xFF==ord('d'):
        break

capture.release()
cv.destroyAllWindows() 

cv.waitKey(0)