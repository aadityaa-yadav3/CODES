import numpy as np
import cv2
import glob
import imutils

image_paths = glob.glob(r"unstitchedImages/*.jpg")
images = []
print(image_paths)

for image in image_paths:
    img = cv2.imread(image)
    images.append(img)
    cv2.imshow("Image", img)
    cv2.waitKey(0)

imageStitcher = cv2.Stitcher_create()

error, stitchedImage = imageStitcher.stitch(images)

if not error:
    cv2.imwrite("stitchedOutput.png", stitchedImage)
    cv2.imshow("StitchedImage", stitchedImage)
    cv2.waitKey(0)
