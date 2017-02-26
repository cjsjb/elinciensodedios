\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble_8"

		\key g \major
		R1*2  |
		r4 b, d e  |
		e 4 d 4. r8 d d  |
%% 5
		e 4. d 8 b, 4 d  |
		d 2 d  |
		r4 b, d e  |
		e 4 ( d 2 ) r8 d  |
		e 4. d 8 b, 4 d  |
%% 10
		d 1  |
		r4 e 8 e d 8. b, 16 ~ b, 8 b,  |
		e 8. d 16 ~ d 8 e d 2  |
		r4 e d b,  |
		\time 2/4
		e 8. d 16 ~ d 8 e  |
%% 15
		\time 4/4
		fis 2 fis  |
		r4 b b b  |
		a 2 a 4 a 8 a  |
		b 4. a 8 g 4 a  |
		c' 2 c'  |
%% 20
		r4 b b b  |
		a 4 r8 a g 8. fis 16 ~ fis 8 g  |
		g 1  |
		r4 b 8 b b 4 b  |
		a 2 a 4 r8 a  |
%% 25
		b 4. a 8 g 4 a  |
		c' 4. r8 c' 4 c'  |
		b 2 b 4 r  |
		a 4. a 8 b 4 c'  |
		c' 1  |
%% 30
		b 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
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
