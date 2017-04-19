\context Staff = "baritono" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Barítono"
	\set Staff.shortInstrumentName = "B."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-baritono" {
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
		r4 e d b,  |
		\time 2/4
		e 8. d 16 ~ d 8 e  |
%% 15
		\time 4/4
		fis 2 fis  |
		r4 g g g  |
		fis 2 fis 4 fis 8 fis  |
		g 4. fis 8 e 4 fis  |
		g 2 g  |
%% 20
		r4 g g g  |
		fis 4 r8 fis e 8. d 16 ~ d 8 e  |
		e 1  |
		r4 g g g  |
		fis 4. fis 8 fis 4 r8 fis  |
%% 25
		g 4. fis 8 e 4 fis  |
		g 4. g 8 g 4 g  |
		g 2 g 4 r  |
		fis 2 g 4 a  |
		g 1  |
%% 30
		g 1  |
		R1*10  |
		r4 e d b,  |
		e 8. d 16 ~ d 8 e d 4 d  |
		r4 e d b,  |
		\time 2/4
		e 8. d 16 ~ d 8 e  |
%% 45
		\time 4/4
		fis 4. fis 8 fis 2  |
		r4 g g g  |
		fis 2 fis 4 fis 8 fis  |
		g 4. fis 8 e 4 fis  |
		g 2 g  |
%% 50
		r4 g g g  |
		fis 4 r8 fis e 8. d 16 ~ d 8 e  |
		e 1  |
		r4 g 8 g g 4 g  |
		fis 2 fis 4 r8 fis  |
%% 55
		g 4. fis 8 e 4 fis  |
		g 4. r8 g 4 g  |
		g 2 g 4 r  |
		fis 4. fis 8 g 4 a  |
		g 1  |
%% 60
		g 1  |
		R1  |
	}

	\lyricsto "voz-baritono" \new Lyrics \lyricmode {
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

	\lyricsto "voz-baritono" \new Lyrics \lyricmode {
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
