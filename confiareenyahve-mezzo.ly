\version "2.10.0"
#(ly:set-option 'point-and-click #f)
\header {
	title = "Confiaré en Yahvé toda mi vida"
	composer = "Federico Carranza"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Mezzosoprano"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\partial 4*1
	\time 4/4
}
globalTempo = {
	\tempo 4 = 70
}

\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "confiareenyahve-acordes.inc"
		\include "confiareenyahve-mezzo.inc"
	>>

	\layout { }
}
