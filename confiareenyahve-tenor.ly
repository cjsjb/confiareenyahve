% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Confiaré en Yahvé"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Tenor"
}
#(set-global-staff-size 20)
\paper {
	#(set-paper-size "letter")
	#(define line-width (* 7 in))
}

global = {
	\partial 4*1
	\time 4/4
	\skip 4 \skip 1*42  %% 1-43
}
globalTempo = {
	\tempo 4 = 70  \skip 4 \skip 1*42
}

\score {
	\new StaffGroup <<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\transpose c d { \include "confiareenyahve-acordes.inc" }
		\transpose c d { \include "confiareenyahve-tenor.inc" }

	>> % notes

	\layout { }
} % score
