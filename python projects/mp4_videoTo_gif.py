# from moviepy.editor import *

# video = videoFileClip("end.mp4")
# video.write_gif("final.gif")


# import barcode
# import barcode
from barcode.writer import ImageWriter

text = "python sudhir "
text1 = str(text)
code = barcode.get_barcode_class("code123")
image = code(text ,writer = ImageWrite())
save_img = image.save("my final image ")
