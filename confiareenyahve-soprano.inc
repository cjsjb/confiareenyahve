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
		\key d \major
		r4  |
		R1*7  |
		r2 r4 d' 8 ( e' )  |
%% 10
		fis' 4 fis' 8 g' fis' e' d' d'  |
		e' 2 ~ e' 8 r cis' d'  |
		e' 4 e' 8 fis' e' d' b cis'  |
		d' 2 ~ d' 8 r d' e'  |
		fis' 4 fis' 8 g' fis' e' d' d'  |
%% 15
		e' 4 e' ~ e' 8 r cis' d'  |
		e' 4 e' 8 e' g' g' g' g'  |
		fis' 4 fis' ( e' ) d' 8 e'  |
		fis' 8 e' fis' g' fis' e' d' d'  |
		e' 4 e' ~ e' 8 r cis' d'  |
%% 20
		e' 4 e' 8 fis' e' d' b cis'  |
		d' 4 d' ~ d' 8 r d' e'  |
		fis' 4 fis' 8 g' fis' ( e' ) d' d'  |
		e' 4 e' ~ e' 8 r cis' d'  |
		e' 4 e' 8 e' g' g' g' g'  |
%% 25
		fis' 2 ( e' 4 ) d' 8 e'  |
		fis' 8 e' fis' e' fis' ( e' ) fis' g'  |
		a' 4 a' ~ a' 8 r e' fis'  |
		g' 8 fis' g' fis' 16 g' 8. fis' 8 g' a'  |
		b' 4 b' ~ b' 8 r d' d'  |
%% 30
		b' 4 b' 8 ( bes' ) b' cis'' d'' b'  |
		a' 4 a' ~ a' 8 r g' fis'  |
		g' 8 fis' g' fis' 16 g' 8. fis' 8 g' b'  |
		bes' 2 ~ bes' 8 r d' e'  |
		fis' 4. e' 8 fis' e' fis' g'  |
%% 35
		a' 4 a' ~ a' 8 r e' fis'  |
		g' 4 g' 8 fis' 16 g' 8. fis' 8 g' a'  |
		b' 4 b' ~ b' 8 r d' d'  |
		b' 8 bes' b' bes' 16 b' 8. cis'' 8 d'' b'  |
		a' 4 a' ~ a' 8 r g' fis'  |
%% 40
		g' 4 g' 8 fis' g' fis' g' b'  |
		bes' 2 ~ bes' 8 r b' bes'  |
		b' 4 g' bes' 8 g' fis' e'  |
		d' 1  |
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
