        \context Staff = "Tenor" << 
            \set Staff.instrumentName = "Tenor"
            \set Staff.shortInstrumentName = "T."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 5" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble_8"
                c 8 ( d )  |
                e 4 e 8 f e d c c  |
                d 2 r4 b, 8 c  |
                d 4 d 8 e d c a, b,  |
%% 5
                c 2 r4 a 8 a  |
                a 4 a 8 a a a a a  |
                gis 4 gis r e 8 e  |
                e 4 e 8 e f f f f  |
                g 4 g r c 8 d  |
%% 10
                e 8 d e f e d c c  |
                d 4 d r b, 8 c  |
                d 4 d 8 e d c a, b,  |
                c 4 c r a 8 a  |
                a 4 a 8 a a ~ a a a  |
%% 15
                gis 4 gis r e 8 e  |
                e 4 e 8 e f f f f  |
                g 2 ~ g 4 e 8 f  |
                g 8 f g f g _( f ) g a  |
                g 4 g r f 8 g  |
%% 20
                a 8 g a g 16 a 8. g 8 a b  |
                c' 4 c' r c 8 c  |
                c' 4 c' 8 ^( b ) c' d' e' c'  |
                c' 4 c' r a 8 g  |
                a 8 g a g 16 a 8. g 8 a c'  |
%% 25
                b 2 r4 e 8 f  |
                g 4. f 8 g f g a  |
                a 4 a r f 8 g  |
                a 4 a 8 g 16 a 8. g 8 a b  |
                c' 4 c' r c 8 c  |
%% 30
                c' 8 b c' b 16 c' 8. d' 8 e' c'  |
                c' 4 c' r a 8 g  |
                a 4 a 8 g a g a c'  |
                b 2 r4 c' 8 b  |
                c' 4 a b 8 a gis f  |
%% 35
                e 1  |
                \bar "|."
            } % Voice
            \lyricsto "voice 5" \new Lyrics \lyricmode {
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
