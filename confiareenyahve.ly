% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Confiaré en Yahvé"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	first-page-number = 1
	ragged-bottom = ##t
}
global = {
	\partial 4*1
	\time 4/4
	\skip 4 \skip 1*34  %% 1-35
}
globalTempo = {
	\tempo 4 = 70  \skip 4 \skip 1*34
}

\score {
	\new StaffGroup <<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "confiareenyahve-acordes.inc"
		\include "confiareenyahve-soprano.inc"
		\include "confiareenyahve-mezzo.inc"
		\include "confiareenyahve-tenor.inc"

	>> % notes

	\layout { }
} % score
