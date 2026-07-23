\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "treble_8"
		\key d \major
		r4  |
		R1*7  |
		r2 r4 d 8 ( e )  |
%% 10
		fis 4 fis 8 g fis e d d  |
		e 2 ~ e 8 r cis d  |
		e 4 e 8 fis e d b, cis  |
		d 2 ~ d 8 r b b  |
		b 4 b 8 b b b b b  |
%% 15
		ais 4 ais ~ ais 8 r fis fis  |
		fis 4 fis 8 fis g g g g  |
		a 4 a ~ a d 8 e  |
		fis 8 e fis g fis e d d  |
		e 4 e ~ e 8 r cis d  |
%% 20
		e 4 e 8 fis e d b, cis  |
		d 4 d ~ d 8 r b b  |
		b 4 b 8 b b ~ b b b  |
		ais 4 ais ~ ais 8 r fis fis  |
		fis 4 fis 8 fis g g g g  |
%% 25
		a 2 ~ a 4 fis 8 g  |
		a 8 g a g a ( g ) a b  |
		a 4 a ~ a 8 r g a  |
		b 8 a b a 16 b 8. a 8 b cis'  |
		d' 4 d' ~ d' 8 r d d  |
%% 30
		d' 4 d' 8 ( cis' ) d' e' fis' d'  |
		d' 4 d' ~ d' 8 r b a  |
		b 8 a b a 16 b 8. a 8 b d'  |
		cis' 2 ~ cis' 8 r fis g  |
		a 4. g 8 a g a b  |
%% 35
		a 4 a ~ a 8 r g a  |
		b 4 b 8 a 16 b 8. a 8 b cis'  |
		d' 4 d' ~ d' 8 r d d  |
		d' 8 cis' d' cis' 16 d' 8. e' 8 fis' d'  |
		d' 4 d' ~ d' 8 r b a  |
%% 40
		b 4 b 8 a b a b d'  |
		cis' 2 ~ cis' 8 r d' cis'  |
		d' 4 b cis' 8 b ais g  |
		fis 1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-tenor" {
		"Oh," __ "Dios," "vuel" -- "ve" "mis" "o" -- "jos" "a" "ti," __
		"y" "mi" "vi" -- "da" "la" "pue" -- "da" "yo en" -- "tre" -- "gar" __
		"sin" "re" -- "ser" -- "vas," "ni" "tra" -- "bas" "ni" "te" -- "mo" -- "res," __
		"por" "a" -- "mor" "a" "Je" -- "sús" "y_a" "mis" "her" -- "ma" -- "nos." __

		"Mi" -- "ra" "es" -- "te" "sier" -- "vo" "tu" -- "yo" "que" "te" "bus" -- "ca," __
		"y" "de" -- "se" -- "a a" -- "gra" -- "dar" -- "te y" "com" -- "pla" -- "cer" -- "te." __
		"Tú e" -- "res" "Dios" "y" "Se" -- "ñor" __ "de" "la" "vi" -- "da," __
		"só" -- "lo a" "ti" "yo" "te" "quie" -- "ro" "a" -- "gra" -- "dar." __

		"For" -- "ta" -- "lé" -- "ce" -- "me es" -- "tas" "ma" __ "nos" "ca" -- "í" -- "das" __
		"y" "a" -- "fian" -- "za" "mis" "ro" -- "di" -- "llas" "va" -- "ci" -- "lan" -- "tes." __
		"En" "tu" "nom" -- "bre em" __ "pren" -- "de" -- "ré" "ba" -- "ta" -- "llas," __
		"ne" -- "ce" -- "si" -- "to" "de" "tu" "fuer" -- "za y" "tu" "va" -- "lor." __

		"Con" -- "fia" -- "ré en" "Yah" -- "vé" "to" -- "da" "mi" "vi" -- "da," __
		"y an" -- "da" -- "ré" "por" "ca" -- "mi" -- "nos" "lu" -- "mi" -- "no" -- "sos." __
		"El" "Se" -- "ñor" "es" "mi" "ri" -- "que" -- "za y" "mi" "te" -- "so" -- "ro." __
		"Él" "mi" "ro" -- "ca," "a" "quién" "he" "de" "te" -- "mer." __

		"Él" "mi" "ro" -- "ca, a" "quién" "he" "de" "te" -- "mer."
	}
>>
