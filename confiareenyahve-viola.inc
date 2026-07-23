\context Staff = "viola" <<
	\set Staff.instrumentName = "Viola"
	\set Staff.shortInstrumentName = "Vla."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-viola" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "alto"
		\key d \major
		d' 8 e'  |
		fis' 4 fis' 8 fis' g' fis' e' d'  |
		cis' 2 d' 4 cis'  |
		e' 4 e' 8 e' d' e' d' cis'  |
%% 5
		b 2. b 8 cis'  |
		d' 4 g' 2.  |
		fis' 2 fis' 4 e' 8 d'  |
		e' 4 e' 8 e' fis' e' d' e'  |
		cis' 2. r4  |
%% 10
		R1*34  |
		\bar "|."
		}
>>
