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
		r4 b, 8 b, d 8. d e 8  |
		e 4 d 4. r8 d d  |
%% 5
		e 4. d 8 b, 4 d  |
		d 2 d  |
		r4 b, d e  |
		e 4 ( d 2 ) d 8 d  |
		e 4. d 8 b, 4 d  |
%% 10
		d 1  |
		r4 e d b,  |
		e 8. ( d 16 ~ d 8 ) e d 4 d  |
		r4 e fis fis  |
		\time 2/4
		g 8. fis 16 ~ fis 8 g  |
%% 15
		\time 4/4
		a 2 a  |
		r4 b b b  |
		a 2 a 4 a 8 a  |
		b 4. a 8 g 4 a  |
		c' 2 c'  |
%% 20
		r4 b b b  |
		a 4 r8 a g 8. fis 16 ~ fis 8 g  |
		g 1  |
		r4 b b b  |
		a 4. a 8 a 4 r8 a  |
%% 25
		b 4. a 8 g 4 a  |
		c' 4. c' 8 c' 4 c'  |
		b 2 b 4 r  |
		a 2 b 4 c'  |
		c' 1  |
%% 30
		b 1  |
		R1*10  |
		r4 e d b,  |
		e 8. d 16 ~ d 8 e d 4 d  |
		r4 e fis fis  |
		\time 2/4
		g 8. fis 16 ~ fis 8 g  |
%% 45
		\time 4/4
		a 4. a 8 a 2  |
		r4 b b b  |
		a 2 a 4 a 8 a  |
		b 4. a 8 g 4 a  |
		c' 2 c'  |
%% 50
		r4 b b b  |
		a 4 r8 a g 8. fis 16 ~ fis 8 g  |
		g 1  |
		r4 b 8 b b 4 b  |
		a 2 a 4 r8 a  |
%% 55
		b 4. a 8 g 4 a  |
		c' 4. r8 c' 4 c'  |
		b 2 b 4 r  |
		a 4. a 8 b 4 c'  |
		c' 1  |
%% 60
		b 1  |
		R1  |
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		Mit dem Dienst un -- seres Le -- bens
		ha -- ben wir heu -- te be -- gon -- nen
		der Rich -- tig -- keit, __
		Rein -- heit so -- wie Hei -- lig -- keit.

		Um uns dem Gott __ zu wid -- men
		als sei -- "ne er" -- wähl -- te Ge -- mein -- schaft.

		Wir sind der Weih -- rauch,
		wel -- cher vor dem Thron ver -- brannt wird
		in Ver -- eh -- rung für un -- se -- ren Gott.
		Vor dei -- ner Ge -- gen -- wart, wir kom -- men heu -- "te, Oh" Herr
		um un -- ser gan -- zes Le -- ben zu bie -- ten.

		"...pues" Cris -- "to es" quien nos sos -- tie -- ne,
		lle -- nán -- do -- nos de "su Es" -- pí -- ri -- tu.

		So -- mos in -- cien -- so que se que -- ma an -- "te el" tro -- no
		de nues -- tro Dios en a -- do -- ra ción;
		an -- te tu pre -- sen -- cia, Se -- ñor, ve -- ni -- mos hoy
		"a o" -- fre -- cer -- te to -- da nues -- tra vi -- da.
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		Mit dem Dinst uns -- ɍes Le -- bens
		ħa -- ben viᴙ ħoi -- te be -- go -- nen
		deᴙ Rij -- tig -- kait, __
		Rain -- ħait so -- vi Ħai -- lig -- kait.

		Um uns dem Gott __ tsu vid -- men
		als sai -- "ne eᴙ" -- vel -- te Ge -- main -- shaft.

		Viᴙ sind deᴙ Vai -- ɍauj,
		vel -- jeᴙ foᴙ dem Thɍon feᴙ -- bɍant viɍt
		in Feᴙ -- e -- ɍung für un -- se -- ɍen Gott.
		Foᴙ dai -- neᴙ Ge -- gen -- vart, viᴙ kom -- men ħoi -- "te, Oh" Ħerr
		um un -- seᴙ gan -- tses Le -- ben tsu bi -- ten.
	}
>>
