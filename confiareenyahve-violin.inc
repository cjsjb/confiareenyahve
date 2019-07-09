\context Staff = "violin" <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key c \major

		c' 8 d'  |
		e' 4 e' 8 e' f' e' d' c'  |
		d' 2 e' 4 f'  |
		f' 4 f' 8 f' g' f' e' d'  |
%% 5
		e' 2. e' 8 f'  |
		g' 4 a' 2 ~ a' 16 bes' a' 8  |
		g' 2 a' 4 g' 8 f'  |
		f' 4 f' 8 f' g' f' e' f'  |
		e' 2. r4  |
		}
>>
