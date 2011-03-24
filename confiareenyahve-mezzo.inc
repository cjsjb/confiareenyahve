        \context Staff = "Mezzo" \with { \consists Ambitus_engraver } <<
            \set Staff.instrumentName = "Mezzosoprano"
            \set Staff.shortInstrumentName = "M."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 4" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                c' 8 ( d' )  |
                e' 4 e' 8 f' e' d' c' c'  |
                b 2 ~ b 8 r b c'  |
                a 4 a 8 a b b a b  |
%% 5
                a 2 ~ a 8 r a b  |
                c' 4 c' 8 d' c' b a a  |
                gis 4 gis ~ gis 8 r gis a  |
                b 4 b 8 b c' c' c' d'  |
                e' 4 e' ( d' ) c' 8 d'  |
%% 10
                e' 8 d' e' f' e' d' c' c'  |
                b 4 b ~ b 8 r b c'  |
                a 4 a 8 a b b a b  |
                a 4 a ~ a 8 r a b  |
                c' 4 c' 8 d' c' ( b ) a a  |
%% 15
                gis 4 gis ~ gis 8 r gis a  |
                b 4 b 8 b c' c' c' d'  |
                e' 2 ( d' 4 ) c' 8 d'  |
                e' 8 d' e' d' e' ( d' ) e' f'  |
                d' 4 d' ~ d' 8 r d' e'  |
%% 20
                f' 8 e' f' e' 16 f' 8. e' 8 f' g'  |
                e' 4 e' ~ e' 8 r c' c'  |
                f' 4 f' 8 ( e' ) f' g' a' f'  |
                e' 4 e' ~ e' 8 r d' c'  |
                d' 8 c' d' c' 16 d' 8. c' 8 d' f'  |
%% 25
                e' 2 ~ e' 8 r c' d'  |
                e' 4. d' 8 e' d' e' f'  |
                d' 4 d' ~ d' 8 r d' e'  |
                f' 4 f' 8 e' 16 f' 8. e' 8 f' g'  |
                e' 4 e' ~ e' 8 r c' c'  |
%% 30
                f' 8 e' f' e' 16 f' 8. g' 8 a' f'  |
                e' 4 e' ~ e' 8 r d' c'  |
                d' 4 d' 8 c' d' c' d' f'  |
                e' 2 ~ e' 8 r f' e'  |
                f' 4 c' e' 8 d' c' b  |
%% 35
                a 1  |
                \bar "|."
            } % Voice
            \lyricsto "voice 4" \new Lyrics \lyricmode {
		"Oh," __ "Dios," "vuel" -- "ve" "mis" "o" -- "jos" "a" "ti,"
		"y" "mi" "vi" -- "da" "la" "pue" -- "da" "yo en" -- "tre" -- "gar"
		"sin" "re" -- "ser" -- "vas," "ni" "tra" -- "bas" "ni" "te" -- "mo" -- "res,"
		"por" "a" -- "mor" "a" "Je" -- "sús" "y_a" "mis" "her" -- "ma" -- "nos."

		"Mi" -- "ra" "es" -- "te" "sier" -- "vo" "tu" -- "yo" "que" "te" "bus" -- "ca,"
		"y" "de" -- "se" -- "a a" -- "gra" -- "dar" -- "te y" "com" -- "pla" -- "cer" -- "te."
		"Tú e" -- "res" "Dios" "y" "Se" -- "ñor" __ "de" "la" "vi" -- "da,"
		"só" -- "lo a" "ti" "yo" "te" "quie" -- "ro" "a" -- "gra" -- "dar."

		"For" -- "ta" -- "lé" -- "ce" -- "me es" -- "tas" "ma" -- "nos" "ca" -- "í" -- "das"
		"y" "a" -- "fian" -- "za" "mis" "ro" -- "di" -- "llas" "va" -- "ci" -- "lan" -- "tes."
		"En" "tu" "nom" -- "bre em" -- "pren" -- "de" -- "ré" "ba" -- "ta" -- "llas,"
		"ne" -- "ce" -- "si" -- "to" "de" "tu" "fuer" -- "za y" "tu" "va" -- "lor."

		"Con" -- "fia" -- "ré en" "Yah" -- "vé" "to" -- "da" "mi" "vi" -- "da,"
		"y an" -- "da" -- "ré" "por" "ca" -- "mi" -- "nos" "lu" -- "mi" -- "no" -- "sos."
		"El" "Se" -- "ñor" "es" "mi" "ri" -- "que" -- "za y" "mi" "te" -- "so" -- "ro."
		"Él" "mi" "ro" -- "ca," "a" "quién" "he" "de" "te" -- "mer."

		"Él" "mi" "ro" -- "ca, a" "quién" "he" "de" "te" -- "mer"
            } % Lyrics
        >> % Staff
