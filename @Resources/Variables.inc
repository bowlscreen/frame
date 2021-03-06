[Variables]
font=Segoe UI Light
color1=255,255,255,255
color2=255,255,255,192
color3=255,255,255,128
color4=32,32,32,216
color5=0,0,0,178
color6=255,255,255,192

12hr=0
sun1st=0
showBat=1
rate=5
light=0
clear=1

; Language must be all lowercase to work. Not all languages are supported, if yours isn't, nothing will appear.
; I don't own the site and can't do anything about adding your preferred language.
; Changing the url will cause the word of the day skin to stop working entirely.
wotdLang=korean
wotdURL=http://feeds.feedblitz.com/#wotdLang#-word-of-the-day&x=1

; For 'loc' use zipcode in US, if outside US: use the location code for your city found at https://weather.codes/
loc=68132
; If another language or unit(s) of measures are desired, simply go to https://weather.com/
; Using the controls at the top of the page, set your country and units of measure as desired.
; Copy and enter the Language from the resulting URL.

; For example, French would be Language=fr-FR
; The unit(s) of measure are automatic, based on the language.
; For instance, you cannot have the language be French, but the units be F imperial.

; Note however, that simply changing from imperial F to metric C units of measure while keeping the 
; langage as English can be done by using en-GB as the Language.
wxLang=en-US
wxURLcur=https://weather.com/#wxLang#/weather/today/l/#loc#
wxURLfor=https://weather.com/#wxLang#/weather/tenday/l/#loc#
; Comment out above line amd uncomment below line to prevent server requests during weather regExp debugging
;wxURLcur=file:///#CurrentPath#Current.txt
;wxURLfor=file:///#CurrentPath#EightDay.txt

; 'maxDown' and 'maxUp' are the download and upload speed of your connection in *Bits* per second
; Most ISPs and speed tests report speeds in Mbps (Mega*bits* per second), which is different than MBps (Mega*bytes* per second)
; If it is reported in MBps (Bytes), use google's conversion tool at https://www.google.com/search?q=megabytes+to+bits
maxDown=100000000
maxUp=10000000

res=3840x2160
block=16
frameX=960
frameY=540
frameW=1920
frameH=1080
baseX=944
baseY=428
