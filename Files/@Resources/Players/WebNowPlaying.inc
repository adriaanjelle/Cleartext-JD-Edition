[mState]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=State

RegExpSubstitute=1
Substitute="^0$":"Play", "^1$":"Pause", "^2$":"Play", "^3$":"Replay"

OnChangeAction=[!UpdateMeter *] [!UpdateMeter *] [!Redraw]

[mStatus]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Status

IfCondition=(mStatus=0) && ([#[#HidePlayer]]=1)
IfTrueAction=[!Hide]
IfFalseAction=[!Show]

[mTitle]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Title

RegExpSubstitute=1
Substitute="^$":"N/A", "^0$":"N/A"

OnChangeAction=[!UpdateMeasure mTitleScrollReset] [!UpdateMeter *] [!UpdateMeter *] [!Redraw]

[mArtist]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Artist

RegExpSubstitute=1
Substitute="^$":"N/A", "^0$":"N/A"

OnChangeAction=[!UpdateMeasure mTitleScrollReset] [!UpdateMeter *] [!UpdateMeter *] [!Redraw]

[mProgress]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Progress

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]
Disabled=([#ProgressBarThickness]=0 ? 1 : 0)
