\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 4
	\skip 1*4
	\skip 1*4

	% Oh, Dios...
	\mark \default
	\skip 1*4
	\skip 1*4

	% Mira este siervo tuyo...
	\mark \default
	\skip 1*4
	\skip 1*4

	% Fortaleceme estas manos caidas...
	\mark \default
	\skip 1*4
	\skip 1*4

	% Confiare en Yahve...
	\mark \default
	\skip 1*4
	\skip 1*4
	%\skip 1*2

	% El mi roca a quien he de temer.
	\mark \default
	%\skip 1*2
}
