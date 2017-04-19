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

		R1*13  |
		\time 2/4
		R2  |
		\time 4/4
		R1  |
		r4 d' d' d'  |
		d' 2 d' 4 d' 8 d'  |
		e' 4. d' 8 b 4 d'  |
		e' 2 e'  |
%% 20
		r4 b d' e'  |
		d' 4 r8 d' c' 8. b 16 ~ b 8 c'  |
		b 1  |
		r4 d' d' d'  |
		d' 4. d' 8 d' 4 r8 d'  |
%% 25
		e' 4. d' 8 b 4 d'  |
		e' 4. e' 8 e' 4 e'  |
		d' 2 d' 4 r  |
		d' 2 d' 4 d'  |
		e' 1  |
%% 30
		d' 1  |
		R1*2  |
		r4 b 8 b d' 8. d' e' 8  |
		e' 4 ( d' 2 ) r8 d'  |
%% 35
		e' 4. d' 8 b 4 d'  |
		d' 2 d'  |
		r4 b 8 b d' 8. b b 8  |
		b 4 ( a 2 ) r8 a  |
		b 4. a 8 g 4 c'  |
%% 40
		a 1  |
		r4 c' b b  |
		c' 8. b 16 ~ b 8 c' a 4 a  |
		r4 c' b b  |
		\time 2/4
		c' 8. b 16 ~ b 8 c'  |
%% 45
		\time 4/4
		d' 4. d' 8 d' 2  |
		r4 d' d' d'  |
		d' 2 d' 4 d' 8 d'  |
		e' 4. d' 8 b 4 d'  |
		e' 2 e'  |
%% 50
		r4 b d' e'  |
		d' 4 r8 d' c' 8. b 16 ~ b 8 c'  |
		b 1  |
		r4 d' 8 d' d' 4 d'  |
		d' 2 d' 4 r8 d'  |
%% 55
		e' 4. d' 8 b 4 d'  |
		e' 4. r8 e' 4 e'  |
		d' 2 d' 4 r  |
		d' 4. d' 8 d' 4 d'  |
		e' 1  |
%% 60
		d' 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		Wir sind der Weih -- rauch,
		wel -- cher vor dem Thron ver -- brannt wird
		in Ver -- eh -- rung für un -- se -- ren Gott.
		Vor dei -- ner Ge -- gen -- wart, wir kom -- men heu -- "te, Oh" Herr
		um un -- ser gan -- zes Le -- ben zu bie -- ten.

		El a -- mor del Se -- ñor __
		go -- bier -- na nues -- tras vi -- das.
		No te -- ne -- mos ra -- zón __
		por -- qué des -- fa -- lle -- cer,
		pues Cris -- "to es" quien nos sos -- tie -- ne,
		lle -- nán -- do -- nos de "su Es" -- pí -- ri -- tu.

		So -- mos in -- cien -- so que se que -- ma an -- "te el" tro -- no
		de nues -- tro Dios en a -- do -- ra ción;
		an -- te tu pre -- sen -- cia, Se -- ñor, ve -- ni -- mos hoy
		"a o" -- fre -- cer -- te to -- da nues -- tra vi -- da.
	}
>>
