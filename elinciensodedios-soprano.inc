\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"

		\key g \major
		R1*2  |
		r4 b' d'' e''  |
		e'' 4 d'' 4. r8 d'' d''  |
%% 5
		e'' 4. d'' 8 b' 4 d''  |
		d'' 2 d''  |
		r4 b' d'' e''  |
		e'' 4 ( d'' 2 ) r8 d''  |
		e'' 4. d'' 8 b' 4 d''  |
%% 10
		d'' 1  |
		r4 e'' 8 e'' d'' 8. b' 16 ~ b' 8 b'  |
		e'' 8. d'' 16 ~ d'' 8 e'' d'' 2  |
		r4 e'' d'' b'  |

		\time 2/4
		e'' 8. d'' 16 ~ d'' 8 e''  |
%% 15
		\time 4/4
		fis'' 2 fis''  |
		r4 g'' g'' g''  |
		fis'' 2 fis'' 4 fis'' 8 fis''  |
		g'' 4. fis'' 8 e'' 4 fis''  |
		g'' 2 g''  |
%% 20
		r4 g'' g'' g''  |
		fis'' 4 r8 fis'' e'' 8. d'' 16 ~ d'' 8 e''  |
		e'' 1  |
		r4 g'' 8 g'' g'' 4 g''  |
		fis'' 2 fis'' 4 r8 fis''  |
%% 25
		g'' 4. fis'' 8 e'' 4 fis''  |
		g'' 4. r8 g'' 4 g''  |
		g'' 2 g'' 4 r  |
		fis'' 4. fis'' 8 g'' 4 a''  |
		g'' 1  |
%% 30
		g'' 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		He -- mos en -- tra -- do
		al ser -- vi -- cio "de u" -- na vi -- da
		de rec -- ti -- tud, __
		pu -- re -- "za y" san -- ti -- dad,
		pa -- "ra es" -- tar con -- sa -- gra -- dos a Dios,
		co -- mo su pue -- "blo es" -- co -- gi -- do.

		So -- mos in -- cien -- so que se que -- ma an -- "te el" tro -- no
		de nues -- tro Dios en a -- do -- ra ción;
		an -- te tu pre -- sen -- cia, Se -- ñor, ve -- ni -- mos hoy
		"a o" -- fre -- cer -- te to -- da nues -- tra vi -- da.
	}
>>
