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

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "treble"
		\key d \major
		d' 8 e'  |
		fis' 4 fis' 8 fis' g' fis' e' d'  |
		e' 2 fis' 4 g'  |
		g' 4 g' 8 g' a' g' fis' e'  |
%% 5
		fis' 2. fis' 8 g'  |
		a' 4 b' 2 ~ b' 16 c'' b' 8  |
		a' 2 b' 4 a' 8 g'  |
		g' 4 g' 8 g' a' g' fis' g'  |
		fis' 2. r4  |
%% 10
		R1*34  |
		\bar "|."
		}
>>
