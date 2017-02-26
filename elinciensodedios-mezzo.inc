\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
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
		r4 b' d'' b'  |
		b' 4 ( a' 2 ) r8 a'  |
		b' 4. a' 8 g' 4 c''  |
%% 10
		a' 1  |
		r4 c'' 8 c'' b' 8. b' 16 ~ b' 8 b'  |
		c'' 8. b' 16 ~ b' 8 c'' a' 2  |
		r4 c'' b' b'  |
		\time 2/4
		c'' 8. b' 16 ~ b' 8 c''  |
%% 15
		\time 4/4
		d'' 2 d''  |
		r4 d'' d'' d''  |
		d'' 2 d'' 4 d'' 8 d''  |
		e'' 4. d'' 8 b' 4 d''  |
		e'' 2 e''  |
%% 20
		r4 b' d'' e''  |
		d'' 4 r8 d'' c'' 8. b' 16 ~ b' 8 c''  |
		b' 1  |
		r4 d'' 8 d'' d'' 4 d''  |
		d'' 2 d'' 4 r8 d''  |
%% 25
		e'' 4. d'' 8 b' 4 d''  |
		e'' 4. r8 e'' 4 e''  |
		d'' 2 d'' 4 r  |
		d'' 4. d'' 8 d'' 4 d''  |
		e'' 1  |
%% 30
		d'' 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
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
