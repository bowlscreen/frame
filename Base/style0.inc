[dShadowOut]
Meter=Image
ImageName=#@#shadowOut.png
X=0
Y=0
W=(#frameW#+(#block#*2))
UpdateDivider=-1

[dBGtop]
Meter=Image
X=#block#
Y=#block#
W=#frameW#
H=(#block#*6)
SolidColor=#color4#

[dBGbot]
Meter=Image
X=#block#
Y=(#frameH#+(#block#*7))
W=#frameW#
H=(#block#*6)
SolidColor=#color4#

[dShadowIn]
Meter=Image
ImageName=#@#shadowIn.png
X=#block#
Y=(#block#*7)
W=#frameW#
