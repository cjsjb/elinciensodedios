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

		R1*13  |
		\time 2/4
		R2  |
		\time 4/4
		R1  |
		r4 g' g' g'  |
		fis' 2 fis' 4 fis' 8 fis'  |
		g' 4. fis' 8 e' 4 fis'  |
		g' 2 g'  |
%% 20
		r4 g' g' g'  |
		fis' 4 r8 fis' e' 8. d' 16 ~ d' 8 e'  |
		e' 1  |
		r4 g' g' g'  |
		fis' 4. fis' 8 fis' 4 r8 fis'  |
%% 25
		g' 4. fis' 8 e' 4 fis'  |
		g' 4. g' 8 g' 4 g'  |
		g' 2 g' 4 r  |
		fis' 2 g' 4 a'  |
		g' 1  |
%% 30
		g' 1  |
		R1*2  |
		r4 b 8 b d' 8. d' e' 8  |
		e' 4 ( d' 2 ) r8 d'  |
%% 35
		e' 4. d' 8 b 4 d'  |
		d' 2 d'  |
		r4 b 8 b d' 8. d' e' 8  |
		e' 4 ( d' 2 ) r8 d'  |
		e' 4. d' 8 b 4 d'  |
%% 40
		d' 1  |
		r4 e' d' b  |
		e' 8. d' 16 ~ d' 8 e' d' 4 d'  |
		r4 e' d' b  |
				\once \override Staff.TimeSignature #'style = #'()
		\time 2/4
		e' 8. d' 16 ~ d' 8 e'  |
%% 45
				\time 4/4
		fis' 4. fis' 8 fis' 2  |
		r4 b' b' b'  |
		a' 2 a' 4 a' 8 a'  |
		b' 4. a' 8 g' 4 a'  |
		c'' 2 c''  |
%% 50
		r4 b' b' b'  |
		a' 4 r8 a' g' 8. fis' 16 ~ fis' 8 g'  |
		g' 1  |
		r4 b' 8 b' b' 4 b'  |
		a' 2 a' 4 r8 a'  |
%% 55
		b' 4. a' 8 g' 4 a'  |
		c'' 4. r8 c'' 4 c''  |
		b' 2 b' 4 r  |
		a' 4. a' 8 b' 4 c''  |
		c'' 1  |
%% 60
		b' 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		Wir sind der Weih -- rauch,
		wel -- cher vor dem Thron ver -- brannt wird
		in Ve -- reh -- rung für un -- se -- ren Gott.
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
