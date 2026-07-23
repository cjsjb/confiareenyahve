\context Staff = "cello" <<
	\set Staff.instrumentName = "Cello"
	\set Staff.shortInstrumentName = "Clo."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-cello" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 4/4
		\clef "bass"

		\key d \major
		r4  |
		d 2. d 4  |
		a 2 g 4 fis  |
		e 2. e 4  |
%% 5
		b 8 a b cis' d' 4 d'  |
		g 2. g 4  |
		d 2. cis 8 d  |
		e 2. e 4  |
		fis 2. r4  |
%% 10
		R1*34  |
		\bar "|."
	}
>>
