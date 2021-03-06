; ===================================================
; @Include template file to populate all
; 8-Day Forecast Weather information from Weather.com
;====================================================

[@ForecastAll]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=#wxURLfor#
RegExp=(?siU)^(.*)$
UpdateDivider=-1
;Debug=2
;Debug2File=#@#EightDay.txt

; Parent for the 8-day Forecast

[@ForecastParent]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastAll]
StringIndex=0
RegExp=#Forecast#
LogSubstringErrors=0

; Children for the 8-day Forecast
; Day "1" is "Today". It will not include "high" and "low" temperatures. Use "current" for that.

[@ForecastDay1Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=1

[@ForecastDay1Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=2

[@ForecastDay1Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=3

[@ForecastDay1Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=4
Substitute="/":", "

[@ForecastDay1Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=5

[@ForecastDay1PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=6

[@ForecastDay2Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=7

[@ForecastDay2Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=8

[@ForecastDay2Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=9
RegExpSubstitute=1
Substitute="JAN":"Jan","FEB":"Feb","MAR":"Mar","APR":"Apr","MAY":"May","JUN":"Jun","JUL":"Jul","AUG":"Aug","SEP":"Sep","OCT":"Oct","NOV":"Nov","DEC":"Dec","([1]{1})$":"\1st","([2]{1})$":"\1nd","([3]{1})$":"\1rd","([0,4-9]{1})$":"\1th"

[@ForecastDay2Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=10
Substitute="Thunderstorms":"T-storms","/":", "

[@ForecastDay2High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=11

[@ForecastDay2HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=12

[@ForecastDay2Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=13

[@ForecastDay2LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=14

[@ForecastDay2Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=15

[@ForecastDay2PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=16

[@ForecastDay3Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=17

[@ForecastDay3Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=18

[@ForecastDay3Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=19
RegExpSubstitute=1
Substitute="JAN":"Jan","FEB":"Feb","MAR":"Mar","APR":"Apr","MAY":"May","JUN":"Jun","JUL":"Jul","AUG":"Aug","SEP":"Sep","OCT":"Oct","NOV":"Nov","DEC":"Dec","([1]{1})$":"\1st","([2]{1})$":"\1nd","([3]{1})$":"\1rd","([0,4-9]{1})$":"\1th"

[@ForecastDay3Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=20
Substitute="Thunderstorms":"T-storms","/":", "

[@ForecastDay3High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=21

[@ForecastDay3HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=22

[@ForecastDay3Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=23

[@ForecastDay3LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=24

[@ForecastDay3Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=25

[@ForecastDay3PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=26

[@ForecastDay4Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=27

[@ForecastDay4Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=28

[@ForecastDay4Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=29
RegExpSubstitute=1
Substitute="JAN":"Jan","FEB":"Feb","MAR":"Mar","APR":"Apr","MAY":"May","JUN":"Jun","JUL":"Jul","AUG":"Aug","SEP":"Sep","OCT":"Oct","NOV":"Nov","DEC":"Dec","([1]{1})$":"\1st","([2]{1})$":"\1nd","([3]{1})$":"\1rd","([0,4-9]{1})$":"\1th"

[@ForecastDay4Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=30
Substitute="Thunderstorms":"T-storms","/":", "

[@ForecastDay4High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=31

[@ForecastDay4HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=32

[@ForecastDay4Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=33

[@ForecastDay4LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=34

[@ForecastDay4Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=35

[@ForecastDay4PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=36

[@ForecastDay5Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=37

[@ForecastDay5Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=38

[@ForecastDay5Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=39
RegExpSubstitute=1
Substitute="JAN":"Jan","FEB":"Feb","MAR":"Mar","APR":"Apr","MAY":"May","JUN":"Jun","JUL":"Jul","AUG":"Aug","SEP":"Sep","OCT":"Oct","NOV":"Nov","DEC":"Dec","([1]{1})$":"\1st","([2]{1})$":"\1nd","([3]{1})$":"\1rd","([0,4-9]{1})$":"\1th"

[@ForecastDay5Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=40
Substitute="Thunderstorms":"T-storms","/":", "

[@ForecastDay5High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=41

[@ForecastDay5HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=42

[@ForecastDay5Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=43

[@ForecastDay5LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=44

[@ForecastDay5Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=45

[@ForecastDay5PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=46

[@ForecastDay6Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=47

[@ForecastDay6Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=48

[@ForecastDay6Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=49
RegExpSubstitute=1
Substitute="JAN":"Jan","FEB":"Feb","MAR":"Mar","APR":"Apr","MAY":"May","JUN":"Jun","JUL":"Jul","AUG":"Aug","SEP":"Sep","OCT":"Oct","NOV":"Nov","DEC":"Dec","([1]{1})$":"\1st","([2]{1})$":"\1nd","([3]{1})$":"\1rd","([0,4-9]{1})$":"\1th"

[@ForecastDay6Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=50
Substitute="Thunderstorms":"T-storms","/":", "

[@ForecastDay6High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=51

[@ForecastDay6HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=52

[@ForecastDay6Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=53

[@ForecastDay6LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=54

[@ForecastDay6Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=55

[@ForecastDay6PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=56

[@ForecastDay7Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=57

[@ForecastDay7Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=58

[@ForecastDay7Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=59
RegExpSubstitute=1
Substitute="JAN":"Jan","FEB":"Feb","MAR":"Mar","APR":"Apr","MAY":"May","JUN":"Jun","JUL":"Jul","AUG":"Aug","SEP":"Sep","OCT":"Oct","NOV":"Nov","DEC":"Dec","([1]{1})$":"\1st","([2]{1})$":"\1nd","([3]{1})$":"\1rd","([0,4-9]{1})$":"\1th"

[@ForecastDay7Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=60
Substitute="Thunderstorms":"T-storms","/":", "

[@ForecastDay7High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=61

[@ForecastDay7HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=62

[@ForecastDay7Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=63

[@ForecastDay7LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=64

[@ForecastDay7Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=65

[@ForecastDay7PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=66

[@ForecastDay8Name]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=67

[@ForecastDay8Icon]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=68

[@ForecastDay8Date]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=69
RegExpSubstitute=1
Substitute="JAN":"Jan","FEB":"Feb","MAR":"Mar","APR":"Apr","MAY":"May","JUN":"Jun","JUL":"Jul","AUG":"Aug","SEP":"Sep","OCT":"Oct","NOV":"Nov","DEC":"Dec","([1]{1})$":"\1st","([2]{1})$":"\1nd","([3]{1})$":"\1rd","([0,4-9]{1})$":"\1th"

[@ForecastDay8Conditions]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=70
Substitute="Thunderstorms":"T-storms","/":", "

[@ForecastDay8High]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=71

[@ForecastDay8HighSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=72

[@ForecastDay8Low]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=73

[@ForecastDay8LowSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=74

[@ForecastDay8Precipitation]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=75

[@ForecastDay8PrecipitationSymbol]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastParent]
StringIndex=76

; Parent for the 8-day Forecast Details Text

[@ForecastDetailsParent]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastAll]
StringIndex=0
RegExp=#DetailsForecast#
LogSubstringErrors=0

; Children for the 8-day Forecast Details Text

[@ForecastDay1Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=1

[@ForecastDay2Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=2

[@ForecastDay3Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=3

[@ForecastDay4Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=4

[@ForecastDay5Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=5

[@ForecastDay6Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=6

[@ForecastDay7Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=7

[@ForecastDay8Details]
Measure=WebParser
Group=Weather | WeatherEightDay
Url=[@ForecastDetailsParent]
StringIndex=8
