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

		\clef "treble_8"
		\key c \major

		r4  |  R1*7  |  r2.
		c 8 ( d )  |
		e 4 e 8 f e d c c  |
		d 2 ~ d 8 r b, c  |
		d 4 d 8 e d c a, b,  |
%% 5
		c 2 ~ c 8 r a a  |
		a 4 a 8 a a a a a  |
		gis 4 gis ~ gis 8 r e e  |
		e 4 e 8 e f f f f  |
		g 4 g ~ g c 8 d  |
%% 10
		e 8 d e f e d c c  |
		d 4 d ~ d 8 r b, c  |
		d 4 d 8 e d c a, b,  |
		c 4 c ~ c 8 r a a  |
		a 4 a 8 a a ~ a a a  |
%% 15
		gis 4 gis ~ gis 8 r e e  |
		e 4 e 8 e f f f f  |
		g 2 ~ g 4 e 8 f  |
		g 8 f g f g ( f ) g a  |
		g 4 g ~ g 8 r f g  |
%% 20
		a 8 g a g 16 a 8. g 8 a b  |
		c' 4 c' ~ c' 8 r c c  |
		c' 4 c' 8 ( b ) c' d' e' c'  |
		c' 4 c' ~ c' 8 r a g  |
		a 8 g a g 16 a 8. g 8 a c'  |
%% 25
		b 2 ~ b 8 r e f  |
		g 4. f 8 g f g a  |
		g 4 g ~ g 8 r f g  |
		a 4 a 8 g 16 a 8. g 8 a b  |
		c' 4 c' ~ c' 8 r c c  |
%% 30
		c' 8 b c' b 16 c' 8. d' 8 e' c'  |
		c' 4 c' ~ c' 8 r a g  |
		a 4 a 8 g a g a c'  |
		b 2 ~ b 8 r c' b  |
		c' 4 a b 8 a gis f  |
%% 35
		e 1  |
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
