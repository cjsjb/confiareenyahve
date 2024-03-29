\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key c \major

		r4  |  R1*7  |  r2.
		c' 8 ( d' )  |
		e' 4 e' 8 f' e' d' c' c'  |
		d' 2 ~ d' 8 r b c'  |
		d' 4 d' 8 e' d' c' a b  |
%% 5
		c' 2 ~ c' 8 r c' d'  |
		e' 4 e' 8 f' e' d' c' c'  |
		d' 4 d' ~ d' 8 r b c'  |
		d' 4 d' 8 d' f' f' f' f'  |
		e' 4 e' ( d' ) c' 8 d'  |
%% 10
		e' 8 d' e' f' e' d' c' c'  |
		d' 4 d' ~ d' 8 r b c'  |
		d' 4 d' 8 e' d' c' a b  |
		c' 4 c' ~ c' 8 r c' d'  |
		e' 4 e' 8 f' e' ( d' ) c' c'  |
%% 15
		d' 4 d' ~ d' 8 r b c'  |
		d' 4 d' 8 d' f' f' f' f'  |
		e' 2 ( d' 4 ) c' 8 d'  |
		e' 8 d' e' d' e' ( d' ) e' f'  |
		g' 4 g' ~ g' 8 r d' e'  |
%% 20
		f' 8 e' f' e' 16 f' 8. e' 8 f' g'  |
		a' 4 a' ~ a' 8 r c' c'  |
		a' 4 a' 8 ( gis' ) a' b' c'' a'  |
		g' 4 g' ~ g' 8 r f' e'  |
		f' 8 e' f' e' 16 f' 8. e' 8 f' a'  |
%% 25
		gis' 2 ~ gis' 8 r c' d'  |
		e' 4. d' 8 e' d' e' f'  |
		g' 4 g' ~ g' 8 r d' e'  |
		f' 4 f' 8 e' 16 f' 8. e' 8 f' g'  |
		a' 4 a' ~ a' 8 r c' c'  |
%% 30
		a' 8 gis' a' gis' 16 a' 8. b' 8 c'' a'  |
		g' 4 g' ~ g' 8 r f' e'  |
		f' 4 f' 8 e' f' e' f' a'  |
		gis' 2 ~ gis' 8 r a' gis'  |
		a' 4 f' gis' 8 f' e' d'  |
%% 35
		c' 1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
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
