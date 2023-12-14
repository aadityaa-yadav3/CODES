import cv2 as cv
import numpy as np

capture = cv.VideoCapture('C:/Users/hp/Downloads/videoplayback.mp4', )

while True:

    # capturing each frame from the video one by one
    ed, frame = capture.read()
    if not ed:
        capture = cv.VideoCapture('C:/Users/hp/Downloads/videoplayback.mp4', )
        continue

    # applying blur to the frame
    blur = cv.GaussianBlur(frame, (3,3), cv.BORDER_DEFAULT)

    # converting the picture into grayscale
    hsv = cv.cvtColor(blur, cv.COLOR_BGR2HSV)
    
    # applying mask so that only white lines show up
    sensitivity = 30
    low_color = np.array([0,0,255-sensitivity])
    upper_color = np.array([255,sensitivity,255])
    mask = cv.inRange(hsv, low_color, upper_color)

    # dettecting edges in the frame using canny
    canny = cv.Canny(mask, 100, 120)

    # using hough transform to get the lines of lane
    lines = cv.HoughLinesP(canny, rho = 2, theta = 1*np.pi/180, threshold = 20, minLineLength = 10, maxLineGap = 10)
    if lines is not None:
        for i in lines:
            x1, x2, y1, y2 = i[0]
            cv.line(frame, (x1, x2), (y1, y2), (0,255,0), 3)

    # showing the lines overlapped on the origional frame
    cv.imshow('Video', frame)
    # cv.imshow('Mask', canny)

    if cv.waitKey(20) & 0xFF==ord('d'):
        break

capture.release()
cv.destroyAllWindows() 

cv.waitKey(0)