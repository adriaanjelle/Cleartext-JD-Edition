[Variables]
Player=foobar2000
; This is where you specify the player you're using. Valid values (and compatible players) are:
; AIMP, foobar2000, iTunes, MusicBee and WebNowPlaying.

; NOTE: Additional steps are needed for most players. See instructions here:
; https://github.com/adriaanjelle/Rainmeter-Music-Player-Guide

; ================================================

Alignment=Left
; The alignment of the skin. Valid values are "Left", "Center" and "Right".

Flip=False
; Flip the layout of the skin or not. Valid values are "True" and "False".

TitleScroll=True
; Enable or disable the scrolling title when the length of the title exceeds the length given by the TextLength option (you can find that below).
; Valid values are "True" and "False".
; Enabling this option will use considerably more resources. I recommend disabling it if you're using a laptop.

TitleArtistSwap=False
; Enabling this option will swap the positions of the title and artist text.
; Valid values are "True" and "False".

HidePlayer=False
; If this option is enabled, the skin will hide when there's no music player detected.
; Valid values are "True" and "False".
; WARNING: If you want to change any options while HidePlayer is enabled and there is no music player detected, you'll have to
; browse to this file manually (@Resources\Variables.inc) to access the settings.

; ================================================

Scale=1.00
; A size multiplier for the skin. Please stick to multiples of 0.5.

ControlsSize=10
; The size of the controls text in pixels.

NowPlayingSize=16
; The size of the "Now Playing" text in pixels.

ProgressBarThickness=2
; The thickness of the progress bar in pixels. Set this to "0" if you want to hide it.

Padding=16
; The amount of pixels between the text and the progress bar.

TextLength=240
; The maximum length of the text in pixels.

TitleSize=24
; The size of the title text in pixels.
ArtistSize=12
; The size of the artist text in pixels.

; ================================================

Font=Roboto Flex Normal
; The font used for the text.

Color=255, 255, 255
; The color of the text. Valid values are formatted "RRR, GGG, BBB" with values of 0-255.
