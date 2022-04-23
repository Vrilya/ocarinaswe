DEFINE_MESSAGE(0x0001, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x2D")  QUICKTEXT_ENABLE "Du lånade ett " COLOR(RED) "Fick-ägg" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"En fick-Cucco kommer att kläckas ur\n"
"det över natten. Se till att ge tillbaka\n"
"den då du är klar med den."
)

DEFINE_MESSAGE(0x0002, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x2F")  QUICKTEXT_ENABLE "Du lämnade tillbaka fick-Cucco'n\n"
"och fick " COLOR(RED) "Cojiro" COLOR(DEFAULT) " istället!" QUICKTEXT_DISABLE "\n"
"Till skillnad från andra Cuccos,\n"
"så galer Cojiro sällan."
)

DEFINE_MESSAGE(0x0003, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x30")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Märklig Svamp" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"En färsk svamp som den här blir\n"
"snart för gammal! Ta den till\n"
"brygdbutiken i Kakariko, fort!"
)

DEFINE_MESSAGE(0x0004, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x31")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Märklig Brygd" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Du vet inte vad den här\n"
"kvinnan och mannen håller på med,\n"
"men ta den till den Förlorade Skogen!"
)

DEFINE_MESSAGE(0x0005, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x32")  QUICKTEXT_ENABLE "Du återlämnade den Märkliga Brygden \n"
"och fick " COLOR(RED) "Tjuvjägaren's såg" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Den där rackaren måste\n"
"ha lämnat kvar den här."
)

DEFINE_MESSAGE(0x0006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Bomber   20 Stycken   80 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0007, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x48")  QUICKTEXT_ENABLE "Du fick en \n"
COLOR(RED) "Dekufrö-Kulpåse" COLOR(DEFAULT) "." QUICKTEXT_DISABLE "\n"
"Den här påsen kan bära upp till " COLOR(YELLOW) "40" COLOR(DEFAULT) "\n"
"slangbell-kulor."
)

DEFINE_MESSAGE(0x0008, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x33")  QUICKTEXT_ENABLE "Du bytte Tjuvjägaren's såg \n"
"emot ett " COLOR(RED) "trasigt Goron-Svärd" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Besök Storgoron för att få det reparerat!"
)

DEFINE_MESSAGE(0x0009, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x34")  QUICKTEXT_ENABLE "Du lämnade in det trasiga \n"
"Goron-Svärdet och fick ett \n"
COLOR(RED) "Läkemedelsrecept" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Besök Kung Zora!"
)

DEFINE_MESSAGE(0x000A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x37")  QUICKTEXT_ENABLE "Storgoron's Svärd..." QUICKTEXT_DISABLE "\n"
"du fick en " COLOR(RED) "Anspråksblankett " COLOR(DEFAULT) "för det!\n"
"Du klarar knappt av att vänta på\n"
"att svärdet ska bli färdigt!"
)

DEFINE_MESSAGE(0x000B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x3D")  QUICKTEXT_ENABLE "Du bytte Jätten's Kniv \n"
"emot " COLOR(RED) "Storgoron's Svärd" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Den här klingan smiddes utav en \n"
"mästersmed och går aldrig sönder!"
)

DEFINE_MESSAGE(0x000C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x3D")  QUICKTEXT_ENABLE "Du lämnade in Anspråksblanketten\n"
"och fick " COLOR(RED) "Storgoron's Svärd" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Den här klingan smiddes utav en \n"
"mästarsmed och går aldrig sönder!"
)

DEFINE_MESSAGE(0x000D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x35")  QUICKTEXT_ENABLE "Du använde Läkemedelsreceptet och\n"
"fick en " COLOR(RED) "Ögonglobsgroda" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Leverera den till Hyliasjön \n"
"medans den är kall!"
)

DEFINE_MESSAGE(0x000E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x36")  QUICKTEXT_ENABLE "Du bytte Ögonglobsgrodan \n"
"emot " COLOR(RED) "Världens Bästa Ögondroppar" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Skynda! Ta dem till Storgoron\n"
"innan de blir dåliga!"
)

DEFINE_MESSAGE(0x000F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x41")  COLOR(RED) "VINNARE!!" COLOR(DEFAULT)  EVENT
)

DEFINE_MESSAGE(0x0010, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x25")  QUICKTEXT_ENABLE "Du lånade en " COLOR(RED) "Dödskallemask" COLOR(DEFAULT) "." QUICKTEXT_DISABLE "\n"
"Ta på dig den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att visa upp den!\n"
"Du känner dig som ett monster medans\n"
"du har på dig den här masken!"
)

DEFINE_MESSAGE(0x0011, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x26")  QUICKTEXT_ENABLE "Du lånade en " COLOR(RED) "Spökmask" COLOR(DEFAULT) "." QUICKTEXT_DISABLE "\n"
"Ta på dig den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att visa upp\n"
"den! Du kan skrämma många människor\n"
"med den här masken!"
)

DEFINE_MESSAGE(0x0012, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x24")  QUICKTEXT_ENABLE "Du lånade en " COLOR(RED) "Keaton-mask" COLOR(DEFAULT) "." QUICKTEXT_DISABLE "\n"
"Ta på dig den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att visa upp\n"
"den! Du kommer att bli en populär grabb\n"
"med den här masken på!"
)

DEFINE_MESSAGE(0x0013, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x27")  QUICKTEXT_ENABLE "Du lånade en " COLOR(RED) "Kaninhuva" COLOR(DEFAULT) "." QUICKTEXT_DISABLE "\n"
"Ta på dig den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att visa upp\n"
"den! Huvan's långa öron är så\n"
"söta!"
)

DEFINE_MESSAGE(0x0014, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x28")  QUICKTEXT_ENABLE "Du lånade en " COLOR(RED) "Goronmask" COLOR(DEFAULT) "." QUICKTEXT_DISABLE "\n"
"Ta på dig den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att visa upp\n"
"den! Den kommer att få ditt huvud att\n"
"se stort ut däremot."
)

DEFINE_MESSAGE(0x0015, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x29")  QUICKTEXT_ENABLE "Du lånade en " COLOR(RED) "Zora Mask" COLOR(DEFAULT) "." QUICKTEXT_DISABLE "\n"
"Ta på dig den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att visa upp\n"
"den! Med den här masken på så\n"
"kommer du att bli en Zora!"
)

DEFINE_MESSAGE(0x0016, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x2A")  QUICKTEXT_ENABLE "Du lånade en " COLOR(RED) "Gerudomask" COLOR(DEFAULT) "." QUICKTEXT_DISABLE "\n"
"Ta på dig den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att visa upp den!\n"
"den! Med den här masken på kommer du\n"
"att se ut som en...flicka?"
)

DEFINE_MESSAGE(0x0017, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x2B")  QUICKTEXT_ENABLE "Du lånade en " COLOR(RED) "Sanningen's Mask" COLOR(DEFAULT) "." QUICKTEXT_DISABLE "\n"
"Ta på dig den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att visa upp den!\n"
"den! Visa upp den för så många du kan!"
)

DEFINE_MESSAGE(0x0018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Välkommen till vårat banbrytande \n"
"underhållningscenter:" BOX_BREAK SHIFT("\x15")  COLOR(RED) "Bombchu-Bowlinghallen!" COLOR(DEFAULT)  BOX_BREAK "Vill du veta vad du \n"
"Kan vinna? Ptja, det är en " TEXT_SPEED("\x03") "hemlighet." TEXT_SPEED("\x00") "\n"
"Jag kan inte berätta det förrän du har\n"
"betalt för att spela." BOX_BREAK "Det kostar " COLOR(RED) "30 Rupees" COLOR(DEFAULT) " per spel.\n"
"Vill du spela?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x3C") "OKEJ!!" QUICKTEXT_DISABLE  BOX_BREAK "Sikta emot hålet i mitten \n"
"och släpp " COLOR(RED) "Bombchun " COLOR(DEFAULT) "kör!\n"
"Du har " COLOR(RED) "tio försök" COLOR(DEFAULT) ". Redo..." BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x42")  COLOR(RED) "DÅ BOWLAR VI!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x001A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vill du spela igen?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x001B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, Jag höll visst på att glömma!\n"
"Det här kan du vinna!" EVENT
)

DEFINE_MESSAGE(0x001C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Bomber  (20 stycken)   80 Rupees\n"
COLOR(DEFAULT) "Ta ut dem med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " och tryck på \n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " igen för att kasta. Du kan inte\n"
"köpa ut dem utan en bombväska." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x001D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Bomber  (30 stycken)   120 Rupees\n"
COLOR(DEFAULT) "Ta ut dem med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " och tryck på \n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " igen för att kasta. Du kan inte\n"
"köpa ut dem utan en bombväska." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x001E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Bomber  30 Stycken   120 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x001F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är så glad att alla har blivit\n"
"återställda till det vanliga igen!"
)

DEFINE_MESSAGE(0x0020, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Snälla rädda mina andra bröder\n"
"också! De kommer säkerligen att\n"
"ge dig något mycket bättre!" BOX_BREAK "Kan du göra det?!"
)

DEFINE_MESSAGE(0x0021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Färbannelsen har blivit bruten!\n"
"Tack så mycket!\n"
"Här får du en belöning!" EVENT
)

DEFINE_MESSAGE(0x0022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Aaaah! Det vilar en förbannelse över mig!!"
)

DEFINE_MESSAGE(0x0023, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vi ska vara försiktiga så att vi inte\n"
"får en förbannelse på oss igen!"
)

DEFINE_MESSAGE(0x0024, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Efter att du besegrade " COLOR(RED)  TOKENS  COLOR(DEFAULT) "\n"
"Förbannelse-spindlar, så har förbannelsen\n"
"börjat försvagas!" BOX_BREAK "Gav barnen dig någon belöning\n"
"efter att de blev återstållda?" BOX_BREAK "Något du borde känna till, är att\n"
"det enda sättet att bli " COLOR(RED) "väldigt rik " COLOR(DEFAULT) "är att\n"
"besegra så många Förbannelse-spindlar\n"
"som möjligt!" BOX_BREAK "Det finns ett par trick för att finna\n"
"dem alla! För det första så måste du\n"
"jaga nattetid. För det andra, tänk på\n"
"att de tycker om mjuk jord..." BOX_BREAK "Var uppmärksam på din\n"
"omgivning!\n"
"Snälla, vi räknar med din hjälp!"
)

DEFINE_MESSAGE(0x0025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Vi ser ut såhär på grund utav \n"
"spindeln's förbannelse. men..." TEXTID("\x00\x24")
)

DEFINE_MESSAGE(0x0026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vi alla ser ut såhär på grund utav\n"
"spindeln's förbannelse." BOX_BREAK "Om varje " COLOR(RED) "Förbannelse-spindel " COLOR(DEFAULT) "i\n"
"hela världen blev besegrad,\n"
"så skulle förbannelsen lyftas." BOX_BREAK "Då du besegrar en Förbannelse-spindel \n"
"så kommer en amulett att framträda. Samla\n"
"in den som bevis för din prestation." BOX_BREAK ITEM_ICON("\x71") "Siffran jämte den här " COLOR(YELLOW) "ikonen" COLOR(DEFAULT) " på\n"
" " COLOR(LIGHTBLUE) "Uppdrags-skärmen" COLOR(BLUE) " \n"
COLOR(DEFAULT) "visar hur många Förbannelse-spindlar \n"
"du har besegrat såhär långt." BOX_BREAK ITEM_ICON("\x71") "Då denna " COLOR(YELLOW) "ikon" COLOR(DEFAULT) " visas \n"
"jämsides med namnet på platsen\n"
"på " COLOR(RED) "Kart-fönstret" COLOR(DEFAULT) ", så finns där inga\n"
"mer Spindlar kvar på den platsen." TEXTID("\x00\xFE")
)

DEFINE_MESSAGE(0x0027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om du bryter förbannelsen över min\n"
"familj, så kommer vi att belöna dig " COLOR(RED) "mycket\n"
"rikt" COLOR(DEFAULT) "..."
)

DEFINE_MESSAGE(0x0028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Efter " COLOR(RED)  TOKENS  COLOR(DEFAULT) " besegrade Förbannelse-spindlar\n"
"så har förbannelsen över mig \n"
"blivit bruten." BOX_BREAK UNSKIPPABLE "Tack så mycket! Här får du en belöning\n"
"som bevis för min uppskattning! Snälla ta emot den." EVENT
)

DEFINE_MESSAGE(0x0029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tack för att du räddade mina barn." BOX_BREAK "Va? Jag? Åh, Det är Okej..." BOX_BREAK "Du har redan besegrat " COLOR(RED)  TOKENS  COLOR(DEFAULT) "\n"
"Förbannelse-spindlar, så...\n"
"det är okej...oroa dig inte för mig..."
)

DEFINE_MESSAGE(0x002A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Bombchu   20 Stycken   180 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x002B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vill du spela?\n"
"Det kostar " COLOR(RED) "20 Rupees " COLOR(DEFAULT) "per spel.\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x002C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Du kan inte! Du behöver en pilbåge!" EVENT
)

DEFINE_MESSAGE(0x002D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Okej. Du behöver inte spela\n"
"Om du inte vill." EVENT
)

DEFINE_MESSAGE(0x002E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "OKEJ!!" QUICKTEXT_DISABLE "\n"
"Detta spelet är för vuxna!\n"
"Hyrule's berömda " COLOR(RED) "Skyttegalleri" COLOR(DEFAULT) "!" BOX_BREAK "Sikta på måltavlorna ifrån \n"
"plattformen där borta! Kan du träffa\n"
COLOR(RED) "tio stycken" COLOR(DEFAULT) "? Du får " COLOR(RED) "femton \n"
COLOR(DEFAULT) "skott!" BOX_BREAK "Dra ditt vapen med " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) ". \n"
"Är du redo?\n"
"Försök att få en fullpoängare!\n"
"Lycka till!" EVENT
)

DEFINE_MESSAGE(0x002F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du ser en liten hög med\n"
"mjuk jord här."
)

DEFINE_MESSAGE(0x0030, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x06")  QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "Älvslangbellan" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera den på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " eller" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x06") "Tryck " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "för att ta ut och hålla\n"
"den. Medan du håller inne " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "så kan du sikta \n"
"med " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ". Släpp " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att skjuta \n"
"ett " COLOR(RED) "Dekufrö" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x06") "Om du vill skjuta på\n"
"en gång då du trycker " COLOR(YELLOW) "[C]" COLOR(DEFAULT) ", \n"
"håll nere " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "lite längre för att \n"
"redogöra ett frö."
)

DEFINE_MESSAGE(0x0031, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x03")  QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "Älvpilbågen" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera den på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " eller" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x03") "Tryck " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "för att ta ut\n"
"och hålla den. Medan du håller inne\n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " så kan du sikta med " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "." COLOR(YELLOW) " " COLOR(DEFAULT) "Släpp\n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att skjuta iväg en " COLOR(RED) "pil" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x0032, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x02")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Bomber" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera dem på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " eller" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "." BOX_BREAK ITEM_ICON("\x02") "Använd " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att lyfta och placera\n"
"en. Tryck " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " medans du springer för att\n"
"kasta den. Om du ser något\n"
"misstänksamt, bomba det!"
)

DEFINE_MESSAGE(0x0033, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x09")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Bombchu" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera dem på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " eller" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "." BOX_BREAK ITEM_ICON("\x09") " Lyft och placera med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) ".\n"
"Det här är en ny typ utav bomb\n"
"som kan krypa upp för väggar.\n"
"Sikta smart och släpp lös den!"
)

DEFINE_MESSAGE(0x0034, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x01")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Dekunötter" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera dem på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " eller" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "." BOX_BREAK ITEM_ICON("\x01") "Sätt den på " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "och prova att \n"
"kasta den! Den kommer att blixtra till \n"
"och bedöva fienden!"
)

DEFINE_MESSAGE(0x0035, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x0E")  QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "Bumerang" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera dem på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " eller" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x0E") "Tryck " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att kasta den \n"
"på avlägsna fiender!"
)

DEFINE_MESSAGE(0x0036, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x0A")  QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "Krokskottet" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Det är en fjäderladdad kedja som\n"
"du kan ta fram för att kroka fast saker." BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x0A") "Du kan använda den för att dra\n"
"till dig avlägsna föremål, eller\n"
"så kan du använda den för att dra\n"
"dig själv emot någonting." BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x0A") "Medan du håller inne " COLOR(YELLOW) "[C]" COLOR(DEFAULT) ", så kan du\n"
"sikta med " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ". Skjut genom att\n"
"släppa " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x0037, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x00")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Dekukäpp" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera dem på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " eller" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "." BOX_BREAK ITEM_ICON("\x00") "Sätt den på " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " och svinga den\n"
"med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "!" BOX_BREAK ITEM_ICON("\x00") "Då du vill stoppa undan den, \n"
"stå still och tryck " COLOR(BLUE) "[A]" COLOR(DEFAULT) ". \n"
"Du kan bära upp till 10 käppar,\n"
"men slösa inte bort dem."
)

DEFINE_MESSAGE(0x0038, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x11")  QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "Megatonhammaren" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Tryck " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " to krossa och förstöra \n"
"skrot! Den är så tung, att du behöver \n"
"använda två händer för att svinga den!"
)

DEFINE_MESSAGE(0x0039, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x0F")  QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "Sanningslinsen" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Sätt den på " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " och tryck " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att \n"
"titta genom den! Mystiska \n"
"saker är dolda överallt!" BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x0F") "Försök att även använda den\n"
"utanför brunnen. Att se sanningen\n"
"kostar dig magisk kraft, tryck " COLOR(YELLOW) "[C]\n"
COLOR(DEFAULT) "igen för att sluta använda den."
)

DEFINE_MESSAGE(0x003A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x08")  QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "Tidsokarinan" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Detta är en utav den Kungliga Familjens \n"
"dolda skatter som Zelda lämnade efter sig.\n"
"Den skimrar med ett mystiskt ljus..."
)

DEFINE_MESSAGE(0x003B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Du kastar Farore's Vind!\n"
THREE_CHOICE  COLOR(ADJUSTABLE) "Återvänd till Warp-Punkten\n"
"Avskingra Warp-Punkten\n"
"Lämna" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x003C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x67")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Eldmedaljen\n"
" " COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Darunia vaknade upp som en Vise och\n"
"skänker dig härmed sina krafter!"
)

DEFINE_MESSAGE(0x003D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x68")  QUICKTEXT_ENABLE "Du fick " COLOR(BLUE) "Vattenmedaljen\n"
" " COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Ruto vaknade upp som en Vise och\n"
"skänker dig härmed sina krafter!"
)

DEFINE_MESSAGE(0x003E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x66")  QUICKTEXT_ENABLE "Du fick " COLOR(ADJUSTABLE) "Skogsmedaljen\n"
" " COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Saria vaknade upp som en Vise och\n"
"skänker dig härmed sina krafter!"
)

DEFINE_MESSAGE(0x003F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x69")  QUICKTEXT_ENABLE "Du fick " COLOR(YELLOW) "Själamedaljen\n"
" " COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Nabooru vaknade upp som en Vise och\n"
"skänker dig härmed sina krafter!"
)

DEFINE_MESSAGE(0x0040, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x6B")  QUICKTEXT_ENABLE "Du fick " COLOR(LIGHTBLUE) "Ljusmedaljen\n"
" " COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Rauru den Vise skänker dig\n"
"härmed sina krafter!"
)

DEFINE_MESSAGE(0x0041, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x6A")  QUICKTEXT_ENABLE "Du fick " COLOR(PURPLE) "Skuggmedaljen\n"
" " COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Impa vaknade upp som en Vise och\n"
"skänker dig härmed sina krafter!"
)

DEFINE_MESSAGE(0x0042, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x14")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Tom Flaska" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Då du har något i den här\n"
"flaskan så kan du placera den på " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " då du\n"
"vill använda föremålet inuti."
)

DEFINE_MESSAGE(0x0043, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x15")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Röd Brygd" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"placera den på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " eller" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "." BOX_BREAK ITEM_ICON("\x15") "Drick den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att återhämta\n"
"din livsenergi.\n"
"Du bär den här brygden i\n"
"en utav dina flaskor."
)

DEFINE_MESSAGE(0x0044, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x16")  QUICKTEXT_ENABLE "Du fick en " COLOR(ADJUSTABLE) "Grön Brygd" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"placera den på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " eller" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "." BOX_BREAK ITEM_ICON("\x16") "Drick den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att återhämta\n"
"din magiska kraft.\n"
"Du bär den här brygden i\n"
"en utav dina flaskor."
)

DEFINE_MESSAGE(0x0045, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x17")  QUICKTEXT_ENABLE "Du fick en " COLOR(BLUE) "Blå Brygd" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Drick den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att återhämta\n"
"din livsenergi och din magiska kraft."
)

DEFINE_MESSAGE(0x0046, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x18")  QUICKTEXT_ENABLE "Du fångade en " COLOR(RED) "Älva" COLOR(DEFAULT) " i en flaska!" QUICKTEXT_DISABLE "\n"
"På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera den på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " eller" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "." BOX_BREAK ITEM_ICON("\x18") "Den här lilla älvan är en pålitlig \n"
"partner som återhämtar dig\n"
"så fort din livsenergi tar \n"
"slut." BOX_BREAK ITEM_ICON("\x18") "Då du placerar den på " COLOR(YELLOW) "[C]" COLOR(DEFAULT) ",\n"
"så kan du be om dess hjälp\n"
"när du vill."
)

DEFINE_MESSAGE(0x0047, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x19")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Fisk" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Använd den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " så kanske \n"
"någonting händer... Den ser \n"
"färsk och mumsig ut!" BOX_BREAK ITEM_ICON("\x19") "På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera den på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) "\n"
"eller " COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) ", tryck sedan\n"
COLOR(YELLOW) "[C] " COLOR(DEFAULT) "för att använda den."
)

DEFINE_MESSAGE(0x0048, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x10")  QUICKTEXT_ENABLE "You got a " COLOR(RED) "Magic Bean" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Find a suitable spot for a garden\n"
"and plant it with " COLOR(YELLOW) "[C]" COLOR(DEFAULT) ". Then, wait\n"
"for something fun to happen!" BOX_BREAK ITEM_ICON("\x10") "On the " COLOR(YELLOW) "Select Item Subscreen" COLOR(DEFAULT) ",\n"
"you can set it to " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) "\n"
"or " COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) ", and then use that\n"
COLOR(YELLOW) "[C] " COLOR(DEFAULT) "to plant it."
)

DEFINE_MESSAGE(0x0049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ursäkta mig...okej..." BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x3D")  COLOR(RED) "DÅ BOWLAR VI" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x004A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x07")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Älvokarinan" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Det här är ett minne ifrån Saria.\n"
"Placera den på " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " och tryck " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "\n"
"för att börja spela på den!" BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x07") "På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera den på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) "\n"
"eller " COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) ", använd sedan\n"
COLOR(YELLOW) "[C] " COLOR(DEFAULT) "för att börja spela." BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x07") "Du kan spela olika noter\n"
"med " COLOR(BLUE) "[A]" COLOR(DEFAULT) " och de fyra " COLOR(YELLOW) "[C] Knapparna" COLOR(DEFAULT) ". \n"
"Tryck " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) " för att sluta spela, eller \n"
"för att spela din sång från början."
)

DEFINE_MESSAGE(0x004B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x3D")  QUICKTEXT_ENABLE "Du fick " COLOR(ADJUSTABLE) "Jätten's Kniv" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Håll den med båda händerna och använd \n"
COLOR(ADJUSTABLE) "[B] " COLOR(DEFAULT) "för att attackera! Den är så lång, så att\n"
"du inte kan använda den med en " COLOR(LIGHTBLUE) "sköld" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x004C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x3E")  QUICKTEXT_ENABLE "Du fick en " COLOR(LIGHTBLUE) "Dekusköld" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Byt till " COLOR(BLUE) "Utrustnings-skärmen \n"
" " COLOR(RED) " " COLOR(DEFAULT) "och välj den här\n"
"skölden. Tryck " COLOR(BLUE) "[A] " COLOR(DEFAULT) "för att utrusta dig med den." BOX_BREAK ITEM_ICON("\x3E") "Tryck " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " för att huka\n"
"och försvara dig. Om du trycker " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " medan du \n"
COLOR(LIGHTBLUE) "[Z] Siktar" COLOR(DEFAULT) ", så kan du röra dig\n"
"medan du försvarar dig."
)

DEFINE_MESSAGE(0x004D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x3F")  QUICKTEXT_ENABLE "Du fick en " COLOR(LIGHTBLUE) "Hyliansk Sköld" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Byt till " COLOR(BLUE) "Utrustnings-skärmen \n"
" " COLOR(DEFAULT) " och välj den här\n"
"skölden, utrusta dig sedan med den genom att trycka " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x004E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x40")  QUICKTEXT_ENABLE "Du hittade " COLOR(LIGHTBLUE) "Spegelskölden" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Skölden's polerade yta\n"
"reflekterar ljus eller energi. Tryck " COLOR(LIGHTBLUE) "[R]\n"
COLOR(DEFAULT) "för att använda den."
)

DEFINE_MESSAGE(0x004F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x0B")  QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "Långskottet" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Det här är ett uppgraderat Krokskott.\n"
"Den sträcker sig " COLOR(RED) "dubbelt" COLOR(DEFAULT) " så långt!"
)

DEFINE_MESSAGE(0x0050, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x42")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Goron-tunika" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Denna värme-resistanta tunika är\n"
"i vuxenstorlek, så den passar inte ett barn...\n"
"Är du på väg till en varm plats? Oroa dig inte!"
)

DEFINE_MESSAGE(0x0051, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x43")  QUICKTEXT_ENABLE "Du fick en " COLOR(BLUE) "Zora-tunika" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Den här dykar-uniformen är i vuxenstorlek,\n"
"så den passar inte ett barn. Klä dig i den,\n"
"så att du inte drunknar under vattnet."
)

DEFINE_MESSAGE(0x0052, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Du fick en " COLOR(ADJUSTABLE) "Magisk Kruka" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Din Magi-meter fylldes på!"
)

DEFINE_MESSAGE(0x0053, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x45")  QUICKTEXT_ENABLE "Du fick ett par " COLOR(RED) "Järnskor" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Så tunga, att du inte kan springa.\n"
"Så tunga, att du inte kan flyta."
)

DEFINE_MESSAGE(0x0054, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x46")  QUICKTEXT_ENABLE "Du fick ett par " COLOR(RED) "Svävarskor" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Med dessa mystiska skor\n"
"så kan du sväva över marken.\n"
"Nackdelen? Ingen dragkraft!" BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x46") "You can even use these to\n"
"Gå korta perioder över mark\n"
"som inte är fast. Var modig\n"
"och lita på skorna!"
)

DEFINE_MESSAGE(0x0055, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Du fick ett " COLOR(PURPLE) "Återhämtningshjärta" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Din livsenergi har blivit återhämtad!"
)

DEFINE_MESSAGE(0x0056, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x4B")  QUICKTEXT_ENABLE "Du uppgraderade ditt kågor till\n"
COLOR(RED) "Stort Koger" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Nu kan du bära fler pilar-\n"
COLOR(YELLOW) "40 " COLOR(DEFAULT) "totalt!"
)

DEFINE_MESSAGE(0x0057, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x4B")  QUICKTEXT_ENABLE "Du uppgraderade ditt kågor till\n"
"det " COLOR(RED) "Största Kogert" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Nu kan du till och med bära ännu fler \n"
"pilar, ända upp till " COLOR(YELLOW) "50" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x0058, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x4D")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Bombväska" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Den här specialgjorda bombväskan är tillverkad \n"
"utav magen från en Dodongo!" BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x02")  QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "20 Bomber" COLOR(DEFAULT) " inuti!" QUICKTEXT_DISABLE "\n"
"Nu kan du placera Bomber på " COLOR(YELLOW) "[C]\n"
COLOR(DEFAULT) "och spränga saker! Du är lyckligt \n"
"lottad!"
)

DEFINE_MESSAGE(0x0059, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x4E")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Stor Bombväska" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Nu kan du bära fler \n"
"Bomber, up till hela " COLOR(YELLOW) "30" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x005A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x4F")  QUICKTEXT_ENABLE "Du fick den \n"
COLOR(RED) "Största Bombväskan" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Nu kan du bära upp till \n"
COLOR(YELLOW) "40" COLOR(DEFAULT) " Bomber!"
)

DEFINE_MESSAGE(0x005B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x51")  QUICKTEXT_ENABLE "Du hittade " COLOR(BLUE) "Silverhandskarna" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Då du har dem på dig, så känner\n"
"du kraften i dina armar att \n"
"orka lyfta stora saker " COLOR(BLUE) "[A]" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x51") "Men, dessa handskar passar inte\n"
"ett barn... Dessutom så lovade du\n"
"att ge dem till " COLOR(RED) "Nabooru" COLOR(DEFAULT) ". Du borde\n"
"stå vid ditt ord..."
)

DEFINE_MESSAGE(0x005C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x52")  QUICKTEXT_ENABLE "Du hittade de " COLOR(BLUE) "Gyllene Handskarna" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Du kan till och med känna mer\n"
"kraft strömma genom dina armar!\n"
"Greppa tag med " COLOR(BLUE) "[A] " COLOR(DEFAULT) "och lyft upp saker!"
)

DEFINE_MESSAGE(0x005D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x1C")  QUICKTEXT_ENABLE "Du stoppade en " COLOR(LIGHTBLUE) "Blå Eld" COLOR(DEFAULT) "\n"
"in i Flaskan!" QUICKTEXT_DISABLE "\n"
"Detta här en häftig flamma som du kan\n"
"använda med " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) "," COLOR(YELLOW) " [C-Down]" COLOR(DEFAULT) " eller" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x005E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x56")  QUICKTEXT_ENABLE "Du fick en " COLOR(BLUE) "Vuxen's Plånbok" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Vuxna får lov att ha mycket pengar \n"
"på sig. Nu så kan du bära \n"
"upp till " COLOR(YELLOW) "200" COLOR(DEFAULT) " " COLOR(YELLOW) "Rupees" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x005F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x57")  QUICKTEXT_ENABLE "Du fick en " COLOR(BLUE) "Jätte's Plånbok" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Vilken enorm plånbok! Nu kan \n"
"du bära upp till " COLOR(YELLOW) "500" COLOR(DEFAULT) " " COLOR(YELLOW) "Rupees" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x0060, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x77")  QUICKTEXT_ENABLE "Du hittade en " COLOR(RED) "Liten Nyckel" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Den här nyckeln kan öppna en låst \n"
"dörr. Du kan endast använda den\n"
"i det här området."
)

DEFINE_MESSAGE(0x0061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Bombchu  (20 Stycken)  180 Rupees\n"
COLOR(DEFAULT) "Det ser ut som en leksaksmus, men\n"
"är i själva verket en självgående tidsinställd\n"
"bomb!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x0062, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Röd Brygd    40 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Röd Brygd    50 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Röd Brygd    40 Rupees\n"
COLOR(DEFAULT) "Om du dricker denna, så kommer du\n"
"att återhämta din livsenergi.\n"
"Detta är en enstaka dos." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x0065, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Röd Brygd    50 Rupees\n"
COLOR(DEFAULT) "Om du dricker denna, så kommer du\n"
"att återhämta din livsenergi.\n"
"Detta är en enstaka dos." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x0066, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x76")  QUICKTEXT_ENABLE "Du fann en " COLOR(RED) "Områdeskarta" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Tryck " COLOR(RED) "START " COLOR(DEFAULT) "För att komma in i \n"
"Skärmval och titta sedan på\n"
COLOR(RED) "Kartskärmen" COLOR(DEFAULT) "!" BOX_BREAK ITEM_ICON("\x76")  COLOR(BLUE) "Blå kammare" COLOR(DEFAULT) " är platser \n"
"du inte har besökt tidigare. \n"
"Din nuvarande plats är \n"
"det " COLOR(LIGHTBLUE) "blinkande rummet" COLOR(DEFAULT) "." BOX_BREAK ITEM_ICON("\x76") "Rör " COLOR(LIGHTBLUE) "[Control-Pad] upp och ned" COLOR(DEFAULT) " för att \n"
"för att välja våning."
)

DEFINE_MESSAGE(0x0067, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x75")  QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "Kompassen" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Nu kan du se vart många\n"
"dolda ting är placerade i den här\n"
"platsen!"
)

DEFINE_MESSAGE(0x0068, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x6F")  QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "Smärtan's Sten" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Om du kopplar in en " COLOR(LIGHTBLUE) "Rumble Pak" COLOR(DEFAULT) ", så\n"
"reagerar den då hemligheter är i närheten."
)

DEFINE_MESSAGE(0x0069, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x23")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Zelda's Brev" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Wow! Det här brevet har Prinsessan\n"
"Zelda's autograf! Sätt det på " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "\n"
"och visa upp den med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x23") "På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"du kan placera det på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down] " COLOR(DEFAULT) "eller " COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) ",\n"
"och sedan använda det med " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "för att visa upp\n"
"det för folk."
)

DEFINE_MESSAGE(0x006A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Välkommen! Hur kan jag stå till tjänst?" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Jag vill handla\n"
"Bara tittar" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x006B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Vill du köpa någonting\n"
"annat?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x006C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x49")  QUICKTEXT_ENABLE "Din " COLOR(RED) "Dekufrö-kulpåse \n"
COLOR(DEFAULT) "har blivit större!" QUICKTEXT_DISABLE "\n"
"Nu kan du bära fler kulor!\n"
"Den här väska kan bära upp till " COLOR(YELLOW) "50" COLOR(RED) " " COLOR(DEFAULT) "kulor!"
)

DEFINE_MESSAGE(0x006D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Öppna kistan och...Överraskning!\n"
"Om du hittar en nyckel inuti, Så får\n"
"möjlighet att fortsätta. Vänster eller\n"
"höger--testa lyckan!" BOX_BREAK COLOR(RED) "10 Rupees " COLOR(DEFAULT) "för att spela. Vill du göra \n"
"ett försök?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x006E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Kanon! Du är en riktig hasardspelare!"
)

DEFINE_MESSAGE(0x006F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Du fick en " COLOR(ADJUSTABLE) "Grön Rupee" COLOR(DEFAULT) "!\n"
"Det är " COLOR(ADJUSTABLE) "en Rupee" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0070, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x04")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Eldpilen" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Sätt den på " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "så kommer dina pilar\n"
"att få kraften! Om du träffar\n"
"ditt mål, så kommer det att börja brinna."
)

DEFINE_MESSAGE(0x0071, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x0C")  QUICKTEXT_ENABLE "Du fick " COLOR(BLUE) "Ispilen" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Sätt den på " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "så kommer dina pilar\n"
"att få kraften! Om du träffar \n"
"ditt mål, så kommer det att frysa." BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x0C") "Den här pilmagin tillägnas\n"
"endast de som klarar att fullfölja \n"
"Gerudostammen's tuffa träning,\n"
"så använd den med stolthet!"
)

DEFINE_MESSAGE(0x0072, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x12")  QUICKTEXT_ENABLE "Du fick " COLOR(LIGHTBLUE) "Ljuspilen" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Sätt den på " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "så kommer dina pilar\n"
"att få kraften! Rättvisan's ljus\n"
"kommer att besegra all ondska!"
)

DEFINE_MESSAGE(0x0073, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x28") "Du har lärt dig \n"
SHIFT("\x2F")  COLOR(ADJUSTABLE) "Skogs-Menuetten" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x0074, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x28") "Du har lärt dig \n"
SHIFT("\x37")  COLOR(RED) "Eld's-Bolero" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x0075, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x28") "Du har lärt dig \n"
SHIFT("\x29")  COLOR(BLUE) "Vatten-Serenaden" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x0076, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x28") "Du har lärt dig \n"
SHIFT("\x2D")  COLOR(YELLOW) "Själen's Klagosång" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x0077, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x28") "Du har lärt dig \n"
SHIFT("\x28")  COLOR(PURPLE) "Skuggan's Nocturne" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x0078, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x28") "Du har lärt dig \n"
SHIFT("\x32")  COLOR(LIGHTBLUE) "Ljuset's Preludium" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x0079, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x50")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Goron's Armband" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Nu kan du rycka upp \n"
"Bomb-Blommor. Stå vid sidan om en och\n"
"använd " COLOR(BLUE) "[A]" COLOR(DEFAULT) " för att rycka upp den!"
)

DEFINE_MESSAGE(0x007A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x1D")  QUICKTEXT_ENABLE "Du stoppade ett " COLOR(RED) "Kryp " COLOR(DEFAULT) "i flaskan!" QUICKTEXT_DISABLE "\n"
"Du kan släppa lös den genom att trycka\n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) ". Denna typen utav kryp tycker om att\n"
"leva i små hål i marken."
)

DEFINE_MESSAGE(0x007B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x70")  QUICKTEXT_ENABLE "Du har fått " COLOR(RED) "Gerudo's \n"
"Medlemskort" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Du har nu tillträde till Gerudo's\n"
"träningsområde i deras gömställe."
)

DEFINE_MESSAGE(0x007C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Bomber  10 stycken  50 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x007D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Pilar  50 stycken  90 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x007E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Fisk   200 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x007F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Dekunötter   5 stycken   15 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0080, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x6C")  QUICKTEXT_ENABLE "Du fick " COLOR(ADJUSTABLE) "Kokiri's Smaragd" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Det här är Skogen's Själasten \n"
"som hädanefter har anförtrotts \n"
"dig utav det Stora Dekuträdet."
)

DEFINE_MESSAGE(0x0081, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x6D")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Goron's Rubin" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Det här är Elden's själasten som \n"
"Goronstammen nu har anförtrott dig!"
)

DEFINE_MESSAGE(0x0082, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x6E")  QUICKTEXT_ENABLE "Du fick " COLOR(BLUE) "Zora's Safir" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Det här är Vattnet's Själasten som\n"
"Zorastammen nu har anförtrott dig!"
)

DEFINE_MESSAGE(0x0083, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Handla genom att flytta \n"
COLOR(LIGHTBLUE) "[Control-Pad] " COLOR(DEFAULT) "vänster eller höger.\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Tala med ägaren\n"
"Avsluta" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)


DEFINE_MESSAGE(0x0084, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Tack så mycket!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x0085, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Du har inte tillräckligt med Rupees!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x0086, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Du kan inte få det nu." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x0087, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Dekunötter   10 stycken  30 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0088, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Dekukäpp  1 styck   10 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0089, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Dekusköld   40 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x008A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Pilar   10 stycken   20 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x008B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Bomber   5 stycken   25 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x008C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Bombchu  10 stycken   100 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x008D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Du kan inte använda en Stor-Poe här!\n"
"Sälj den till mannen vid Slottet\n"
"Hyrule's portar!"
)

DEFINE_MESSAGE(0x008E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Röd Brygd   30 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x008F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Grön Brygd   30 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0090, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x00")  QUICKTEXT_ENABLE "Nu kan du samla på dig \n"
"ännu fler " COLOR(RED) "Dekukäppar" COLOR(DEFAULT) "!\n"
"Du kan nu bära upp till " COLOR(YELLOW) "20" COLOR(DEFAULT) " stycken!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0091, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x00")  QUICKTEXT_ENABLE "Nu kan du samla på dig \n"
"ännu fler " COLOR(RED) "Dekukäppar" COLOR(DEFAULT) "!\n"
"Du kan nu bära upp till " COLOR(YELLOW) "30" COLOR(DEFAULT) " stycken!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0092, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Hyliansk Sköld   80 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0093, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Gorontunika   200 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0094, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Zoratunika   300 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0095, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Återhämtningshjärta   10 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0096, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Jag är ledsen...men jag kan inte sälja den till\n"
"dig så länge du inte har en flaska att \n"
"stoppa den i." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x0097, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x20")  QUICKTEXT_ENABLE "Du fångade en " COLOR(RED) "Poe " COLOR(DEFAULT) "i din flaska!" QUICKTEXT_DISABLE "\n"
"Någonting bra kanske kan hända nu!"
)

DEFINE_MESSAGE(0x0098, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x1A")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Lon Lon-Mjölk" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Den här mjölken är väldigt näringsrik!\n"
"Använd den med " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "för att återhämta din \n"
"livsenergi!" BOX_BREAK ITEM_ICON("\x1A") "Du återställer " COLOR(RED) "fem hjärtan" COLOR(DEFAULT) "\n"
"per slurk. Det finns två\n"
"slurkar per flaska." BOX_BREAK ITEM_ICON("\x1A") "På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera den på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down] " COLOR(DEFAULT) "eller " COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) ",\n"
"använd sedan med " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "för att ta \n"
"en slurk."
)

DEFINE_MESSAGE(0x0099, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x1B")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Tom Flaska" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Stoppa någonting i den och \n"
"tryck " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "för att använda den... Va?\n"
"Det finns redan något där i!?"
)

DEFINE_MESSAGE(0x009A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x21")  QUICKTEXT_ENABLE "Du fick ett " COLOR(RED) "Konstigt Ägg" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Det känns som att det är någonting som\n"
"rör sig på insidan! Placera den på " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "och \n"
"se vad som händer!" BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x21") "På " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"så kan du placera den på " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down] " COLOR(DEFAULT) "eller " COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) ",\n"
"tryck sedan " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "för att använda."
)

DEFINE_MESSAGE(0x009B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Pilar   30 stycken   60 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x009C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Min nuvarande storsäljare är den\n"
COLOR(LIGHTBLUE) "Hylianska Skölden" COLOR(DEFAULT) ", men det finns risk för att \n"
"den är för stor för dig, grabben." EVENT
)

DEFINE_MESSAGE(0x009D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vi flyttade hit från Slottstaden. \n"
"Jag vet att det är tuffa tider, men\n"
"Jag hoppas på att du kommer att bli en \n"
"stamkund hos oss!" EVENT
)

DEFINE_MESSAGE(0x009E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x47") "Välkommen!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x009F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Dekusköld   40 Rupees\n"
COLOR(DEFAULT) "Då du har den i handen så kan du försvara dig \n"
"med " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) ". Eld får den att börja\n"
"brinna!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00A0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Pilar   (10 stycken)   20 Rupees\n"
COLOR(DEFAULT) "Du behöver en pilbåge för att skjuta dem.\n"
"Du kan inte köpa dem så länge du inte\n"
"har en pilbåge." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00A1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Dekukäpp  (1 styck)  10 Rupees\n"
COLOR(DEFAULT) "En lång gren från det\n"
"Stora Dekuträder. Du kan använda den som\n"
"ett vapen, men den kommer att gå sönder." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00A2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Dekunötter  (10 stycken) 30 Rupees\n"
COLOR(DEFAULT) "Kasta för att bedöva dina fiender.\n"
"Du kan bara köpa så många\n"
"du faktiskt kan bära." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00A3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Bomber   (5 stycken)   25 Rupees\n"
COLOR(DEFAULT) "Ta ut dem med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " och tryck \n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att kasta. Du kan endast köpa\n"
"dem om du har en Bombväska." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00A4, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x3B")  QUICKTEXT_ENABLE "Du fick " COLOR(ADJUSTABLE) "Kokiri-Svärdet" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"På " COLOR(BLUE) "Föremåls-skärmen" COLOR(DEFAULT) ",\n"
"välj det med markören och\n"
"beväpna dig med " COLOR(BLUE) "[A]" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x3B") "Detta är en utav Kokiri's\n"
"dolda skatter, men du kan låna det\n"
"ett tag. Se till att öva \n"
"med det före du slåss på riktigt!"
)

DEFINE_MESSAGE(0x00A5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Röd Brygd   30 Rupees\n"
COLOR(DEFAULT) "Drick för att återhåmta din livsenergi.\n"
"Innehåller bara en dos." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00A6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Grön Nrygd   30 Rupees\n"
COLOR(DEFAULT) "Drick för att återhåmta din magikraft.\n"
"Innehåller bara en dos." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00A7, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x01")  QUICKTEXT_ENABLE "Nu kan du bära\n"
"fler " COLOR(RED) "Dekunötter" COLOR(DEFAULT) "!\n"
"Du kan bära upp till " COLOR(YELLOW) "30" COLOR(DEFAULT) " nötter!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00A8, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x01")  QUICKTEXT_ENABLE "Nu kan du bära\n"
"ännu fler " COLOR(RED) "Dekunötter" COLOR(DEFAULT) "! Du kan bära\n"
"upp till " COLOR(YELLOW) "40" COLOR(RED) " " COLOR(DEFAULT) "nötter!" QUICKTEXT_DISABLE " "
)

DEFINE_MESSAGE(0x00A9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Hyliansk Sköld   80 Rupees\n"
COLOR(DEFAULT) "Detta är en stor, tung sköld \n"
"precis som de Hylianska riddarna använder.\n"
"Den klarar till och med av eldattacker!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00AA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Gorontunika   200 Rupees\n"
COLOR(DEFAULT) "En tunika skapad utav Gorons.\n"
"Vuxenstorlek. Skyddar dig från \n"
"värmeskador." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00AB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Zoratunika   300 Rupees\n"
COLOR(DEFAULT) "En tunika skapad utav Zoras. Vuxenstorlek.\n"
"Skyddar dig från att drunkna\n"
"under vatten." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00AC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Återhämtningshjärta   10 Rupees\n"
COLOR(DEFAULT) "Återställer direkt en utav dina\n"
"hjärtbehållare." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00AD, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x05")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Din's Eld" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Dess eldboll uppslukar allt!\n"
"Använd den här magin\n"
"med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x00AE, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x0D")  QUICKTEXT_ENABLE "Du fick " COLOR(ADJUSTABLE) "Farore's Vind" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Den här warpmagin kan du använda \n"
"med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) ". Warpa då du är \n"
"i fara!" BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x0D") "Du kommer att teleporteras till " COLOR(ADJUSTABLE) " \n"
"Warp-punkten" COLOR(DEFAULT) ". Då du först använder\n"
"magin, så skapar du en \n"
"Warp-punkt." BOX_BREAK UNSKIPPABLE  ITEM_ICON("\x0D") "Då du använder magin \n"
"igen, så kan du antingen avskingra\n"
"Warp-punkten du skapade senast\n"
"eller warpa till den."
)

DEFINE_MESSAGE(0x00AF, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x13")  QUICKTEXT_ENABLE "Du fick " COLOR(BLUE) "Nayru's Kärlek" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Kasta den här för att skapa en\n"
"skyddande barriär. Detta är en defensiv \n"
"magi som du kan använda med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x00B0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Pilar  (50 stycken)  90 Rupees\n"
COLOR(DEFAULT) "Skjut dessa med en pilbåge. Du kan inte\n"
"köpa dem så länge du inte har en pilbåge." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00B1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Bomber  (10 stycken)  50 Rupees\n"
COLOR(DEFAULT) "Ta ut dem med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " och tryck \n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " igen för att kasta. Du kan inte\n"
"köpa dem utan en Bombsäck." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00B2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Dekunötter  (5 stycken)  15 Rupees\n"
COLOR(DEFAULT) "Kasta dem för att bedöva fiender.\n"
"Du kan endast bära ett begränsat \n"
"antal utav dem." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00B3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Fisk   200 Rupees\n"
COLOR(DEFAULT) "Precis fångad och så färsk!\n"
"Du kan ha den i en flaska." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00B4, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Du besegrade en " COLOR(RED) "Gyllene Dödskalltella" COLOR(DEFAULT) ".\n"
"Du fick en amulett som bevis \n"
"för att du har besgrat den!"
)

DEFINE_MESSAGE(0x00B5, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Du besegrade en " COLOR(RED) "Gyllene Dödskalltella" COLOR(DEFAULT) ".\n"
"Du fick en amulett som bevis \n"
"för att du har besgrat den!"
)

DEFINE_MESSAGE(0x00B6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Fairy's Spirit    50 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Buy\n"
"Don't buy" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x00B7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Älva's Själ   50 Rupees\n"
COLOR(DEFAULT) "Du behöver en tom flaska att stoppa\n"
"den i. Gå inte in i strid \n"
"utan en!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00B8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Blå Eld    300 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x00B9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Blå Eld   300 Rupees\n"
COLOR(DEFAULT) "Du behöver en tom flaska att stoppa\n"
"den i. Använd för att \n"
"kyla ned dig." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00BA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Kryp i flaska   50 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x00BB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Kryp i flaska    50 Rupees\n"
COLOR(DEFAULT) "Du behöver en tom flaska att stoppa\n"
"den i. Det ser ut som ett helt\n"
"vanligt kryp..." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00BC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Bombchu  (10 stycken)  100 Rupees\n"
COLOR(DEFAULT) "Det ser ut som en leksaksmus, men\n"
"är i själva verket en självgående tidsinställd\n"
"bomb!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00BD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Den varan är tyvärr\n"
"tillfälligt slut på lagret." COLOR(DEFAULT)  QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00BE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Kom igen! Du är för gammal för \n"
"det här spelet!" EVENT
)

DEFINE_MESSAGE(0x00BF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x40") "Va? Vad i--!" BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x50") "Uh-oh!" QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x3E") "En kund!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x00C0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x39") "zzzzz...zzzzz..." EVENT
)

DEFINE_MESSAGE(0x00C1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Pilar   (30 stycken)   60 Rupees\n"
COLOR(DEFAULT) "Du behöver en pilbåge för att skjuta dem.\n"
"Om du använder dem så tar de slut." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00C2, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x73")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Hjärtbit" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Samla fyra bitar totalt för att få\n"
"ytterligare en Hjärtbehållare. Fler\n"
"behållare betyder mer livsenergi!"
)

DEFINE_MESSAGE(0x00C3, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x73")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Hjärtbit" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Du har hittills samlat ihop två \n"
"bitar. Med två ytterligare bitar, \n"
"så får du mer livsenergi!"
)

DEFINE_MESSAGE(0x00C4, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x73")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Hjärtbit" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Du har nu samlat ihop tre \n"
"bitar! Med ytterligare en bit så \n"
"kommer din livsenergi att öka!"
)

DEFINE_MESSAGE(0x00C5, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x73")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Hjärtbit" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Du har nu färdigställt en hel\n"
"Hjärtbehållare! Din maximala livsenergi\n"
"har därmed ökat!"
)

DEFINE_MESSAGE(0x00C6, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x72")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Hjärtbehållare" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Din maximala livsenergi har \n"
"ökat med ett hjärta. Din totala\n"
"livsenergi fylls upp."
)

DEFINE_MESSAGE(0x00C7, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x74")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Bossnyckeln" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Nu kan du ta dig in i \n"
"kammaren där bossen lurar."
)

DEFINE_MESSAGE(0x00C8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Nej, du har inte tillräckligt med\n"
"Rupees!" EVENT
)

DEFINE_MESSAGE(0x00C9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x24") "Okej, du är färdig!" QUICKTEXT_DISABLE "\n"
"Var snäll och vänta utanför medan jag \n"
"färdigställer nästa utmaning!" EVENT
)

DEFINE_MESSAGE(0x00CA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Bomber   5 stycken   35 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x00CB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Bomber   (5 stycken)   35 Rupees\n"
COLOR(DEFAULT) "Ta ut dem med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " och tryck \n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " igen för att kasta. Du kan inte\n"
"köpa dem utan en bombväska." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00CC, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Du fick en " COLOR(BLUE) "Blå Rupee" COLOR(DEFAULT) "!\n"
"Det blir " COLOR(BLUE) "fem Rupees" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00CD, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x53")  QUICKTEXT_ENABLE "Du fick " COLOR(BLUE) "Silverfjället" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Hoppa i vattnet och tryck \n"
COLOR(BLUE) "[A]" COLOR(DEFAULT) ". Du kan nu dyka djupare\n"
"än vad du kunde innan."
)

DEFINE_MESSAGE(0x00CE, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  ITEM_ICON("\x54")  QUICKTEXT_ENABLE "Du fick " COLOR(BLUE) "Guldfjället" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Hoppa i vattnet och tryck \n"
COLOR(BLUE) "[A]" COLOR(DEFAULT) ". Du kan nu dyka ännu djupare\n"
"än vad du kunde innan!"
)

DEFINE_MESSAGE(0x00CF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Det verkar som att detta föremålet inte \n"
"fungerar här..." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00D0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Det går inte att öppna!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00D1, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x14") "Du har lärt dig " COLOR(ADJUSTABLE) "Saria's Visa" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x00D2, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x11") "Du har lärt dig " COLOR(RED) "Epona's Visa" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x00D3, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x0B") "Du har lärt dig " COLOR(YELLOW) "Solen's Visa" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x00D4, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x15") "Du har lärt dig " COLOR(BLUE) "Zelda's Vaggvisa" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x00D5, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x05") "Du har lärt dig " COLOR(LIGHTBLUE) "Tids-Visan" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x00D6, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du har lärt dig " COLOR(PURPLE) "Storm-Visan" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x00D7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Välkommen " NAME "!\n"
"Jag är Kraften's Stora Älva!" BOX_BREAK UNSKIPPABLE "Jag ska bevilja dig en " COLOR(ADJUSTABLE) "svärdsteknik\n"
"" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "Mottag den nu!"
)

DEFINE_MESSAGE(0x00D8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Välkommen " NAME "!\n"
"Jag är Visdomen's Stora Älva!" BOX_BREAK UNSKIPPABLE "Jag ska förbättra din " COLOR(ADJUSTABLE) "magikraft\n"
"" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "Mottag den nu!"
)

DEFINE_MESSAGE(0x00D9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Välkommen " NAME "!\n"
"Jag är Modigheten's Stora Älva!" BOX_BREAK UNSKIPPABLE "Jag ska förbättra din \n"
COLOR(LIGHTBLUE) "defensiva kraft" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "Mottag den nu!"
)

DEFINE_MESSAGE(0x00DA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Var snäll och besök mig igen,\n"
"då du är trött efter strid!" EVENT
)

DEFINE_MESSAGE(0x00DB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Välkommen " NAME "!\n"
"Jag ska lindra dina sår." EVENT
)

DEFINE_MESSAGE(0x00DC, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x58")  QUICKTEXT_ENABLE "Du fick " COLOR(RED) "Dekufrön" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Det här är små, hårda frön\n"
"som du kan använda som kulor\n"
"till din Slangbella."
)

DEFINE_MESSAGE(0x00DD, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  UNSKIPPABLE "Du bemästrade den hemliga\n"
"svärdstekniken " COLOR(RED) "Snurr-Attack" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Håll inne " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) " för att ladda upp ditt vapen!\n"
"Släpp " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) " för att släppa lös en våg\n"
"en våg utav snurrande energi!" BOX_BREAK UNSKIPPABLE "Om du vill släppa lös energin\n"
"utan att ladda upp ditt vapen, så \n"
COLOR(LIGHTBLUE) "rotera [Control-Pad] en gång " COLOR(DEFAULT) "och tryck " COLOR(ADJUSTABLE) "[B] " COLOR(DEFAULT) "för" COLOR(ADJUSTABLE) "\n"
COLOR(DEFAULT) "a mycket kraftfull snabb snurr!"
)

DEFINE_MESSAGE(0x00DE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Dekufrön 30 stycken 30 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x00DF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Dekufrön (30 stycken) 30 Rupees\n"
COLOR(DEFAULT) "Du kan använda dem som kulor till\n"
"din slangbella. Du kan inte köpa ut \n"
"dem om du inte har en Slangbella." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00E0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Du vill prata med Saria, eller?\n"
COLOR(DEFAULT) "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Prata med Saria\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x00E1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Nähä? Men vill du prata \n"
"med mig?\n"
COLOR(DEFAULT)  TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x00E2, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
SHIFT("\x3C")  NAME "...?\n"
SHIFT("\x0D") "Det är " COLOR(ADJUSTABLE) "Saria" COLOR(DEFAULT) ". Kan du höra mig?" EVENT
)

DEFINE_MESSAGE(0x00E3, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Vill du prata med Saria\n"
"igen?" COLOR(DEFAULT) "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x00E4, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "Din " COLOR(ADJUSTABLE) "Magimätare" COLOR(DEFAULT) " har förbättrats!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00E5, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "Din " COLOR(LIGHTBLUE) "defensiva kraft" COLOR(DEFAULT) " har förbättrats!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00E6, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "Du fick en " COLOR(YELLOW) "bunt med pilar" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00E7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Då du laddar upp kraft för en\n"
"Snurr-Attack, så kommer magisk kraft att\n"
"förbrukas. Håll ett öga på din\n"
"gröna " COLOR(ADJUSTABLE) "Magimätare" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Hallå, pojke! Du är budbärare till\n"
"den Kungliga familjen, eller hur?" BOX_BREAK UNSKIPPABLE "Nästa gång du är i deras\n"
"trakter, så stanna till vid\n"
"min vän som bor vid\n"
"Slottet Hyrule." BOX_BREAK UNSKIPPABLE "Hon kommer garanterat att ge dig\n"
"en ny kraft!"
)

DEFINE_MESSAGE(0x00E8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Din magiska kraft har blivit \n"
"förbättrad! Nu har du dubbelt\n"
"så mycket " COLOR(RED) "Magikraft" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x00E9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Din defensiva kraft har blivit \n"
"förbättrad! Skada som \n"
"orsakas utav fiender " COLOR(RED) "kommer att halveras" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x00EA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Välkommen " NAME "!\n"
"Jag är magin's Stora älva!" BOX_BREAK UNSKIPPABLE "Jag ska ge dig en ny " COLOR(RED) "trollformel" COLOR(DEFAULT) ".\n"
"Var snäll och ta emot den."
)

DEFINE_MESSAGE(0x00EB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Jag är ledsen, men du kan inte låna\n"
"den här masken ännu." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x00EC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du kan använda " COLOR(RED) "Din's Fire" COLOR(DEFAULT) " inte enbart för att\n"
"attackera utan även för att bränna saker!"
)

DEFINE_MESSAGE(0x00ED, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Kom ihåg, du kan endast använda " COLOR(ADJUSTABLE) "Farore's\n"
"Vind" COLOR(DEFAULT) " i områden\n"
"där det finns en gömd karta, okej?"
)

DEFINE_MESSAGE(0x00EE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(BLUE) "Nayru's Kärlek" COLOR(LIGHTBLUE) " " COLOR(DEFAULT) "är endast i effekt under\n"
"en kort stund, så använd den försiktigt."
)

DEFINE_MESSAGE(0x00EF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Var snäll och besök mig igen,\n"
"då du är trött efter strid!"
)

DEFINE_MESSAGE(0x00F0, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Röd Rupee" COLOR(DEFAULT) "!\n"
"That's " COLOR(RED) "tjugo Rupees" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00F1, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Du fick en " COLOR(PURPLE) "Lila Rupee" COLOR(DEFAULT) "!\n"
"That's " COLOR(PURPLE) "femtio Rupees" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00F2, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Du fick en " COLOR(YELLOW) "Enorm Rupee" COLOR(DEFAULT) "!\n"
"Denna Rupee är värd hejdundrande\n"
COLOR(YELLOW) "tvåhundra Rupees" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00F3, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x77")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Dörrnyckel" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Använd den här nyckeln för att fortsätta\n"
"till nästa run. Välj en skattkista \n"
"och se om turen är med dig!"
)

DEFINE_MESSAGE(0x00F4, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Förlorare!" COLOR(DEFAULT)  BOX_BREAK QUICKTEXT_ENABLE "Du hittade bara " COLOR(ADJUSTABLE) "en Rupee" COLOR(DEFAULT) ".\n"
"Turen är inte med dig." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00F5, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Förlorare!" COLOR(DEFAULT)  BOX_BREAK QUICKTEXT_ENABLE "Du hittade " COLOR(BLUE) "fem Rupees" COLOR(DEFAULT) ".\n"
"Trots det, så har du inte så värst tur." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00F6, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Förlorare!" COLOR(DEFAULT)  BOX_BREAK QUICKTEXT_ENABLE "Du hittade " COLOR(RED) "tjugo Rupees" COLOR(DEFAULT) ".\n"
"Ditt senaste val var ett misstag,\n"
"eller hur! Så frustrerande!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00F7, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
COLOR(RED) "Vinnare!" COLOR(DEFAULT)  BOX_BREAK QUICKTEXT_ENABLE "Du hittade " COLOR(YELLOW) "femtio Rupees" COLOR(DEFAULT) ".\n"
"Turen är helt enkelt på din sida grabben!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x00F8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"00f8"
)

DEFINE_MESSAGE(0x00F9, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
ITEM_ICON("\x1E")  QUICKTEXT_ENABLE "Du stoppade en " COLOR(RED) "Stor-Poe " COLOR(DEFAULT) "i en flaska!" QUICKTEXT_DISABLE "\n"
"Vi säljer den i " COLOR(RED) "Spökbutiken" COLOR(DEFAULT) "!\n"
"Någonting bra kan hända!"
)

DEFINE_MESSAGE(0x00FA, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
SHIFT("\x49")  COLOR(RED) "VINNARE" COLOR(DEFAULT) "!" BOX_BREAK ITEM_ICON("\x73")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Hjärtbit" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Samla fyra bitar totalt för att få\n"
"en ytterligare Hjärtbehållare. Fler\n"
"behållare betyder mer livsenergi!"
)

DEFINE_MESSAGE(0x00FB, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
SHIFT("\x49")  COLOR(RED) "VINNARE" COLOR(DEFAULT) "!" BOX_BREAK ITEM_ICON("\x73")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Hjärtbit" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Hittills så har du samlat två \n"
"bitar. Med två till så kommer, \n"
"din livsenergi att öka!"
)

DEFINE_MESSAGE(0x00FC, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
SHIFT("\x49")  COLOR(RED) "VINNARE" COLOR(DEFAULT) "!" BOX_BREAK ITEM_ICON("\x73")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Hjärtbit" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Du har samlat tre bitar!\n"
"Med ytterligare en bit, så kommer \n"
"din livsenergi att öka!"
)

DEFINE_MESSAGE(0x00FD, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
SHIFT("\x49")  COLOR(RED) "WINNER" COLOR(DEFAULT) "!" BOX_BREAK ITEM_ICON("\x73")  QUICKTEXT_ENABLE "Du fick en " COLOR(RED) "Hjärtbit" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Du har färdigställt ytterligare en\n"
"Hjärtbehållare! Din maximala\n"
"livsenergi har ökat!"
)

DEFINE_MESSAGE(0x00FE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Leta inte bara efter dem utomhus,\n"
"utan även i ruiner, hålor och andra platser." BOX_BREAK "Fast det är klart, det här är bara vår dröm...\n"
"Du behöver inte göra det\n"
"om du inte vill..." TEXTID("\x00\x27")
)

DEFINE_MESSAGE(0x0100, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Vad är det?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0101, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Titta, titta, " NAME "!\n"
"Du kan se ned under " COLOR(DEFAULT) "spindelväven" COLOR(LIGHTBLUE) "\n"
"med hjälp utav " COLOR(YELLOW) "[C-Up]" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0102, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Se på den här väggen! Vinrankorna\n"
"som växer upp för väggen skapar en ojämn\n"
"yta... du kanske kan klättra på \n"
"den, " NAME "!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0103, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Du kan öppna en " COLOR(DEFAULT) "dörr" COLOR(LIGHTBLUE) " genom att stå\n"
"framför den och trycka på " COLOR(BLUE) "[A]" COLOR(LIGHTBLUE) "." COLOR(DEFAULT)  BOX_BREAK UNSKIPPABLE  COLOR(LIGHTBLUE) "Håll koll på vad som står på\n"
COLOR(BLUE) "Action" COLOR(LIGHTBLUE) " " COLOR(BLUE) "Ikonen" COLOR(LIGHTBLUE) ".\n"
"Det är den " COLOR(BLUE) "blå ikonen" COLOR(LIGHTBLUE) " högst upp på\n"
"skärmen!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0104, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Titta! Någonting hänger där\n"
"uppe! Det ser ut som en gammal " COLOR(DEFAULT) "stege" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0105, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Vänta...\n"
"Är inte det samma design som är\n"
"på " COLOR(DEFAULT) "Tidsdörren" COLOR(LIGHTBLUE) "?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0106, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Det ser ut som att den där facklan\n"
"har brunnit för inte allt för längesedan..." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0107, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Härifrån, så kommer vi att gå\n"
"genom ett par trånga passager!\n"
"Om du tar det försiktigt, så kanske\n"
"du kan smyga dig på några fiender." BOX_BREAK COLOR(DEFAULT)  UNSKIPPABLE  COLOR(LIGHTBLUE) "Använd " COLOR(DEFAULT) "[Z] Markering " COLOR(LIGHTBLUE) "för att alltid titta\n"
"i rätt riktning. Sätt din\n"
"vy så att du kan se ned genom nästa\n"
"korridor före du börjar gå." BOX_BREAK COLOR(DEFAULT)  UNSKIPPABLE  COLOR(LIGHTBLUE) "Då du har ställt in din vy, håll inne\n"
COLOR(DEFAULT) "[Z] " COLOR(LIGHTBLUE) "för att " COLOR(DEFAULT) "gå på sidan " COLOR(LIGHTBLUE) "runt kröken.\n"
"På det viset så behöver du inte bli överraskad\n"
"utav en fiende som väntar på dig i ett bakhåll." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0108, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Stå jämsides med " COLOR(DEFAULT) "blocket" COLOR(LIGHTBLUE) " och ta\n"
"tag i det med " COLOR(BLUE) "[A]" COLOR(LIGHTBLUE) ". Medan du håller inne\n"
COLOR(BLUE) "[A]" COLOR(LIGHTBLUE) ", så kan du knuffa eller dra." BOX_BREAK COLOR(DEFAULT)  UNSKIPPABLE  COLOR(LIGHTBLUE) "Om du står jämsides med " COLOR(DEFAULT) "blocket" COLOR(LIGHTBLUE) "\n"
"och trycker " COLOR(BLUE) "[A]" COLOR(LIGHTBLUE) " medan du trycker " COLOR(DEFAULT) "[Control-Pad]" COLOR(LIGHTBLUE) "\n"
"emot " COLOR(DEFAULT) "blocket" COLOR(LIGHTBLUE) ", så kan du klättra\n"
"upp på det." BOX_BREAK COLOR(DEFAULT)  UNSKIPPABLE  COLOR(LIGHTBLUE) "Håll utkik på vad " COLOR(BLUE) "Action\n"
"Ikonen " COLOR(LIGHTBLUE) "säger!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0109, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0109"
)

DEFINE_MESSAGE(0x010A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"010a"
)

DEFINE_MESSAGE(0x010B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"010b"
)

DEFINE_MESSAGE(0x010C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Då du är i vattnet, om\n"
"du håller nere" COLOR(BLUE) " [A]" COLOR(LIGHTBLUE) ", så kan du dyka!\n"
"Jag slår vad om att det kan finnas en\n"
"hel del intressant under vattnet!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x010D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"010d"
)

DEFINE_MESSAGE(0x010E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"010e"
)

DEFINE_MESSAGE(0x010F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"010f"
)

DEFINE_MESSAGE(0x0110, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0110"
)

DEFINE_MESSAGE(0x0111, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0111"
)

DEFINE_MESSAGE(0x0112, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0112"
)

DEFINE_MESSAGE(0x0113, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0113"
)

DEFINE_MESSAGE(0x0114, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Wow! Se på alla dessa \n"
COLOR(DEFAULT) "Bomb-blommor" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  BOX_BREAK UNSKIPPABLE  COLOR(LIGHTBLUE) "Finns det något sätt som du kan sätta\n"
"eld på dem allihop på samma gång?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0115, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Det ser ut som att det finns många " COLOR(DEFAULT) "lavagropar\n"
" " COLOR(LIGHTBLUE) "här omkring, se upp vart\n"
"du går!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0116, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Med den brytaren på, så rör sig\n"
COLOR(DEFAULT) "plattformen " COLOR(LIGHTBLUE) "högre upp. Nu kan du\n"
"snabbt nå andra våningen!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0117, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0117"
)

DEFINE_MESSAGE(0x0118, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0118"
)

DEFINE_MESSAGE(0x0119, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Man vet aldrig vad som rör sig\n"
"bakom nästa hörn i dessa trånga\n"
"gångar...." BOX_BREAK COLOR(DEFAULT)  UNSKIPPABLE  COLOR(LIGHTBLUE) "Använd " COLOR(DEFAULT) "[Z] Markering " COLOR(LIGHTBLUE) "för att alltid se\n"
"i rätt riktning. Det här är en\n"
"användbar teknik, eller hur?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x011A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"011a"
)

DEFINE_MESSAGE(0x011B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"011b"
)

DEFINE_MESSAGE(0x011C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"011c"
)

DEFINE_MESSAGE(0x011D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"011d"
)

DEFINE_MESSAGE(0x011E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"011e"
)

DEFINE_MESSAGE(0x011F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE)  NAME ", vad tittar \n"
"du på?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0120, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0120"
)

DEFINE_MESSAGE(0x0121, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0121"
)

DEFINE_MESSAGE(0x0122, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0122"
)

DEFINE_MESSAGE(0x0123, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0123"
)

DEFINE_MESSAGE(0x0124, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Ökenkolossen's ansikte...det \n"
"ser verkligen ondskefullt ut!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0125, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0125"
)

DEFINE_MESSAGE(0x0126, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Jag kan höra andeväsen viska \n"
"i det här rummet..." BOX_BREAK COLOR(DEFAULT)  UNSKIPPABLE "\"Håll utkik efter sanningen's öga...\"\n"
COLOR(LIGHTBLUE) "Det är vad de säger!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0127, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0127"
)

DEFINE_MESSAGE(0x0128, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Här...jag kan höra andeväsen\n"
"viska i det här rummet..." COLOR(DEFAULT)  BOX_BREAK UNSKIPPABLE "\"De som har " COLOR(RED) "heliga fötter " COLOR(DEFAULT) "\n"
"bör låta vinden vägleda dem.\n"
"De kommer då att ledas in på den \n"
"hemliga vägen.\"" BOX_BREAK COLOR(LIGHTBLUE) "Det är vad de säger!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0129, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den här väggen...det står någonting här...\n"
COLOR(DEFAULT) "\"Fara ovanför...\"" COLOR(LIGHTBLUE) "\n"
"Det är vad som står skrivet." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x012A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den här väggen...det står någonting här...\n"
COLOR(DEFAULT) "\"Fara underifrån...\"\n"
COLOR(LIGHTBLUE) "Det är vad som står skrivet." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x012B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Vattnet som flödar ut ur den här \n"
"statyn översvämmar hela rummet." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x012C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"012c"
)

DEFINE_MESSAGE(0x012D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"012d"
)

DEFINE_MESSAGE(0x012E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"012e"
)

DEFINE_MESSAGE(0x012F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Se upp, " NAME "!\n"
"Elektricitet flödar genom\n"
"den här " COLOR(ADJUSTABLE) "gröna slimiga saken" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0130, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0130"
)

DEFINE_MESSAGE(0x0131, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Se upp " NAME "!\n"
"Elektricitet flödar genom\n"
"den här " COLOR(RED) "röda slimiga saken" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0132, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Se upp " NAME "!\n"
"Elektricitet flödar genom\n"
"den här " COLOR(BLUE) "blå slimiga saken" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0133, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den här " COLOR(DEFAULT) "brytaren" COLOR(LIGHTBLUE) "...\n"
"Det ser inte ut som att du kan trycka\n"
"ned den med enbart din vikt,\n"
NAME "..." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0134, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0134"
)

DEFINE_MESSAGE(0x0135, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0135"
)

DEFINE_MESSAGE(0x0136, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0136"
)

DEFINE_MESSAGE(0x0137, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den " COLOR(RED) "röda slämmiga saken " COLOR(LIGHTBLUE) "är borta! \n"
"Det måste vara för att du skar av den\n"
COLOR(RED) "röda svansen" COLOR(LIGHTBLUE) "! Kan det fungera med \n"
"de andra också?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0138, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0138"
)

DEFINE_MESSAGE(0x0139, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Det finns en knapp bortom den här\n"
"väggen!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x013A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Det ser ut att finnas någonting\n"
"där uppe på plattformen!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x013B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"013b"
)

DEFINE_MESSAGE(0x013C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"013c"
)

DEFINE_MESSAGE(0x013D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x42")  COLOR(LIGHTBLUE) "VAAA!?" BOX_BREAK COLOR(DEFAULT)  UNSKIPPABLE  COLOR(LIGHTBLUE) "Kolla på alla de där " COLOR(DEFAULT) "flaggorna" COLOR(LIGHTBLUE) "!\n"
"Kan du lista ut vilka som är\n"
"riktiga?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x013E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"013e"
)

DEFINE_MESSAGE(0x013F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"013f"
)

DEFINE_MESSAGE(0x0140, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Det " COLOR(DEFAULT) "Stora Deku Trädet" COLOR(RED) " " COLOR(LIGHTBLUE) "har \n"
"kallat på dig!\n"
"Följ efter mig, är du snäll!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0141, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Kom igen! Var modig!\n"
"Vi går in i det \n"
"Stora Deku Trädet!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0142, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Det Stora Deku Trädet ville att\n"
"vi skulle besöka prinsessan i\n"
COLOR(DEFAULT) "Hyrules Slott" COLOR(LIGHTBLUE) ".... Borde vi inte\n"
"börja ta oss dit?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0143, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Flickan från ranchen begärde oss\n"
"att hitta hennes " COLOR(DEFAULT) "pappa" COLOR(LIGHTBLUE) "...Jag undrar var\n"
"han är?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0144, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Undras var vi kan hitta \n"
COLOR(DEFAULT) "prinsessan " COLOR(LIGHTBLUE) "i det här stora gamla slottet?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0145, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Vad skulle " COLOR(DEFAULT) "Saria" COLOR(RED) " " COLOR(LIGHTBLUE) "säga om vi berättade\n"
"för henne att vi ska rädda Hyrule?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0146, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Impa " COLOR(LIGHTBLUE) "sa att Själastenen\n"
"av Eld finns någonstans på " COLOR(DEFAULT) "Det Döda\n"
"Berget" COLOR(LIGHTBLUE) "." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0147, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Vi tar oss in i Dodongos\n"
"Grotta med hjälp av en " COLOR(DEFAULT) "Bomb Blomma" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0148, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Darunia sa att det bor en " COLOR(DEFAULT) "Älva\n"
COLOR(LIGHTBLUE) "på toppen av Det Döda Berget,\n"
"gjorde han inte?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0149, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Jag undrar om " COLOR(DEFAULT) "Saria " COLOR(LIGHTBLUE) "vet någonting\n"
"om de andra Själatenarna?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x014A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Det verkar  som att " COLOR(DEFAULT) "Prinsessan Ruto " COLOR(LIGHTBLUE) "på något sätt " COLOR(DEFAULT) "\n"
COLOR(LIGHTBLUE) "har hamnat inne i Jabu-Jabu's mage..." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x014B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Du samlade ihop tre Själastenar!\n"
"Låt oss återvända till " COLOR(DEFAULT) "Hyrule\n"
"Slottet" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x014C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "De där två, på den vita hästen...\n"
"det var Zelda och Impa, eller hur?\n"
"Det såg ut som att hon kastade \n"
"någonting i " COLOR(DEFAULT) "vallgraven" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x014D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Vi går och tittar i \n"
COLOR(DEFAULT) "Tidens Tempel" COLOR(LIGHTBLUE) "." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x014E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Borde vi lita på vad Sheik sa \n"
"och gå till " COLOR(DEFAULT) "Kakariko Byn" COLOR(LIGHTBLUE) "?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x014F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"014f"
)

DEFINE_MESSAGE(0x0150, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Jag undrar vad som är på gång i \n"
"skogen just nu... Jag är orolig\n"
"för " COLOR(DEFAULT) "Saria" COLOR(LIGHTBLUE) ", också!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0151, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Det där molnet över " COLOR(DEFAULT) "Det Döda Berget" COLOR(LIGHTBLUE) "...\n"
"det är någonting oroande med \n"
"det..." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0152, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "En isande vind blåser in från\n"
COLOR(DEFAULT) "Zora's Flod" COLOR(LIGHTBLUE) "...kan du känna den?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0153, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "De där " COLOR(DEFAULT) "Järn Kängorna " COLOR(LIGHTBLUE) "ser ut\n"
"att väga ett ton! Om du tar\n"
"dem på dig, kan du säkert\n"
"gå på botten av en sjö." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0154, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Låt oss leta efter någon som kanske\n"
"vet någonting om de andra\n"
COLOR(DEFAULT) "Vise Männen" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0155, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Det där monstret! Det kom upp ur \n"
COLOR(DEFAULT) "brunnen i byn" COLOR(LIGHTBLUE) "! Vi går och \n"
"undersöker brunnen!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0156, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Jag undrar vem som byggde " COLOR(DEFAULT) "Templet" COLOR(LIGHTBLUE) "\n"
COLOR(DEFAULT) "av Själar" COLOR(LIGHTBLUE) ", och till vilket ändamål?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0157, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Har du ännu provat att spela \n"
COLOR(PURPLE) "Skuggans Nokturna" COLOR(LIGHTBLUE) " som Sheik\n"
"lärde dig?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0158, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "I " COLOR(DEFAULT) "öknen" COLOR(LIGHTBLUE) "... det är där\n"
"den Onda Kungen Ganondorf föddes.\n"
"Om vi går dit, kanske vi finner\n"
"någonting..." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0159, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0159"
)

DEFINE_MESSAGE(0x015A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Ta på " COLOR(DEFAULT) "Silver Handskarna \n"
COLOR(LIGHTBLUE) "och försök att lyfta saker som \n"
"du inte ens kunde rubba tidigare!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x015B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Personen som väntar på oss vid\n"
"Tidens Tempel... det måste vara..." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x015C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Vi måste befria Prinsessan Zelda\n"
"från hennes fångenskap i Ganons\n"
"Slott!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x015D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"015D"
)

DEFINE_MESSAGE(0x015E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"015E"
)

DEFINE_MESSAGE(0x015F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE)  NAME "...\n"
"Try to keep moving!!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0160, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Jag har inget emot att prata med \n"
"dig genom Okarinans magi, men\n"
"jag skulle föredra att se \n"
"dig ansikte mot ansikte!" EVENT
)

DEFINE_MESSAGE(0x0161, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Skogen är kopplad till många \n"
"olika ställen! Om du kan höra min sång,\n"
"så måste du vara någonstans som har\n"
"förbindelse med skogen!" EVENT
)

DEFINE_MESSAGE(0x0162, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Jag blev så  glad när jag hörde att\n"
"Herr Darunia älskade min sång väldigt mycket!\n"
BOX_BREAK "Ännu gladare blev jag när fick veta att\n"
"den hjälpte dig på ditt uppdrag,\n"
NAME "!\n"
"Hii hi hi!" EVENT
)

DEFINE_MESSAGE(0x0163, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Samlar du ihop Själastenarna?\n"
"Du har ännu en kvar att finna?\n"
"Du menar " COLOR(BLUE) "Vattnets \n"
"Stjälasten" COLOR(DEFAULT) ", eller hur?" BOX_BREAK "Det Stora Deku Trädet berättade en gång\n"
"för mig att " COLOR(BLUE) "Kung Zora, härskaren över Zoras \n"
"Domän, " COLOR(DEFAULT) "har den..." EVENT
)

DEFINE_MESSAGE(0x0164, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Samlar du ihop Själastenarna?\n"
"Du har ännu en kvar att finna?\n"
"Du menar " COLOR(RED) "Eldens \n"
"Stjälasten" COLOR(DEFAULT) ", eller hur?" BOX_BREAK "Det Stora Deku Trädet berättade en gång\n"
"för mig att" COLOR(RED) "Herr Darunia av Goron folket\n"
COLOR(DEFAULT) "har den..." EVENT
)

DEFINE_MESSAGE(0x0165, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
NAME "...\n"
"Jag vet inte vad det är...\n"
"Jag känner av något fruktansvärt..." BOX_BREAK "Slottet...\n"
"någonting jätte hemsk är på gång\n"
"vid Slottet!" EVENT
)

DEFINE_MESSAGE(0x0166, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Hmm? Din okarina låter...\n"
"annorlunda på något sätt... \n"
"Du har tränat väldigt mycket, eller hur,\n"
NAME "?" EVENT
)

DEFINE_MESSAGE(0x0167, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Söker du efter ett tempel?\n"
"Jag hörde en gång, från en mystisk fågel..." BOX_BREAK "\"" COLOR(LIGHTBLUE) "Ögonen som ser genom\n"
"mörkret, kan öppnas av en storm." COLOR(DEFAULT) "\"\n"
"Har du någon aning vad han kan\n"
"ha menat med det?" EVENT
)

DEFINE_MESSAGE(0x0168, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Var är du, " NAME "?\n"
"Söker du efter ett tempel?\n"
"Jag hörde en gång, från en mystisk fågel...\n"
BOX_BREAK "\"" COLOR(LIGHTBLUE) "Gå, unge man. Gå till\n"
"Öken Gudinnan med en okarina." COLOR(DEFAULT) "\"\n"
"Har du någon aning vad han kan\n"
"ha menat med det?" EVENT
)

DEFINE_MESSAGE(0x0169, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Har du hittat alla templen ännu?" EVENT
)

DEFINE_MESSAGE(0x016A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Så bra! Du är i säkerhet!\n"
"Jag visste att jag skulle höra\n"
"från dig igen!" BOX_BREAK "Jag är i " COLOR(ADJUSTABLE) "Skogstemplet" COLOR(DEFAULT) "!\n"
"Skogsandarna behövde hjälp och kallade på mig,\n"
"så jag kom hit för att titta till dem...\n"
BOX_BREAK "Men stället är fullt av onda monster!\n"
"Hjälp mig, " NAME "!" EVENT
)

DEFINE_MESSAGE(0x016B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
NAME "...\n"
"Från början, ville jag inte bli\n"
COLOR(ADJUSTABLE) "Skogens Vise" COLOR(DEFAULT) "...." BOX_BREAK "Men nu känner jag mig lättad." BOX_BREAK "Eftersom jag  hjälper dig att rädda\n"
"Hyrule, " NAME "!\n"
"Ja, det är jag!" EVENT
)

DEFINE_MESSAGE(0x016C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Om alla sex " COLOR(RED) "Vise" COLOR(DEFAULT) " står tillsammans, \n"
"kan vi fängsla Ganondorf,\n"
"Ondskans Konung, i det Helgade Riket." BOX_BREAK "Men, för att skapa en perfekt\n"
"försägling, behöver vi den" COLOR(RED) "sjunde \n"
"Sage" COLOR(DEFAULT) "." BOX_BREAK "Någon som du känner måste vara den\n"
"Sage, " NAME "..." BOX_BREAK "Från och med nu, måste du färdas \n"
"mellan framtiden och det förflutna för att\n"
"väcka de återstående Visa!" BOX_BREAK "Fortsätt i den här stilen,\n"
NAME "!" EVENT
)

DEFINE_MESSAGE(0x016D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"Vi, de Sex Visa, delar\n"
"vår kraft med dig!" BOX_BREAK "Hyrules öde vilar på\n"
"dina axlar!" EVENT
)

DEFINE_MESSAGE(0x016E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"016e"
)

DEFINE_MESSAGE(0x016F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"016f"
)

DEFINE_MESSAGE(0x0180, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Jag hör en röst...\n"
"någonstans ifrån..." COLOR(DEFAULT)  BOX_BREAK UNSKIPPABLE  COLOR(LIGHTBLUE) "Den säger:\n"
COLOR(DEFAULT)  SHIFT("\x11") "\"Samla ihop fem silver Rupees...\""
)

DEFINE_MESSAGE(0x0181, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den här väggen... den talar!" COLOR(DEFAULT)  BOX_BREAK UNSKIPPABLE  COLOR(LIGHTBLUE) "Den säger:\n"
COLOR(DEFAULT) "Om du vill se färjan som går till \n"
SHIFT("\x1E") "den andra världen, kom hit..."
)

DEFINE_MESSAGE(0x0182, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0182"
)

DEFINE_MESSAGE(0x0183, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Om du vill färdas med " COLOR(DEFAULT) "båten" COLOR(LIGHTBLUE) ", var \n"
"försiktig! Den ser väldigt gammal ut... Vem\n"
"vet när den plötsligt sjunker?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0184, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Det finns en " COLOR(DEFAULT) "dörr " COLOR(LIGHTBLUE) "här borta... Finns \n"
"det något sätt att ta sig över?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0185, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0185"
)

DEFINE_MESSAGE(0x0186, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den där " COLOR(DEFAULT) "röda isen" COLOR(LIGHTBLUE) "...den är så konstig!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0187, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0187"
)

DEFINE_MESSAGE(0x0188, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0188"
)

DEFINE_MESSAGE(0x0189, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den här " COLOR(DEFAULT) "blåa elden" COLOR(LIGHTBLUE) "...den verkar inte\n"
"naturlig. Kanske du kan använda den till\n"
"någonting?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x018A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"018a"
)

DEFINE_MESSAGE(0x018B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"018b"
)

DEFINE_MESSAGE(0x018C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(DEFAULT) "Facklornas Lågor " COLOR(LIGHTBLUE) "är borta.\n"
"Det verkar som om spökena tog dem \n"
"med sig!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x018D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Titta, " NAME "! En " COLOR(DEFAULT) "fackla" COLOR(LIGHTBLUE) "\n"
"är tänd! Det måste vara för att\n"
"du besegrade ett spöke, eller hur?!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x018E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"018e"
)

DEFINE_MESSAGE(0x018F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Det finns " COLOR(DEFAULT) "pilar " COLOR(LIGHTBLUE) "målade på marken" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0190, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den här " COLOR(DEFAULT) "korridoren " COLOR(LIGHTBLUE) "är helt förvriden!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0191, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Se upp för " COLOR(DEFAULT) "skuggorna av\n"
"monster " COLOR(LIGHTBLUE) "som hänger i taket" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0192, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Här finns en " COLOR(DEFAULT) "skattkista." COLOR(LIGHTBLUE)
)

DEFINE_MESSAGE(0x0193, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0193"
)

DEFINE_MESSAGE(0x0194, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Det här... det är samma " COLOR(DEFAULT) "fackla" COLOR(LIGHTBLUE) " som\n"
"vi såg vid ingånden av templet,\n"
"eller hur?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0195, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den här " COLOR(DEFAULT) "facklan" COLOR(LIGHTBLUE) " är tänd... det betyder att..." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0196, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0196"
)

DEFINE_MESSAGE(0x0197, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den här " COLOR(DEFAULT) "knappen" COLOR(LIGHTBLUE) " är helt frusen!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0198, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE)  NAME ", se upp!\n"
"Taket faller ned!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0199, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"0199"
)

DEFINE_MESSAGE(0x019A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"019a"
)

DEFINE_MESSAGE(0x019B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"019b"
)

DEFINE_MESSAGE(0x019C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"019c"
)

DEFINE_MESSAGE(0x019D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"019d"
)

DEFINE_MESSAGE(0x019E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"019e"
)

DEFINE_MESSAGE(0x019F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"019f"
)

DEFINE_MESSAGE(0x01A0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"01a0"
)

DEFINE_MESSAGE(0x01A1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"01a1"
)

DEFINE_MESSAGE(0x01A2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"01a2"
)

DEFINE_MESSAGE(0x01A3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE)  NAME ", jag hör " COLOR(DEFAULT) "Goron \n"
"röster " COLOR(LIGHTBLUE) "från nedan." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x01A4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"01a4"
)

DEFINE_MESSAGE(0x01A5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Du kan se ner härifrån...\n"
"Är inte det där rummet var vi såg\n"
COLOR(DEFAULT) "Darunia" COLOR(LIGHTBLUE) "?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x01A6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"01a6"
)

DEFINE_MESSAGE(0x01A7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den här " COLOR(DEFAULT) "statyn" COLOR(LIGHTBLUE) "...har vi inte sett\n"
"den någonstans tidigare?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x01A8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"01a8"
)

DEFINE_MESSAGE(0x01A9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Den här " COLOR(DEFAULT) "knappen " COLOR(LIGHTBLUE) "ser rostig ut." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x01AA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"01aa"
)

DEFINE_MESSAGE(0x01AB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE)  NAME "! Var försiktig!\n"
"Låt dig inte sväljas upp av \n"
"virvelströmmarna!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x01AC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"01ac"
)

DEFINE_MESSAGE(0x01AD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"01ad"
)

DEFINE_MESSAGE(0x01AE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"01ae"
)

DEFINE_MESSAGE(0x01AF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"01af"
)

DEFINE_MESSAGE(0x01B0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"01b0"
)

DEFINE_MESSAGE(0x01B1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"01B1"
)

DEFINE_MESSAGE(0x0200, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x0F") "Hej där! Jag är en talande dörr!"
)

DEFINE_MESSAGE(0x0201, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x06")  COLOR(LIGHTBLUE) "Underligt...den här dörren vägrar öppnas..." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0202, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x04")  COLOR(LIGHTBLUE) "Starka " COLOR(DEFAULT) "järn galler " COLOR(LIGHTBLUE) "blockerar dörren.\n"
COLOR(DEFAULT)  SHIFT("\x0B")  COLOR(LIGHTBLUE) "Du kan inte öppna dem\n"
COLOR(DEFAULT)  SHIFT("\x40")  COLOR(LIGHTBLUE) "med dina händer!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0203, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x09")  COLOR(LIGHTBLUE) "Du behöver en " COLOR(DEFAULT) "Nyckel" COLOR(LIGHTBLUE) " för att öppna en dörr\n"
COLOR(DEFAULT)  SHIFT("\x14")  COLOR(LIGHTBLUE) "under lås och bom." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0204, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x21")  COLOR(LIGHTBLUE) "Du behöver en " COLOR(DEFAULT) "speciell nyckel\n"
SHIFT("\x28")  COLOR(LIGHTBLUE) "för att kunna öppna den här dörren." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0205, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE "Var tyst!" QUICKTEXT_DISABLE  BOX_BREAK "Klockan är ju bara " TIME "!\n"
"Jag, " COLOR(RED) "Dampé " COLOR(DEFAULT) "gravskötaren, har\n"
"gått till sängs!" BOX_BREAK "Försvinn och lek någon annanstans! Kanske du\n"
"kan hitta dig ett spöke under dagstid?"
)

DEFINE_MESSAGE(0x0206, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Klockan är nu " TIME ".\n"
COLOR(RED) "Gravgrävarturnén" COLOR(DEFAULT) " är nu över \n"
BOX_BREAK "Jag, " COLOR(RED) "Dampé" COLOR(DEFAULT) " gravskötaren, försöker\n"
"att såva!" BOX_BREAK "Försvinn och lek någon annanstans! Kanske du\n"
"kan hitta dig ett spöke!"
)

DEFINE_MESSAGE(0x0207, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Glada Mask Butiken\n"
COLOR(DEFAULT) "Var god och läs denna skylt innan\n"
"du använder digav min butik." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE  COLOR(RED) "Hur Butiken Fungerar\n"
COLOR(DEFAULT) "Vi säljer inte masker i den här butiken.\n"
"Vi " COLOR(RED) "lånar" COLOR(DEFAULT) " endast ut dem till dig." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Du kan sälja de lånade maskerna\n"
"på egen hand." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Du betalar sedan tillbaka " COLOR(RED) "pengarna" COLOR(DEFAULT) " för masken\n"
"och vi lånar dig en\n"
"nyare modell." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Du kan låna masker som du redan\n"
"har sålt tidigare igen; men du \n"
"kan endast sälja en mask av varje modell\n"
"en gång." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Var god och pröva på min butik!\n"
SHIFT("\x14") "--Ägaren Av Glada Mask Butiken" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0208, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Skuggornas Tempel...\n"
"Här finns samlat Hyrules blodiga \n"
"förflutna av girighet och hat..." EVENT
)

DEFINE_MESSAGE(0x0209, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Det som gömmer sig i mörkret...\n"
"Knep fulla av illvilja...\n"
"Vägen frammåt är dold..." EVENT
)

DEFINE_MESSAGE(0x020A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Han som finner sig " COLOR(RED) "sanningens öga\n"
COLOR(DEFAULT) "bär förmågan att se vad som gömmer\n"
"sig i mörkret." EVENT
)

DEFINE_MESSAGE(0x020B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Ingången är täckt av någonting\n"
"främmande. Du måste lösa\n"
COLOR(DEFAULT) "pusslet" COLOR(LIGHTBLUE) " i rummet för att få\n"
"ingången att öppnas." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x020C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Gigantisk död Dodongo...\n"
"när dess ögon ser rött,\n"
"kommer en ny väg att\n"
"uppenbara sig." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x020D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
SHIFT("\x1E")  COLOR(LIGHTBLUE) "Skattkiste Tävling\n"
COLOR(DEFAULT)  SHIFT("\x2D") "Tillfälligt Stängd\n"
SHIFT("\x38") "Öppen Inatt!"
)

DEFINE_MESSAGE(0x020E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
COLOR(LIGHTBLUE) "Medicin Butik\n"
COLOR(DEFAULT) "Stängd för idag"
)

DEFINE_MESSAGE(0x020F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
COLOR(LIGHTBLUE) "Skytte Galleria\n"
COLOR(DEFAULT) "Endast öppen under dagstid"
)

DEFINE_MESSAGE(0x0210, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
COLOR(LIGHTBLUE) "Glada Mask Butiken\n"
COLOR(DEFAULT) "Söker deltidsanställda\n"
"Ansök under dagstid"
)

DEFINE_MESSAGE(0x0211, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
COLOR(LIGHTBLUE) "Basar\n"
COLOR(DEFAULT) "Öppen endast under dagstid"
)

DEFINE_MESSAGE(0x0212, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Visa mig ljuset!"
)

DEFINE_MESSAGE(0x0213, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Han som bär " COLOR(RED) "sanningens öga " COLOR(DEFAULT) "blir\n"
"ledd till Själarnas Tempel av\n"
"ett inbjudande spöke." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0214, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "De som önskar sig öppna vägen\n"
"som såver på sjöns botten\n"
"måste spela " COLOR(RED) "sången som gått i arv\n"
"av Kungafamiljen" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0215, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "De som önskar sig öppna porten\n"
"bortom de avlägsna höjderna, spela " COLOR(RED) "sången\n"
"som gått i arv av Kungafamiljen" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0216, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"De som finner sig en " COLOR(RED) "Liten Nyckel" COLOR(DEFAULT) " kan\n"
"göra framsteg till nästa rum. Om de inte\n"
"kan, får de gå hem igen!"
)

DEFINE_MESSAGE(0x0217, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om du önskar du tala till mig,\n"
"gör då det från plattformen." EVENT
)

DEFINE_MESSAGE(0x0218, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SFX("\x68\x6D")  QUICKTEXT_ENABLE "Hallå, " NAME "!" QUICKTEXT_DISABLE "\n"
"Titta hitåt!" BOX_BREAK "Titta hit med " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "knappen, och prata \n"
"med mig genom att trycka " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x0219, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Klockan är för tillfället: " COLOR(RED)  TIME  COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x021A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Skin ett ljus över de levande döda..."
)

DEFINE_MESSAGE(0x021B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Han som bryter sig in i den Kungliga \n"
"Graven möter förhinder av\n"
COLOR(RED) "de som lurar i mörkret" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x021C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
"Hallå där! Unge man, här borta!\n"
"Titta hitåt, inne i fängelsecellen!" EVENT
)

DEFINE_MESSAGE(0x021D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Min lilla pojke är inte här just nu \n"
"Jag tror han begav sig till gravgården \n"
"för att leka..."
)

DEFINE_MESSAGE(0x021E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oj, min pojke såver för tillfället.\n"
"Var snäll och kom tillbaka någon annan gång\n"
"om du vill leka med honom!"
)

DEFINE_MESSAGE(0x021F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "När sjön fylls av vattnets brus, \n"
"skjut din pil mot morgonens ljus." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0220, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Om du vill färdas till \n"
"framtiden, återvänd då hit \n"
"med " COLOR(BLUE) "kraften av silver " COLOR(DEFAULT) "från det \n"
"förflutna." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0221, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Om du vill ta dig till det \n"
"förflutna, återvänd hit med ett\n"
"barns rena hjärta." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0222, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Denna dör är för tillfället under\n"
"renovering." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0223, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Det ser ut som att det brukade finnas\n"
"något i den här ställningen..." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0224, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x20") "Få min näbb att peka ut den\n"
SHIFT("\x3A")  COLOR(RED) "sanna dödskallen" COLOR(DEFAULT) "." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x0C") "Ditt andra val är att att sjunka ned i\n"
SHIFT("\x2D") "mörkrets djup." QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x0225, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Detta är inte den korrekta " COLOR(DEFAULT) "nyckeln" COLOR(LIGHTBLUE) "...\n"
"Dörren vägrar öppnas!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0226, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x27")  COLOR(LIGHTBLUE) "Farmors Häxbrygd Butik\n"
COLOR(DEFAULT)  SHIFT("\x4F") "Stängd" QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x28") "Borta på Fältstudier\n"
SHIFT("\x28") "Välkommen åter!\n"
SHIFT("\x4A") "--Farmor" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0227, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE "Vem där? En sån oförskämd unge,\n"
"försöker ta sig in genom bakdörren!\n"
QUICKTEXT_DISABLE  BOX_BREAK TEXT_SPEED("\x02") "Så oförskämt..." TEXT_SPEED("\x00") "\n"
"Jag har saftigt skvaller!" BOX_BREAK "Byggarbetarnas chef har en son...\n"
"Det är killen som sitter under trädet\n"
"i mitten av byn varje natt..." BOX_BREAK "Säg inte åt Byggmästaren att\n"
"jag berättade det!"
)

DEFINE_MESSAGE(0x0228, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
COLOR(LIGHTBLUE) "Titta på det här!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0229, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
"Malon har gått och såva!\n"
"Jag är också påväg till sängs.\n"
"Kom tillbaka när det är\n"
"ljust ute!"
)

DEFINE_MESSAGE(0x022A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE  COLOR(RED)  NAME "s Rekord!\n"
COLOR(DEFAULT) "Antal spindlar mosade: " TOKENS "\n"
"Största fiskfångsten: " HIGHSCORE(HS_LARGEST_FISH) " pund" QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Maraton tid: " HIGHSCORE(HS_MARATHON) "\n"
"Kapplöpningstid: " HIGHSCORE(HS_HORSE_RACE) "\n"
"Bågskytte från hästrygg: " HIGHSCORE(HS_HORSE_ARCHERY) " poäng" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x022B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x06") "Kungafamiljen av Hyrules vapen\n"
SHIFT("\x1E") "är inskrivet här." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x022C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE  SHIFT("\x54") "R.I.P.\n"
SHIFT("\x08") "Här vilar själarna av dem\n"
SHIFT("\x2A") "som svor trohet till\n"
SHIFT("\x23") "Kungafamiljen av Hyrule" QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x0F") "Sheikah folket, väktarna av\n"
SHIFT("\x11") "Kungafamiljen och Kakarikos\n"
SHIFT("\x02") "grundare, vaka över dessa själar\n"
SHIFT("\x1E") "i deras eviga sömn." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x022D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE  SHIFT("\x28")  COLOR(BLUE) "Sömnlösa Vattenfall\n"
COLOR(DEFAULT)  SHIFT("\x05") "Flödet från detta vattenfall tjänar\n"
SHIFT("\x02") "Kungen av Hyrule. När Kungen\n"
SHIFT("\x09") "är i vila, går fallen i följe." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x022E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Några grodor tittar på dig\n"
"under vattnet ifrån..."
)

DEFINE_MESSAGE(0x022F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Du står på en mjuk matta\n"
"för gäster...\n"
"Den känns underbar under dina fötter!"
)

DEFINE_MESSAGE(0x0230, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Om du kan övervinna " COLOR(RED) "utmaningarna " COLOR(DEFAULT) "i\n"
"kamrarna framför, då och endast då\n"
"är du kvalificerad innehavet av\n"
"vår hemliga klenod!"
)

DEFINE_MESSAGE(0x0231, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Om du åtrår att förvärva vår\n"
"gömda skatt, måste du sträva\n"
"efter att beslagta " COLOR(RED) "nycklarna " COLOR(DEFAULT) "som finns gömda\n"
"i varje kammare!"
)

DEFINE_MESSAGE(0x0232, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Besegra alla fiender inom " COLOR(RED) "utsatt tid" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x0233, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Samla ihop " COLOR(RED) "ädelstenarna under vattnet" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x0234, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Korsa havet av eld!"
)

DEFINE_MESSAGE(0x0235, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Finn den hemliga öppningen\n"
"i rummet!"
)

DEFINE_MESSAGE(0x0236, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Förblinda " COLOR(RED) "statyns ögon" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x0237, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Den som bär " COLOR(RED) "händer av silver" COLOR(DEFAULT) " bör förflytta\n"
"ett gigantiskt block!"
)

DEFINE_MESSAGE(0x0238, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Utan de nödvändiga föremålen, blir\n"
"du konfunderad över omöjliga\n"
"mysterier."
)

DEFINE_MESSAGE(0x0239, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Samla ihop de " COLOR(RED) "vita juvelerna" COLOR(DEFAULT) ", och\n"
"undvik de farliga fällorna!"
)

DEFINE_MESSAGE(0x023A, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x3F")  COLOR(LIGHTBLUE) "Fiskedamm" COLOR(DEFAULT) "\n"
SHIFT("\x07") "Fiskarna nappar verkligen bra idag!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x023B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x4E")  COLOR(LIGHTBLUE) "....???" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x023C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x05") "Skuggan viker undan endast för den\n"
SHIFT("\x0E") "som bär " COLOR(RED) "sanningens öga" COLOR(DEFAULT) ", efterlämnat\n"
SHIFT("\x1C") " i Kakariko Byn." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0300, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
BACKGROUND("\x00", "\x01", "\x10")
)

DEFINE_MESSAGE(0x0301, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x41")  COLOR(LIGHTBLUE) "Hyrules Slättmarker" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0302, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x2C")  COLOR(LIGHTBLUE) "Hyrule Slottsstad" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0303, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x2D")  COLOR(LIGHTBLUE) "Tidens Tempel" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0304, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x47")  COLOR(RED) "Återvändsgränd" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0305, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x37")  COLOR(PURPLE) "Kakariko Byn\n"
COLOR(DEFAULT)  SHIFT("\x28") "Döda Bergets Led\n"
SHIFT("\x3C") "Start Punkt" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0306, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x17")  COLOR(PURPLE) "Kakariko Byns Gravgård" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0307, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x23") "Mörk! Trång! Läskig!\n"
COLOR(PURPLE)  SHIFT("\x1E") "De Tre Särdragens Brunn" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0308, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x36")  COLOR(RED) "Döda Berget\n"
COLOR(DEFAULT)  SHIFT("\x25") "Ingen slipper förbi utan ett\n"
SHIFT("\x3A") "Kungligt Påbud!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0309, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x28")  COLOR(RED) "Döda Bergets Led" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x030A, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x36")  COLOR(YELLOW) "Dodongos Grotta\n"
COLOR(DEFAULT)  SHIFT("\x0A") "Gå inte in utan tillåtelse!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x030B, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x28") "Goron Landet\n"
SHIFT("\x41")  COLOR(RED) "Goron Stad" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x030C, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x48")  COLOR(BLUE) "Zoras Flod\n"
COLOR(DEFAULT)  SHIFT("\x0F") "Se upp för snabba strömmar \n"
SHIFT("\x23") "och stark underström." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x030D, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x05") "Skuggan viker undan endast för den\n"
SHIFT("\x0E") "som bär sanningens öga, efterlämnat\n"
SHIFT("\x1C") "i Kakariko Byn." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x030E, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x37")  COLOR(BLUE) "Zoras Domän" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x030F, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x37")  COLOR(BLUE) "Zoras Källa\n"
COLOR(DEFAULT)  SHIFT("\x08") "Besvära inte Herr Jabu-Jabu! \n"
SHIFT("\x32") "--Kung Zora XVI" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0310, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x23")  COLOR(PURPLE) "Skogens Träningscenter\n"
COLOR(DEFAULT)  SHIFT("\x15") "Hugg inte ned skyltar hänsynslöst--\n"
SHIFT("\x28") "läs dem först noggrant!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0311, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x12") "Alla de övermodiga nog att\n"
SHIFT("\x0B") "bege sig ut i öknen -- Var vänliga\n"
SHIFT("\x2F") "och kom ett varv förbi vår butik." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x33")  COLOR(YELLOW) "Matthandlare" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0312, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x41") "Just framför:\n"
SHIFT("\x17")  COLOR(ADJUSTABLE) "Stora Deku Trädets Äng" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0313, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x39")  COLOR(ADJUSTABLE) "Skogens Tempel" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0314, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x35")  COLOR(ADJUSTABLE) "Den Förlorade Skogen" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0315, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x2E") "Talon och Malons\n"
SHIFT("\x3C")  COLOR(YELLOW) "Lon Lon Ranch" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0316, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x33") "Den Store Ingos\n"
SHIFT("\x46")  COLOR(YELLOW) "Ingo Ranch" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0317, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x41")  COLOR(BLUE) "Hyliasjön" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0318, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x1E")  COLOR(BLUE) "Laboratoriet vid sjön\n"
COLOR(DEFAULT)  SHIFT("\x04") "Försöker dagligen ta mig till botten\n"
SHIFT("\x09") "av Hyliasjöns mysterier!\n"
SHIFT("\x36") "--Sjöforskaren" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0319, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x37")  COLOR(YELLOW) "Gerudo Dalen" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x031A, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x15")  COLOR(YELLOW) "Bana för Bågskytte från Hästrygg " COLOR(DEFAULT) "\n"
SHIFT("\x12") "Skickliga spelare hjärtligt välkomna!\n"
SHIFT("\x12") "Nuvarande Rekord: " COLOR(RED)  HIGHSCORE(HS_HORSE_ARCHERY)  COLOR(DEFAULT) " Poäng" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x031B, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x21")  COLOR(YELLOW) "Gerudo Övningsfält\n"
COLOR(DEFAULT)  SHIFT("\x11") "Endast registrerade medlemmar\n"
SHIFT("\x4B") "tillåtna!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x031C, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x2D")  COLOR(YELLOW) "Hemsökta Ödemarken" COLOR(DEFAULT) "\n"
SHIFT("\x17") "Om du jagar efter hägringar kommer\n"
SHIFT("\x1F") "du sväljas av öknen.\n"
SHIFT("\x21") "Endast en väg är den sanna!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x031D, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x3C")  COLOR(YELLOW) "Själarnas Tempel" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x031E, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x42")  COLOR(ADJUSTABLE) "Kokiri Butiken\n"
COLOR(DEFAULT)  SHIFT("\x0B") "Vi säljer närproducerade produkter!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x031F, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x1E")  NAME "s Hus" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0320, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x28")  COLOR(ADJUSTABLE) "Trädens folk kan ej\n"
COLOR(DEFAULT)  SHIFT("\x2D")  COLOR(ADJUSTABLE) "lämna dessa skogar." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0321, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x03") "Följ bergsledet längs med klippans kant\n"
SHIFT("\x15") "för att nå" SHIFT("\x06")  COLOR(RED) "Goron Staden" COLOR(DEFAULT) ",\n Goron folkets hem." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0322, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x36") "Ett av Naturens Under\n"
SHIFT("\x3F")  COLOR(RED) "Bomb Blomma" COLOR(DEFAULT) "\n"
SHIFT("\x1E") "Fara! Ryck inte lös från marken!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0323, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x26")  COLOR(RED) "Döda Bergets Topp\n"
COLOR(DEFAULT)  SHIFT("\x10") "Infart till kratern framför\n"
SHIFT("\x1E") "Var beredd på överväldigande hätta!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0324, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x1D")  COLOR(BLUE) "Kung Zoras Tronsal\n"
COLOR(DEFAULT)  SHIFT("\x1E") "För att höra Kungens ädla\n"
SHIFT("\x15") "tillkännagivande, ställ dig inför\n"
SHIFT("\x17") "honom på plattformen och tala." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0325, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x0A") "Får du stop på mitt vilda rullande,\n"
SHIFT("\x0B") "kanske jag ger dig något häftigt.\n"
SHIFT("\x29") "--" COLOR(RED) "Het Rodder Goron" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0326, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x0A") "Endast han med ett öga som ser sanningen\n"
SHIFT("\x15") "kan finna paraplyet av sten\n"
SHIFT("\x1A") "som beskyddar emot\n"
SHIFT("\x39") "regnet av knivblad." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0327, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x0A") "Bara den som besitter " COLOR(RED) "heliga fötter" COLOR(DEFAULT) "\n"
SHIFT("\x04") "kan ta sig över de dödas håla." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0328, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Rekordtiden för de som\n"
"tävlade emot mig var:\n"
COLOR(LIGHTBLUE)  HIGHSCORE(HS_DAMPE_RACE)  COLOR(DEFAULT) "\n"
"--Gravskötaren Dampé" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0329, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Skytte Galleria\n"
"20 Rupeer per omgång\n"
COLOR(DEFAULT) "Det finns " COLOR(RED) "10 måltavlor" COLOR(DEFAULT) ". Du har " COLOR(RED) "15\n"
"chanser" COLOR(DEFAULT) ". Träffa alla 10 måltavlorna!" QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Träffa 10 måltavlor -- Perfekta Priset\n"
"Träffa 8 eller fler -- Försök Igen Gratis\n"
"Träffa färre än 8 -- Slutspelat" QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Regler vid denna Skytte Galleria\n"
COLOR(DEFAULT) "Luta inte mot disken.\n"
"Stör inte de andra kunderna." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x032A, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x28")  COLOR(LIGHTBLUE) "Skattkistebutik" COLOR(DEFAULT) "\n"
SHIFT("\x06") "Vi säljer dem inte nödvändigtvis..." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x032B, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x1F")  COLOR(LIGHTBLUE) "Övningplats för Högdykning\n"
COLOR(DEFAULT)  SHIFT("\x2F") "Känner du dig självsäker\n"
SHIFT("\x2A") "i din dykarförmåga?" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x032C, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
"032c"
)

DEFINE_MESSAGE(0x032D, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x33")  COLOR(RED) "Bergstopp" COLOR(DEFAULT) "\n"
SHIFT("\x19") "Allvarlig Fara - Håll Dig Borta!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x032E, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x2E")  COLOR(LIGHTBLUE) "Glada Maskbutiken!" COLOR(DEFAULT) "\n"
SHIFT("\x28") "Anställer varubud för\n"
SHIFT("\x3C") "att leverera glädje!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x032F, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x23")  COLOR(LIGHTBLUE) "Bombchu Bowlinghall" COLOR(DEFAULT) "\n"
SHIFT("\x20") "Du får uppleva det senaste\n"
SHIFT("\x17") "inom Bombteknologin!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0330, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x50")  COLOR(LIGHTBLUE) "Basar" COLOR(DEFAULT) "\n"
SHIFT("\x0A") "Vi har lite av allt!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0331, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x41")  COLOR(LIGHTBLUE) "Häxbryggdsbutik\n"
COLOR(DEFAULT)  SHIFT("\x1B") "Vi har häxbrygder av\n"
SHIFT("\x4A") "bästa kvalité!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0332, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x41")  COLOR(RED) "Goron Butik\n"
COLOR(DEFAULT)  SHIFT("\x1E") "Förnödenheter för Bergsklättrare!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0333, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x45")  COLOR(BLUE) "Zora Butik" COLOR(DEFAULT) "\n"
SHIFT("\x28") "Här finns färsk fisk!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0334, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x03")  COLOR(LIGHTBLUE) "Hjärtbultande Gravgrävarturné!\n"
COLOR(DEFAULT)  SHIFT("\x08") "Från 18:00 till 21:00 Hyrule Tid\n"
SHIFT("\x1C") "--Dampé the Gravekeeper" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0335, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x03")  COLOR(LIGHTBLUE) "Hjärtbultande Gravgrävarturné!\n"
COLOR(DEFAULT)  SHIFT("\x0A") "Turnén är " COLOR(RED) "inställd" COLOR(DEFAULT) " tills en ny\n"
SHIFT("\x1B") "gravskötare är funnen. Vi\n"
SHIFT("\x09") "beklagar för besväret." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0336, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  COLOR(PURPLE) "Skylt för Framstötning!\n"
COLOR(DEFAULT) "För att göra en framstöt med svärdet, för\n"
COLOR(LIGHTBLUE) "[Styr-Spaken]" COLOR(DEFAULT) " mot ditt mål \n"
"Lås Kameran med " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) ", tryck sedan " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0337, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  COLOR(PURPLE) "\"Z\" Hålet\n"
COLOR(DEFAULT) "Vi kryper genom det här lilla\n"
"hålet!" QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Stå framför hålet och\n"
"för " COLOR(LIGHTBLUE) "[Styr-Spaken] " COLOR(DEFAULT) "emot det. När  \n"
COLOR(BLUE) "Händelse Ikonen " COLOR(DEFAULT) "visar \"Gå in,\" tryck\n"
COLOR(BLUE) "[A] " COLOR(DEFAULT) "för att krypa in i hålet." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Uppmärksamma vad " COLOR(BLUE) "Händelse Ikonen\n"
COLOR(DEFAULT) "visar!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0338, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  COLOR(PURPLE) "Hugg Ned Gräsmed Svärdet\n"
COLOR(DEFAULT) "Om du står stilla och bara trycker " COLOR(ADJUSTABLE) "[B]\n"
COLOR(DEFAULT) ", svingar du svärdet vågrätt. Om du håller\n"
COLOR(DEFAULT) "in " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " när" COLOR(DEFAULT) "du slår,\n"
COLOR(DEFAULT) "så hugger du lodrätt." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0339, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x3C")  COLOR(LIGHTBLUE) "Hyrule Slott" COLOR(DEFAULT) "\n"
SHIFT("\x37")  COLOR(YELLOW) "Lon Lon Ranch" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x033A, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x13") "Du är här: " COLOR(LIGHTBLUE) "Hyrule Slott" COLOR(DEFAULT) "\n"
SHIFT("\x16") "Den här vägen till " COLOR(YELLOW) "Lon Lon Ranch" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x033B, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x42") "En Bit Fram\n"
SHIFT("\x29")  COLOR(BLUE) "Kung Zoras kammare\n"
COLOR(DEFAULT)  SHIFT("\x19") "Visa ordentlig respekt!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x033C, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x19") "Den Store " COLOR(RED) "Mido" COLOR(DEFAULT) "s Hus\n"
SHIFT("\x2D") "Chef över alla Kokiri" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x033D, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x04") "De Allkunniga Brödernas Hus" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x033E, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x37") "Tvillingarnas Hus" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x033F, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x3D")  COLOR(RED) "Saria" COLOR(DEFAULT) "s Hus" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0340, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  COLOR(PURPLE) "Utsiktspunkt med [Z] riktning\n"
COLOR(DEFAULT) "När du inte tittar mot något\n"
"särskilt, kan du rikta kameran frammåt\n"
"med " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Stå still och vänd mot\n"
"ett annat håll, eller " COLOR(LIGHTBLUE) "håll\n"
"ned [Z] " COLOR(DEFAULT) "en stund." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Detta hjälper att orientera dig\n"
"åt det håll du vill rikta dig mot.\n"
"Det är väldigt behändingt!" QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Håll ned [Z]" COLOR(DEFAULT) ", så kan du\n"
COLOR(RED) "gå sidledes" COLOR(DEFAULT) " medan du hålls vänd \n"
"rakt lol." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE  COLOR(RED) "Att gå sidledes" COLOR(DEFAULT) " kan vara väldigt\n"
"viktigt att kunna i labyrint\n"
"korridorer. Vänd runt och testa\n"
"detta nu på en gång." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0341, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  COLOR(RED) "Hoppstenar i dammen\n"
COLOR(DEFAULT) "När du vågat springer i den riktning\n"
"du vill, hoppar du automatiskt \n"
"av kanten." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Om du hoppar runt på stenarna\n"
"kommer det göra dig lycklig!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0342, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x2F")  COLOR(RED) "All Dykning Förbjuden!\n"
COLOR(DEFAULT)  SHIFT("\x15") "--Det gör dig intet gott!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0343, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  COLOR(PURPLE) "Byt Kamera Inriktning\n"
COLOR(DEFAULT) "När du ser en " COLOR(ADJUSTABLE) "▼" COLOR(DEFAULT) " ikon ovanför ett \n"
"föremål, kan du rikta in dig med " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Med andra ord, tryck " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " när du\n"
"ser en " COLOR(ADJUSTABLE) "▼" COLOR(YELLOW) " ikon " COLOR(DEFAULT) "ovanför ett föremål,\n"
"så låser du in kameran på det." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Tryck " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " igen,\n"
"för att antingen " COLOR(RED) "lösgöra" COLOR(DEFAULT) " kameran eller\n"
"rikta in dig på nästa föremål med\n"
COLOR(ADJUSTABLE) "▼" COLOR(DEFAULT) " ikonen ovanför sig." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "När du står inför många fiender\n"
"samtidigt och vill fly därifrån,\n"
"tryck " COLOR(LIGHTBLUE) "[Z] " COLOR(DEFAULT) " medan du styr\n"
"bakåt med " COLOR(LIGHTBLUE) "[Styr-Spaken]" COLOR(DEFAULT) " för att avbryta inriktningen." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Du kan rikta in dig på dessa " COLOR(RED) "stenar" COLOR(DEFAULT) " bredvid\n"
"skylten för att öva!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0344, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x3D")  COLOR(ADJUSTABLE) "Skogens Vise" COLOR(DEFAULT)  QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x14") "Vi väntar på att få se ditt\n"
SHIFT("\x38") "vackra ansikte!\n"
SHIFT("\x28") "Vinn utomordentliga priser!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0345, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x48") "Gör ett besök till\n"
SHIFT("\x04")  COLOR(RED) "De Allvetande Brödernas Hus\n"
COLOR(DEFAULT)  SHIFT("\x17") "för att få svar på alla dina\n"
SHIFT("\x22") "frågor angående olika föremål!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0400, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Detta är en " COLOR(RED) "Skvallersten" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x0401, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att du kan simma snabbare\n"
"genom att snabbt trycka " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x0402, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att det finns något hemligt\n"
"i närheten av det ensamma trädet,\n"
"inte långt ifrån floden i den\n"
"nordvästra delen av Hyrules Slättmarker."
)

DEFINE_MESSAGE(0x0403, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att det finns något hemligt\n"
"intill vägen som leder till Hyliasjön."
)

DEFINE_MESSAGE(0x0404, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att Storgorons Svärd är \n"
"super vasst och att det aldrig går sönder."
)

DEFINE_MESSAGE(0x0405, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att Medigoron inte\n"
"riktigt är medveten om sin storlek, \n"
"så hans butik är väldigt trång."
)

DEFINE_MESSAGE(0x0406, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att Malon satte\n"
"ursprungliga rekordet i Lon Lon\n"
"Ranchens hinderbana."
)

DEFINE_MESSAGE(0x0407, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att Malon från Lon Lon \n"
"Ranchen hoppas på att en riddare i \n"
"skinande rustning kommer och sveper \n"
"henne av fötterna någon dag."
)

DEFINE_MESSAGE(0x0408, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att Ruto, Zora Prinsessan \n"
"som är känd för sin själviska natur \n"
"har fattat intresse för en viss ung pojke \n"
)

DEFINE_MESSAGE(0x0409, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att endast spelare som\n"
"väljer \"HÅLL\" alternativet för \"Z \n"
"INRIKTNING\" är riktiga \"Zelda\n"
"spelare!\""
)

DEFINE_MESSAGE(0x040A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att det finns något gömt\n"
"nära trädet i Kakariko Byn ."
)

DEFINE_MESSAGE(0x040B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att, till skillnad från\n"
"hennes eleganta utseende, är Prinsessan \n"
"Zelda från Hyrule Slottet, \n"
"egentligen riktigt busig!"
)

DEFINE_MESSAGE(0x040C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att Prinsessan Zeldas \n"
"barnsköterska egentligen är en av \n"
"Sheikah folket, som så många trodde \n"
"att hade dött ut för länge sedan."
)

DEFINE_MESSAGE(0x040D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att det finns en man som\n"
"alltid kan bli funnen springande\n"
"runt på Hyrules Slättmarker."
)

DEFINE_MESSAGE(0x040E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att det bryter mot\n"
"reglerna att använda glasögon vid \n"
"Skattkistebutiken i Hyrule\n"
"Slottstads Marknad."
)

DEFINE_MESSAGE(0x040F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att Kyckling Damen \n"
"åker till Laboratoriet vid sjön\n"
"för att studera hur man\n"
"föder upp Fick-Cuccos."
)

DEFINE_MESSAGE(0x0410, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att vissa Gerudo ibland\n"
"kommer till Hyrule Slottsstad\n"
"för att söka efter pojkvänner."
)

DEFINE_MESSAGE(0x0411, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att en tjuv vid namn\n"
"Nabooru, som hemsöker denna\n"
"plats, är en Gerudo."
)

DEFINE_MESSAGE(0x0412, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att om du tar dig nära\n"
"en fjäril medan du håller i en\n"
"Deku Pinne, kommer något\n"
"trevligt att hända."
)

DEFINE_MESSAGE(0x0413, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att du kan finna\n"
"någonting nytt i labyrinter som\n"
"du redan har besökt och avklarat."
)

DEFINE_MESSAGE(0x0414, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att Gerudo folket avgudar \n"
"Ganondorf nästan som om han var en gud."
)

DEFINE_MESSAGE(0x0415, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att det finns\n"
"något dolt runtom vid\n"
"ingången till Gerudo Dalen."
)

DEFINE_MESSAGE(0x0416, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att ugglan vid namn\n"
"Kaepora Gaebora är en av de\n"
"forntida Vise pånyttfödd."
)

DEFINE_MESSAGE(0x0417, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att fastän den konstiga\n"
" ugglan, Kaepora Gaebora, ser stor\n"
"och tung ut, så är han\n"
"väldigt lätt om hjärtat."
)

DEFINE_MESSAGE(0x0418, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att hästen som\n"
"Ganondorf rider på är en\n"
"bäcksvart Gerudo hingst."
)

DEFINE_MESSAGE(0x0419, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att Ganondorf inte är \n"
"nöjd bara med att härska över\n"
"Gerudo folket och att han ämnar\n"
"erövra hela Hyrule!"
)

DEFINE_MESSAGE(0x041A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att skatten du kan förtjäna\n"
"vid Gerudos Träningsområde inte är så\n"
"häftig som du skulle förvänta dig,\n"
"med tanke på hur utmanande det är!"
)

DEFINE_MESSAGE(0x041B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att det finns en knapp \n"
"som man endast kan aktivera genom\n"
"att använda en Snurrattack."
)

DEFINE_MESSAGE(0x041C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att det är möjligt att\n"
"hitta totalt 100 Guld Skulltulas \n"
"över hela Hyrule."
)

DEFINE_MESSAGE(0x041D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att när folk utan älvor\n"
"ger sig in i Den Förlorade Skogen,\n"
"förvandlas de till monster!"
)

DEFINE_MESSAGE(0x041E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att de småa hålen\n"
"i marken som du finner utöver\n"
"Hyrule är perfekta häckningsplatser\n"
"för småkryp."
)

DEFINE_MESSAGE(0x041F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att alla Kokiri blir \n"
"följda av små älvor."
)

DEFINE_MESSAGE(0x0420, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Det sägs att endast en Kokiri\n"
"någonsin har lämnat skogen,\n"
"dessutom är han fortfarande vid liv!"
)

DEFINE_MESSAGE(0x0421, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"0421"
)

DEFINE_MESSAGE(0x0600, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  COLOR(RED) "Vad är det?" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0601, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Gohma\n"
COLOR(LIGHTBLUE) "Det är ett av de parasitiska monstren\n"
"idet Stora Deku Trädet! Dess " COLOR(DEFAULT) "öga" COLOR(LIGHTBLUE) " blir\n"
"sårbart när det är rött!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0602, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Gohma Ägg\n"
COLOR(LIGHTBLUE) "När detta ägg kläcks, föds en\n"
"Gohma Larv." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0603, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Gohma Larv\n"
COLOR(LIGHTBLUE) "Se upp när den förbereder sig\n"
"för att kasta sig!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0604, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Skulltula\n"
COLOR(LIGHTBLUE) "Den mjuka " COLOR(DEFAULT) "undersidan" COLOR(LIGHTBLUE) " är dess svaga punkt!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0605, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Stor Skulltula\n"
COLOR(LIGHTBLUE) "Den mjuka " COLOR(DEFAULT) "undersidan" COLOR(LIGHTBLUE) " är dess svaga punkt!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0606, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Svanspasaran\n"
COLOR(DEFAULT) "Svansen" COLOR(LIGHTBLUE) " är dess svaga punkt!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0607, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Deku Baba\n"
COLOR(LIGHTBLUE) "Hugg när den gör utfall så ställer\n"
"den sig upprätt. Skär snabbt av\n"
"stammen för att få en " COLOR(DEFAULT) "Deku Pinne" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0608, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Stor Deku Baba\n"
COLOR(LIGHTBLUE) "Hugg när den gör utfall så ställer\n"
"den sig upprätt. Skär snabbt av\n"
"stammen för att få en " COLOR(DEFAULT) "Deku Pinne" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0609, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Deku Baba\n"
COLOR(LIGHTBLUE) "Den kanske ser vissen ut, men den\n"
"anfaller dig om du försöker röra den!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x060A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Deku Buske\n"
COLOR(LIGHTBLUE) "Den gömmer sig i gräset om  du\n"
"kommer för nära. Studsa tillbaka nötterna\n"
"som den skjuter!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x060B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"060b"
)

DEFINE_MESSAGE(0x060C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Kung Dodongo\n"
COLOR(LIGHTBLUE) "Det där är en jättelik Dodongo som\n"
"äter vad som helst! Ge den en smäll, och\n"
"avsluta den med ditt " COLOR(DEFAULT) "svärd" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x060D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Dodongo\n"
COLOR(LIGHTBLUE) "Se upp för dess brännheta andedräkt!\n"
"Använd " COLOR(DEFAULT) "[Z] Inriktning " COLOR(LIGHTBLUE) "tekniker!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x060E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Baby Dodongo\n"
COLOR(LIGHTBLUE) "Se upp för dess anfallssprång!\n"
"Den exploderar efter att ha blivit besegrad!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x060F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Lizalfos \n"
COLOR(LIGHTBLUE) "Använd din sköld väl och strid\n"
"med " COLOR(DEFAULT) "[Z] Inriktning" COLOR(LIGHTBLUE) " tekniker!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0610, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Dinolfos \n"
COLOR(LIGHTBLUE) "Använd din sköld väl och strid\n"
"med " COLOR(DEFAULT) "[Z] Inriktning " COLOR(LIGHTBLUE) "tekniker!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0611, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Eld Keese\n"
COLOR(LIGHTBLUE) "Förstör den före den kan flyga in i\n"
"dig! Annars kommer dess flammor att\n"
"bränna upp din " COLOR(DEFAULT) "Deku Sköld" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0612, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Keese\n"
COLOR(LIGHTBLUE) "När du kommer tillräckligt nära,\n"
"använd "COLOR(DEFAULT) "[Z] Inriktning" COLOR(LIGHTBLUE) ". Du kan hålla kvar siktet på den\n"
"även om den flyger iväg." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0613, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Armos\n"
COLOR(LIGHTBLUE) "Stoppa den från att röra sig\n"
"och förinta den!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0614, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Barinade\n"
COLOR(LIGHTBLUE) "Många parasitiska maneter svärmar\n"
"runt detta monster. Lägg siktet på dess\n"
"kropp, som ligger i skydd bakom maneterna!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0615, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Parasitisk Tentakel\n"
COLOR(LIGHTBLUE) "Verkar som den smala delen \n"
"är dess svaga punkt... Du behöver ett särskilt\n"
"föremål för att förstöra den!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0616, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Shabom\n"
COLOR(LIGHTBLUE) "Den ser sprickfärdig ut, kan inte\n"
"krävas mycket för att göra hål på den!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0617, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Biri\n"
COLOR(LIGHTBLUE) "Om du låter den röra dig så\n"
"blir du elektrifierad!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0618, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Bari\n"
COLOR(LIGHTBLUE) "Om du låter den röra dig så\n"
"blir du elektrifierad!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0619, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Stinger\n"
COLOR(LIGHTBLUE) "Förgör den innan den hinner anfalla dig!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x061A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Ganons Vålnad\n"
COLOR(LIGHTBLUE) "En ond skepnad från Skogstemplet!\n"
"Ha färdas genom tavlorna på\n"
"väggarna." BOX_BREAK COLOR(LIGHTBLUE) "Bemöt hans magiska attack med\n"
"av dina egna attacker!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x061B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Stalfos\n"
COLOR(LIGHTBLUE) "Lura den mot dig och uppmärksamma dess\n"
"rörelser noggrannt! Anfall så fort den\n"
"ger dig en öppning!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x061C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Blå Bubbla\n"
COLOR(LIGHTBLUE) "Ta skydd mot dess blåa flamma bakom\n"
"din " COLOR(DEFAULT) "sköld" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x061D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Vit Bubbla\n"
COLOR(LIGHTBLUE) "Ta sikte så fort den stannar!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x061E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Grön Bubbla\n"
COLOR(LIGHTBLUE) "Använd ditt svärd när dess\n"
"gröna flamma slocknar!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x061F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Skullväggtula\n"
COLOR(LIGHTBLUE) "Försök att inte låta den röra dig!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0620, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Guld Skulltula\n"
COLOR(LIGHTBLUE) "De här är även kända som Förbannelsens\n"
"Spindlar. När du besegrar den får du\n"
"en " COLOR(DEFAULT) "pollett" COLOR(LIGHTBLUE) " som bevis!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0621, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Volvagia\n"
COLOR(LIGHTBLUE) "Eldtemplets Boss, återupplivad\n"
"av Kungen av Ondska. Jag vet inte\n"
"vad dess svaga punkt kan va'..." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0622, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Dansande Flamma\n"
COLOR(LIGHTBLUE) "Släck deras " COLOR(DEFAULT) "flammande kläder\n"
COLOR(LIGHTBLUE) "först..." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0623, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Fackelsnigel\n"
COLOR(LIGHTBLUE) "Om elden på dess rygg släcks\n"
"försöker den fly. Förgör den\n"
"innan den återantänds!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0624, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Röd Bubbla\n"
COLOR(LIGHTBLUE) "Ta skydd bakom din" COLOR(DEFAULT) "sköld \n" COLOR(LIGHTBLUE)
"när den anfaller" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0625, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Morpha\n"
COLOR(LIGHTBLUE) "Vattentemplets Härskare. Den har \n"
"fullständig kontrollöver vattnet. Dra\n"
"ut " COLOR(DEFAULT) "kärnan" COLOR(LIGHTBLUE) " och förgör den!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0626, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Mörk " NAME "\n"
COLOR(LIGHTBLUE) "Besegra dig själv!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0627, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Klingmussla\n"
COLOR(LIGHTBLUE) "Den " COLOR(DEFAULT) "interna muskeln " COLOR(LIGHTBLUE) "är dess" COLOR(DEFAULT) " \n"
COLOR(LIGHTBLUE) "svaga punkt!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0628, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Spike\n"
COLOR(LIGHTBLUE) "Vänta på att den drar in spikarna!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0629, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Bongo Bongo\n"
COLOR(LIGHTBLUE) "Skuggtemplets Boss, återuppstådd\n"
"från botten av brunnen. Ta en titt\n"
"med " COLOR(DEFAULT) "ögat av sanning" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x062A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "ReDead\n"
COLOR(LIGHTBLUE) "Deras blick paralyserar dig. Om den\n"
"biter sig fast, " COLOR(DEFAULT) "tryck valfri knapp" COLOR(LIGHTBLUE) " för \n"
"att bryta dig  loss!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x062B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "Ganons Vålnad\n"
COLOR(LIGHTBLUE) "Gör anfall" COLOR(RED) " " COLOR(DEFAULT) "när han kommer ut\n"
"ur en av tavlorna" COLOR(LIGHTBLUE) "!\n"
"Se upp för den falska!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x062C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"062c"
)

DEFINE_MESSAGE(0x062D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Gibdo\n"
COLOR(LIGHTBLUE) "Dess blick paralyserar dig. Om den\n"
"biter sig fast, " COLOR(DEFAULT) "tryck valfri knapp" COLOR(LIGHTBLUE) " för \n"
"att bryta dig  loss!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x062E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Döda Handens Händer\n"
COLOR(LIGHTBLUE) "Om den tar fast dig, " COLOR(DEFAULT) "tryck valfri knapp\n"
COLOR(LIGHTBLUE) "för att bryta dig loss!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x062F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Död Hand\n"
COLOR(LIGHTBLUE) "Se upp för dess ändlösa händer!\n"
"Aim for its head!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0630, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Väggmästare\n"
COLOR(LIGHTBLUE) "Se upp för " COLOR(DEFAULT) "skuggan" COLOR(LIGHTBLUE) "den ger\n"
"av på golvet. Förgör den innan den\n"
"hoppar tillbaka upp i taket!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0631, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Golvmästare\n"
COLOR(LIGHTBLUE) "När den splittrar sig måste du förgöra\n"
"all delar innan de återförenas!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0632, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Twinrova Koume\n"
COLOR(LIGHTBLUE) "Ganondorfs surrogat moder.\n"
"Flammornas Häxa. Hon verkar\n"
"känslig mot " COLOR(DEFAULT) "låga temperaturer" COLOR(LIGHTBLUE) "." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0633, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Twinrova Kotake\n"
COLOR(LIGHTBLUE) "Ganondorfs surrogat moder.\n"
"Isens Häxa. Hon verkar\n"
"känslig mot " COLOR(DEFAULT) "höga temperaturer" COLOR(LIGHTBLUE) "." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0634, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Järn Knoge\n"
COLOR(LIGHTBLUE) "Någonting är väldigt fel...\n"
"Det där är ingen vanlig fiende!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0635, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Järn Knoge\n"
COLOR(LIGHTBLUE) "Se upp när den anfaller med yxan! \n"
"Den gör stor skada! Ge igen när du\n"
"ser en öppning!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0636, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Dödskallsunge\n"
COLOR(LIGHTBLUE) "Är detta vad som händer med barn som\n"
"hamnar vilse i skogen...? Han verkar inte\n"
"vara speciellt förtjusen i vuxna." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0637, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Like Like\n"
COLOR(LIGHTBLUE) "En fiende som äter " COLOR(DEFAULT) "sköldar " COLOR(LIGHTBLUE) "och\n"
"vissa " COLOR(DEFAULT) "kläder" COLOR(LIGHTBLUE) ". Besegra den snabbt\n"
"för att ta tillbaka dina saker!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0638, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"0638"
)

DEFINE_MESSAGE(0x0639, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Beamos\n"
COLOR(LIGHTBLUE) "Se upp för den sökande strålen!\n"
"Jag slår vad om att den inte gillar när\n"
"den får " COLOR(DEFAULT) "rök" COLOR(LIGHTBLUE) " i ögonen!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x063A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Anubis\n"
COLOR(LIGHTBLUE) "Den är känslig mot " COLOR(RED) "Eld" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x063B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Freezzard\n"
COLOR(LIGHTBLUE) "Se upp för dess isande\n"
"andedräkt! Förgör den fullständigt\n"
"innan den kan återskapa sig." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x063C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"063c"
)

DEFINE_MESSAGE(0x063D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Ganondorf, den Onda Kungen\n"
COLOR(LIGHTBLUE) "Jag har ingen aning om vad hans\n"
"svaghet är!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x063E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Ganon\n"
COLOR(LIGHTBLUE) "Nu har jag verkligen ingen aning om\n"
"vad hans svaghet är!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x063F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Dödskallsunge\n"
COLOR(LIGHTBLUE) "Är detta vad som händer med barn som\n"
"hamnar vilse i skogen...? Han kanske\n"
"kan bli vår vän om vi gör någonting..." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0640, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Dödskallsunge\n"
COLOR(LIGHTBLUE) "Är detta vad som händer med barn som\n"
"hamnar vilse i skogen...? Han verkar\n"
"olycklig över att inte ha något ansikte..." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0641, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Dödskallsunge\n"
COLOR(LIGHTBLUE) "Är detta vad som händer med barn som\n"
"hamnar vilse i skogen...? Han ser nöjd\n"
"ut över sitt nya skelettansikte." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0642, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Octorok\n"
COLOR(LIGHTBLUE) "Studsa tillbaks stenarna som den\n"
"spottar på dig!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0643, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Poe från gravgården?\n"
COLOR(LIGHTBLUE) "Om du stirrar på den med " COLOR(DEFAULT) "[Z] \n"
"Inriktning" COLOR(LIGHTBLUE) ", så försvinner den..." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0644, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Poe\n"
COLOR(LIGHTBLUE) "Om du stirrar på den med " COLOR(DEFAULT) "[Z] \n"
"Inriktning" COLOR(LIGHTBLUE) ", så försvinner den..." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0645, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Röd Tektite\n"
COLOR(LIGHTBLUE) "Rikta in dig med " COLOR(DEFAULT) "[Z]\n"
"Inriktning" COLOR(LIGHTBLUE) " när den hoppar!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0646, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Blå Tektite\n"
COLOR(LIGHTBLUE) "Den är svår att besegra på vattnet.\n"
"Lura upp den på land!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0647, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Leever\n"
COLOR(LIGHTBLUE) "Håll reda på dess rörelser\n"
"och låt den åka förbi!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0648, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Peahat\n"
COLOR(LIGHTBLUE) "Dess svaghet är " COLOR(DEFAULT) "rötterna" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0649, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Peahat Larv\n"
COLOR(LIGHTBLUE) "Försvara dig med din " COLOR(DEFAULT) "sköld" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x064A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"064a"
)

DEFINE_MESSAGE(0x064B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"064b"
)

DEFINE_MESSAGE(0x064A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"064a"
)

DEFINE_MESSAGE(0x064B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"064b"
)

DEFINE_MESSAGE(0x064C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Vargos\n"
COLOR(LIGHTBLUE) "Lura den att komma nära inpå dig och \n"
"håll ett öga på dess rörelsemönster! Attackera \n"
"då den lättar på garden!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x064D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Arg Buske\n"
COLOR(LIGHTBLUE) "Om du kommer nära inpå den, så gömmer \n"
"den sig i gräset..." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x064E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Affärs-buske\n"
COLOR(LIGHTBLUE) "Om du kommer nära inpå den, så gömmer \n"
"den sig i gräset..." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x064F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Dampé's Spöke\n"
COLOR(LIGHTBLUE) "Det är den döde gravvårdaren's\n"
"spöke! Ifall du jagar honom,\n"
"så kanske han ger dig sin " COLOR(DEFAULT) "minnessak" COLOR(LIGHTBLUE) "..." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0650, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Meg - en utav Poe-systrarna\n"
COLOR(LIGHTBLUE) "Då hon delar upp sig i flera spegelbilder,\n"
"så behöver du ta reda på vilken \n"
"som är " COLOR(DEFAULT) "den riktiga" COLOR(LIGHTBLUE) ". Är det den här?" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0651, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Joelle - en utav Poe-systrarna\n"
COLOR(LIGHTBLUE) "Sikta på henne då hon kommer fram!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0652, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Beth - en utav Poe-systrarna\n"
COLOR(LIGHTBLUE) "Sikta på henne då hon kommer fram!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0653, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Amy - en utav Poe-systrarna\n"
COLOR(LIGHTBLUE) "Sikta på henne då hon kommer fram!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0654, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Gerudo-Tjuv\n"
COLOR(LIGHTBLUE) "Då hon sänker garden,\n"
"attackera! Ifall du inte besegrar henne,\n"
"så blir du tillfångatagen!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0655, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Stalbarn\n"
COLOR(LIGHTBLUE) "Räds inte Stalbarnen!\n"
"Bara attackera dem upprepade gånger!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0656, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Is-Kis\n"
COLOR(LIGHTBLUE) "Besegra den innan den flyger\n"
"in i dig!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0657, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Vit Vargos\n"
COLOR(LIGHTBLUE) "Lura den att komma nära inpå dig och \n"
"håll ett öga på dess rörelsemönster! Attackera \n"
"då den lättar på garden!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0658, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Guay\n"
COLOR(LIGHTBLUE) "Besegra den innan den flyger\n"
"in i dig!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0659, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Storbläckis\n"
COLOR(LIGHTBLUE) "Attackera den bakifrån!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x065A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Stor-Poe\n"
COLOR(LIGHTBLUE) "Denna Poe försvinner inte\n"
"om du stirrar på den. Den rör sig snabbt\n"
"trots sin storlek!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x065B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Tvillinghäxa\n"
COLOR(LIGHTBLUE) "Detta är Kotake och Koume's\n"
"kombinerade form. Vänd deras egna\n"
COLOR(DEFAULT) "magiska attacker " COLOR(LIGHTBLUE) "emot dem!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x065C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Poe\n"
COLOR(LIGHTBLUE) "Denna Poe försvinner inte\n"
"om du stirrar på den. Den är inte så\n"
"värst lättskrämd..." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x086D, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x3C") "Spela med hjälp utav " COLOR(BLUE) "[A]" COLOR(DEFAULT) " och " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "." COLOR(YELLOW) "\n"
COLOR(DEFAULT) "\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x086E, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Spela med hjälp utav " COLOR(BLUE) "[A]" COLOR(DEFAULT) " och " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "; " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) " för att Avsluta.\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x086F, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
"\n"
"\n"
OCARINA
)

DEFINE_MESSAGE(0x0870, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x16") "Spela " COLOR(ADJUSTABLE) "Skogs-Menuetten" COLOR(DEFAULT) "!" COLOR(ADJUSTABLE) "\n"
"\n"
"\n"
COLOR(DEFAULT)  QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x0871, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x1F") "Spela " COLOR(RED) "Eld's-Bolero" COLOR(DEFAULT) "!\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x0872, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x11") "Spela " COLOR(BLUE) "Vatten-Serenaden" COLOR(DEFAULT) "!\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x0873, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x15") "Spela " COLOR(YELLOW) "Själen's Klagosång" COLOR(DEFAULT) "!\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x0874, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x0D") "Spela " COLOR(PURPLE) "Skuggor's Nocturne" COLOR(DEFAULT) "!\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x0875, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x19") "Spela " COLOR(LIGHTBLUE) "Ljuset's Preludium" COLOR(DEFAULT) "!\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x0876, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x0B") "Följ efter i " COLOR(ADJUSTABLE) "Saria's Visa" COLOR(DEFAULT) "!\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x0877, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x20") "Okej? Det här är " COLOR(RED) "Visan" COLOR(DEFAULT) "...\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x0878, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x27") "Kom ihåg " COLOR(BLUE) "den här visan" COLOR(DEFAULT) "...\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x0879, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Behåll " COLOR(YELLOW) "Solen's Visa " COLOR(DEFAULT) "i ditt hjärta.\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x087A, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Denna visa" COLOR(DEFAULT) " öppnar Tidsdörren...\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x087B, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x17") "Jag kommer aldrig att glömma " COLOR(PURPLE) "den här visan" COLOR(DEFAULT) "!\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x087C, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Spela med hjälp utav " COLOR(BLUE) "[A]" COLOR(DEFAULT) " och " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "; " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) " för att Avsluta.\n"
"\n"
"\n"
QUICKTEXT_DISABLE  OCARINA
)

DEFINE_MESSAGE(0x088B, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
BACKGROUND("\x00", "\x20", "\x00")  PERSISTENT
)

DEFINE_MESSAGE(0x088C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x23")  COLOR(RED) "Du kan inte warpa här!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  FADE("\x28")
)

DEFINE_MESSAGE(0x088D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(ADJUSTABLE) "Warpa till den Förlorade Skogen?" COLOR(DEFAULT)  QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Okej\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x088E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Warpa till Döda Berget's \n"
"Krater?" COLOR(DEFAULT)  QUICKTEXT_DISABLE "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Okej\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x088F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(BLUE) "Warpa till Hyliasjön?" COLOR(DEFAULT)  QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Okej\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0890, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(YELLOW) "Warpa till Ökenkolossen?" COLOR(DEFAULT)  QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Okej\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0891, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(PURPLE) "Warpa till kyrkogården?" COLOR(DEFAULT)  QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Okej\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0892, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Warpa till Tiden's Tempel?" COLOR(DEFAULT)  QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Okej\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x0893, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x05") "Du spelade " COLOR(ADJUSTABLE) "Skogs-Menuetten" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0894, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x0E") "Du spelade " COLOR(RED) "Eld's-Bolero" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0895, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Du spelade " COLOR(BLUE) "Vatten-Serenaden" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0896, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x04") "Du spelade " COLOR(YELLOW) "Själen's Klagosång" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0897, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x09") "Du spelade " COLOR(PURPLE) "Skuggor's Nocturne" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0898, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x08") "Du spelade " COLOR(LIGHTBLUE) "Ljuset's Preludium" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x0899, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x1E") "Du spelade " COLOR(ADJUSTABLE) "Saria's Visa" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x089A, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x1C") "Du spelade " COLOR(RED) "Epona's Visa" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x089B, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x18") "Du spelade " COLOR(BLUE) "Zelda's Vaggvisa" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x089C, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x16") "Du spelade " COLOR(YELLOW) "Solen's Visa" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x089D, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x10") "Du spelade " COLOR(LIGHTBLUE) "Tidsvisan" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x089E, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x09") "Du spelade " COLOR(PURPLE) "Stormvisan" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x089F, TEXTBOX_TYPE_OCARINA, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x04") "Du spelade " COLOR(YELLOW) "Fågelskrämman's Visa" COLOR(DEFAULT) ".\n"
"\n"
"\n"
QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x1000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Äntligen vaknar du!\n"
"Jag heter " COLOR(RED) "Navi" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  BOX_BREAK UNSKIPPABLE  COLOR(LIGHTBLUE) "Det Stora Dekuträdet har\n"
"bett mig att bli din " COLOR(RED) "partner " COLOR(LIGHTBLUE) "från\n"
"och med nu! Trevligt att råkas!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x1001, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x12") "Tjohoo! Hej, " NAME "!"
)

DEFINE_MESSAGE(0x1002, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Wow! En älva!!" BOX_BREAK UNSKIPPABLE "Äntligen så har en älva kommit till dig,\n"
NAME "!" TEXTID("\x10\x0F")
)

DEFINE_MESSAGE(0x1003, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag väntar på dig här.\n"
"Kila iväg nu! Gå och träffa det \n"
"Stora Dekuträdet!"
)

DEFINE_MESSAGE(0x1004, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
COLOR(BLUE) "[A] " COLOR(DEFAULT) "vid stenen, för att plocka upp den!\n"
COLOR(BLUE) "[A] " COLOR(DEFAULT) "vid stenen, för att plocka upp den!" BOX_BREAK "Dumma gamla" COLOR(RED) " Mido" COLOR(DEFAULT) "...han tvingade mig att \n"
"plocka upp stenarna utanför hans hus."
)

DEFINE_MESSAGE(0x1005, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Åh, du har en " COLOR(LIGHTBLUE) "älva" COLOR(DEFAULT) " nu?!\n"
"Det var ju jättebra, " NAME "!" BOX_BREAK UNSKIPPABLE "Va?" BOX_BREAK UNSKIPPABLE "Det\n"
COLOR(RED) "Gamla Dekuträdet" COLOR(DEFAULT) " har kallat dig? Vilken ära!" BOX_BREAK UNSKIPPABLE "Han kanske ger dig en speciell gåva!\n"
"Tihi!" BOX_BREAK UNSKIPPABLE "Det är för att det Stora Dekuträdet \n"
"är vår fader, skogen's\n"
"väktare, han gav liv till \n"
"alla oss Kokiri!"
)

DEFINE_MESSAGE(0x1006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag undrar om det " COLOR(RED) "Stora Dekuträdet " COLOR(DEFAULT) "\n"
"skänkte liv till allting som finns\n"
"i skogen, jag menar... utöver oss \n"
"Kokiri?"
)

DEFINE_MESSAGE(0x1007, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vi tar och jobbar på några tekniker!" BOX_BREAK "För att " COLOR(RED) "hoppa åt sidan " COLOR(DEFAULT) "vid " COLOR(LIGHTBLUE) "[Z] \n"
"Markering" COLOR(DEFAULT) ", tryck " COLOR(BLUE) "[A] " COLOR(DEFAULT) "medan du rör dig åt\n"
"höger eller vänster." BOX_BREAK "För att göra en " COLOR(RED) "bakåtvolt" COLOR(DEFAULT) " vid " COLOR(LIGHTBLUE) "[Z] \n"
"Markering" COLOR(DEFAULT) ", tryck " COLOR(BLUE) "[A] " COLOR(DEFAULT) "medan du rör dig\n"
"bakåt." BOX_BREAK "Fär att göra en " COLOR(RED) "rull-attack" COLOR(DEFAULT) " vid " COLOR(LIGHTBLUE) "[Z] \n"
"Markering" COLOR(DEFAULT) ", tryck " COLOR(BLUE) "[A] " COLOR(DEFAULT) "medan du rör dig\n"
"frammåt. Du kan undvika skada\n"
"medan du rullar." BOX_BREAK "Om du har ditt svärd draget vid\n"
COLOR(LIGHTBLUE) "[Z] markering" COLOR(DEFAULT) ", så kan du göra en" COLOR(RED) " \n"
"hopp-attack" COLOR(DEFAULT) " genom att trycka " COLOR(BLUE) "[A]" COLOR(DEFAULT) "! En hopp-attack \n"
"gär dubbelt så mycket skada!" BOX_BREAK "Du kan använda " COLOR(LIGHTBLUE) "[Z] Markering " COLOR(DEFAULT) "på\n"
COLOR(RED) "stenen" COLOR(DEFAULT) " här jämte mig, so kom igen och \n"
"öva nu!"
)

DEFINE_MESSAGE(0x1008, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Du har inte tillåtelse att lämna \n"
"skogen!" TEXTID("\x10\x09")
)

DEFINE_MESSAGE(0x1009, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det Stora Kokiriträdet har sagt det att\n"
"ifall en Kokiri lämnar skogen, så kommer \n"
"hen att dö!"
)

DEFINE_MESSAGE(0x100A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Dumbomen" COLOR(RED) " Mido" COLOR(DEFAULT) " tvingade mig till att klippa \n"
"gräset utanför Saria's hus." BOX_BREAK UNSKIPPABLE "Mido sa att han skulle göra jobbet\n"
"för att hon skulle tycka om honom, men det\n"
"är jag som får utföra allt jobb!" TEXTID("\x10\x0B")
)

DEFINE_MESSAGE(0x100B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du och " COLOR(RED) "Saria" COLOR(DEFAULT) " är ju väldigt nära vänner,\n"
"så kan du hjälpa mig att klippa \n"
"gräset?" BOX_BREAK "Du får behålla allt du hittar \n"
"medan du klipper det."
)

DEFINE_MESSAGE(0x100C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Ja, precis! Det är så man använder en\n"
COLOR(LIGHTBLUE) "älva" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Det är ju jättebra att du äntligen har fått\n"
"en älv-" COLOR(RED) "" COLOR(DEFAULT) "partner!" BOX_BREAK UNSKIPPABLE "Jag ska lära dig hur du pratar med \n"
"folk med hjälp utav din älva!" TEXTID("\x10\x0D")
)

DEFINE_MESSAGE(0x100D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Då en älva flyger nära en person \n"
"eller sak, så tryck " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " för att " COLOR(RED) "titta " COLOR(DEFAULT) "i den\n"
"riktningen." BOX_BREAK "Om du använder " COLOR(LIGHTBLUE) "[Z] Markering" COLOR(DEFAULT) ", så kan du \n"
"tala med avlägsna personer, \n"
"precis som vi gör nu." BOX_BREAK "Då du inte har någonting som du\n"
"kan markera, så kan du trycka " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " bara för\n"
"att " COLOR(RED) "se frammåt" COLOR(DEFAULT) ".\n"
"Prova!"
)

DEFINE_MESSAGE(0x100E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Åh, en " COLOR(LIGHTBLUE) "älva " COLOR(DEFAULT) "har äntligen kommit till dig!" BOX_BREAK UNSKIPPABLE "Nu så har du mycket att lära!" TEXTID("\x10\x19")
)

DEFINE_MESSAGE(0x100F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SFX("\x68\x63") "Wow! " QUICKTEXT_ENABLE "Vilka fantastiska nyheter!" QUICKTEXT_DISABLE "\n"
"Jag är så glad för din skull!" BOX_BREAK UNSKIPPABLE "Nu är du en äkta Kikiri,\n"
NAME "!" TEXTID("\x10\x10")
)

DEFINE_MESSAGE(0x1010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Så det säger du? \n"
"Det Stora Dekuträdet har\n"
"kallat på dig?" BOX_BREAK UNSKIPPABLE "Det är en riktigt stor ära att få tala med\n"
"Det Stora Dekuträdet!" TEXTID("\x10\x03")
)

DEFINE_MESSAGE(0x1011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Åh, så du ska redan gå..."
)

DEFINE_MESSAGE(0x1012, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Men det är okej, för vi kommer att vara\n"
"vänner för evigt...\n"
"Eller hur?"
)

DEFINE_MESSAGE(0x1013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag vill att du ska ha den här Okarinan...\n"
"Var snäll och ta väl hand om den."
)

DEFINE_MESSAGE(0x1014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Då du spelar på min Okarina, så vill\n"
"jag att du tänker på mig och kommer\n"
"tillbaka till skogen på besök."
)

DEFINE_MESSAGE(0x1015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Åh... Navi...\n"
"Du har återvänt..." BOX_BREAK UNSKIPPABLE  NAME "...\n"
"Välkommen..." BOX_BREAK UNSKIPPABLE "Lyssna noga på vad jag, det Stora\n"
COLOR(RED) "Dekuträdet" COLOR(DEFAULT) ", har att berätta för dig..." BOX_BREAK UNSKIPPABLE "Den gångna tiden's slummer \n"
"borde ha varit rastlös, och\n"
"fylld utav mardrömmar..." BOX_BREAK UNSKIPPABLE "Medan kraften hos ondskan's tjänare\n"
"har ökat, så har ett underliggande\n"
"klimat genomsyrat riket som orsakar mardrömmar\n"
"hos de som är känsliga för det..." BOX_BREAK UNSKIPPABLE "Du har onekligen kännt av det..." BOX_BREAK UNSKIPPABLE  NAME "... \n"
"Tiden har kommit för att testa ditt\n"
"mod..." TEXTID("\x10\x16")
)

DEFINE_MESSAGE(0x1016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag har fått en " COLOR(RED) "förbannelse" COLOR(DEFAULT) "över mig...\n"
"Jag behöver dig för att lyfta den\n"
"med hjälp utav din listighet och ditt mod." BOX_BREAK "Är du tillräckligt modig\n"
"för att ta dig an denna uppgift?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x1017, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "I så fall inträd, du modige \n"
NAME ", och du med, \n"
"Navi..." BOX_BREAK UNSKIPPABLE "älvan Navi...  \n"
"Du måste ge " NAME "ditt stöd..." BOX_BREAK UNSKIPPABLE "och " NAME "...Då " COLOR(LIGHTBLUE) "Navi \n"
COLOR(DEFAULT) "talar, så använd " COLOR(YELLOW) "[C-Up] " COLOR(DEFAULT) "för att lyssna noga \n"
"på hennes visa ord..."
)

DEFINE_MESSAGE(0x1018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Du kanske ännu inte litar \n"
"på dina förmågor...\n"
"Återvänd till Kokiriskogen för\n"
"att utveckla dina färdigheter i strid..." BOX_BREAK "Då du är redo, så återvänd hit \n"
"och tala med mig genom att använda " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "..."
)

DEFINE_MESSAGE(0x1019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Den bästa platsen att lära sig\n"
"nya färdigheter på är i " COLOR(ADJUSTABLE) "Skogen's \n"
"Tränings-center" COLOR(DEFAULT) "." COLOR(ADJUSTABLE) " " COLOR(DEFAULT) "Det är på kullen\n"
"precis ovanför här."
)

DEFINE_MESSAGE(0x101A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SFX("\x38\x82")  QUICKTEXT_ENABLE "Aj-aj-aj!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Förlåt mig, herrn!" QUICKTEXT_DISABLE "\n"
"Om jag ger dig en ledtråd, låter du mig \n"
"gå i så fall?" BOX_BREAK UNSKIPPABLE  SFX("\x38\x80") "Då du hoppar från en hög avsats,\n"
"om du håller inne " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) " frammåt, så kommer du\n"
"att rulla på marken då du landar \n"
"och skadar dig inte från fallet." BOX_BREAK UNSKIPPABLE  SFX("\x38\x80") "Jag kan inte garantera att det\n"
"funkar däremot, om avsatsen är,\n"
"väldigt högt upp, heh heh!" BOX_BREAK UNSKIPPABLE  SFX("\x38\x80") "Fast ptja, gör ett försök om du är\n"
"modig nog!\n"
QUICKTEXT_ENABLE "Bah ha hah!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x101B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Heh heh!\n"
"Är det inte den där Kokirigrabben som gömmer\n"
"sig bakom masken?"
)

DEFINE_MESSAGE(0x101C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ganska ovanlig mask det där\n"
"ändå. Heh heh! Jag gillar den! Den skulle kanske\n"
"kunna få mig att se lite tuffare ut." BOX_BREAK "Hmmm... Du skulle inte kunna ge den till mig?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Okej\n"
"Absolut inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x101D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Nedrans! Det var ju trist för mig det..."
)

DEFINE_MESSAGE(0x101E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tjoho! Jag ska ha på mig den\n"
"jämt och ständigt!"
)

DEFINE_MESSAGE(0x101F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SFX("\x48\x07") "Han gav dig precis " COLOR(RED) "10 Rupees" COLOR(DEFAULT) " för \n"
"den här 20-Rupees masken! Du förlorade \n"
"pengar på den affären!" BOX_BREAK UNSKIPPABLE "Gå tillbaka till Maskbutiken \n"
"och betala " COLOR(RED) "20 Rupees" COLOR(DEFAULT) " för \n"
"masken. Du får själv stå för \n"
"mellanskillnaden."
)

DEFINE_MESSAGE(0x1020, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Mina polare vill verkligen ha den här masken!\n"
"He he he!"
)

DEFINE_MESSAGE(0x1021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, så du är välbehållen? Du lämnade inte skogen\n"
"trots allt då med andra ord, eller gjorde du?"
)

DEFINE_MESSAGE(0x1022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Visste du att om du håller inne " COLOR(LIGHTBLUE) "▼\n"
COLOR(DEFAULT) "frammåt då du hoppar från en avsats,\n"
"så kommer du att rulla då du landar. Det\n"
"absorberar stöten då du landar." BOX_BREAK "Om du faller från för hög höjd däremot,\n"
"så tar du fortfarande skada..."
)

DEFINE_MESSAGE(0x1023, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Saria sa att hon väntar på\n"
"det vanliga stället."
)

DEFINE_MESSAGE(0x1024, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Bra jobbat, " NAME "..."
)

DEFINE_MESSAGE(0x1025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du har en häftig Slangbella va?" BOX_BREAK "Vet du vad som är så häftigt med den?\n"
"Du kan sikta genom att hålla inne\n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " och skjuta genom at släppa\n"
"knappen! Hur häftigt är inte det?!" BOX_BREAK "om du har Slangbellan redo,\n"
"så kan du använda " COLOR(LIGHTBLUE) "[Z] Markering" COLOR(DEFAULT) " för att \n"
COLOR(RED) "skjuta medan du rör på dig" COLOR(DEFAULT) ".... visste \n"
"du det?"
)

DEFINE_MESSAGE(0x1026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Nej, " NAME "...\n"
"Jag har inte mycket tid kvar..."
)

DEFINE_MESSAGE(0x1027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Så...lyssna noga...\n"
"En " COLOR(RED) "ondskefull man från öknen" COLOR(DEFAULT) " \n"
"har kastat en ödesdiger förbannelse över mig..."
)

DEFINE_MESSAGE(0x1028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om du letar efter Saria, så är\n"
"i den " COLOR(ADJUSTABLE) "Förlorade Skogen" COLOR(DEFAULT) ", som vanligt." BOX_BREAK "Kom inte här och säg att du inte \n"
"känner till vart det är! Ingången är där uppe\n"
"på avsatsen med utsikt över \n"
"byn!" BOX_BREAK "Jag vet att du kommer att gå vilse! Men \n"
"oroa dig inte, du kommer bara att komma\n"
"tillbaka till ingången!" BOX_BREAK SHIFT("\x51")  QUICKTEXT_ENABLE "Fnys!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x1029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du får aldrig låta ökenmannen \n"
"i sin svarta rustning lägga \n"
"vantarna på den heliga Trekraften..." BOX_BREAK UNSKIPPABLE "Du får aldrig låta den mannen,\n"
"med sitt onda hjärta, träda in i det \n"
"Heliga Kungariket" COLOR(RED) " " COLOR(DEFAULT) "som legenderna talar om..." BOX_BREAK UNSKIPPABLE "Den onda mannen som kastade dödens \n"
"över mig och tömde mig \n"
"på kraft..." BOX_BREAK UNSKIPPABLE "På grund utav den förbannelsen, så är mitt slut\n"
"nära..." BOX_BREAK UNSKIPPABLE "Trots att dina hjältemodiga insateser \n"
"att lyfta förbannelsen var lyckade, \n"
"så var jag dömd före du ens började..." BOX_BREAK UNSKIPPABLE "Ja, jag kommer att somna in snart...\n"
UNSKIPPABLE "Men sörj mig inte..." BOX_BREAK UNSKIPPABLE "Jag har haft möjlighet att berätta för dig \n"
"om dessa betydelsefulla omständigheter..." BOX_BREAK UNSKIPPABLE "Detta är Hyrule's sista hopp..."
)

DEFINE_MESSAGE(0x102A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Vår framtid hänger på dig,\n"
NAME "...\n"
"Du är modig..." BOX_BREAK UNSKIPPABLE "Navi...\n"
"Hjälp " NAME " att fullborda \n"
"min vilja..." BOX_BREAK UNSKIPPABLE  TEXT_SPEED("\x02") "Jag bönfaller dig... Navi..." TEXT_SPEED("\x00") "\n"
TEXT_SPEED("\x03") "Far...väl..." TEXT_SPEED("\x00")
)

DEFINE_MESSAGE(0x102B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Vi tar oss till Slottet Hyrule,\n"
NAME "!!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x102C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  TEXT_SPEED("\x01")  COLOR(LIGHTBLUE) "Far-väl..." COLOR(DEFAULT)  TEXT_SPEED("\x00")  COLOR(LIGHTBLUE) "Stora Dekuträd..." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x102D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vilken otur...Heh heh!"
)

DEFINE_MESSAGE(0x102E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vill du spela en gång till?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x102F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hallå där! \"" COLOR(LIGHTBLUE) "Herr utan Älva" COLOR(DEFAULT) "!\"\n"
"Vad har du för ärende hos\n"
"Det Stora Dekuträdet?" BOX_BREAK UNSKIPPABLE "Utan en älva, så är du inte\n"
"ens en riktig man!" TEXTID("\x10\xD0")
)

DEFINE_MESSAGE(0x1030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om du vill passera härigenom,\n"
"så bör du i alla fall " COLOR(BLUE) "utrusta dig" COLOR(DEFAULT) " med ett " COLOR(ADJUSTABLE) "svärd" COLOR(RED) "\n"
COLOR(DEFAULT) "och en" COLOR(LIGHTBLUE) "sköld" COLOR(DEFAULT) "!" BOX_BREAK SHIFT("\x51")  QUICKTEXT_ENABLE "Suck!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x1031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x57")  QUICKTEXT_ENABLE "Va?!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE  COLOR(RED) "Mido " COLOR(DEFAULT) "vill inte låta dig besöka \n"
"det Stora Dekuträdet?" TEXTID("\x10\xC8")
)

DEFINE_MESSAGE(0x1032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du kan köpa en " COLOR(LIGHTBLUE) "sköld" COLOR(DEFAULT) " i affären,\n"
"men det finns bara ett " COLOR(ADJUSTABLE) "svärd" COLOR(DEFAULT) "\n"
"gömt någonstans i skogen."
)

DEFINE_MESSAGE(0x1033, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Om du vill träffa \n"
"det Stora Dekuträdet, så bör du i alla fall \n"
"utrusta dig med ett " COLOR(ADJUSTABLE) "svärd" COLOR(DEFAULT) " och en " COLOR(LIGHTBLUE) "sköld" COLOR(DEFAULT) "!" TEXTID("\x10\xD2")
)

DEFINE_MESSAGE(0x1034, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag, den fantastiske Mido," COLOR(RED) " " COLOR(DEFAULT) "kommer aldrig att \n"
"acceptera dig som en utav oss!" BOX_BREAK "Nedrans! Hur blev en sådan som du\n"
"Saria och det Stora Dekuträdet's\n"
"favorit? va?!\n"
"grubbel...grubbel..."
)

DEFINE_MESSAGE(0x1035, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag kan lära dig om " COLOR(RED) "ikonerna\n"
COLOR(DEFAULT) "högst upp på skärmen.\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Om de gula ikonerna\n"
"Om de blå ikonerna" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x1036, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"De tre gula ikonerna uppe \n"
"i högra hörnet kallas för " COLOR(YELLOW) "[C] ikoner" COLOR(DEFAULT) "." BOX_BREAK "De visar vad du kan\n"
"använda med " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) "," COLOR(YELLOW) " [C-Down] " COLOR(DEFAULT) "och" COLOR(YELLOW) " \n"
"[C-Right] " COLOR(DEFAULT) "knapparna." BOX_BREAK "Så får ett " COLOR(YELLOW) "[C] Knappföremål" COLOR(DEFAULT) ", \n"
"så gå in i " COLOR(YELLOW) "Föremåls-skärmen" COLOR(DEFAULT) " \n"
"och välj det på en utav de tre\n"
COLOR(YELLOW) "[C] Knapparna" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x1037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Den blå ikonen högst upp på\n"
"skärmen kallas för " COLOR(BLUE) "Actionikonen" COLOR(DEFAULT) "." BOX_BREAK "Actionikonen visar dig \n"
"vilken handling du kan utföra\n"
"då du trycker på " COLOR(BLUE) "[A]" COLOR(DEFAULT) "." BOX_BREAK "Se till att stanna upp på många platser\n"
"för att se olika handlingar du kan utföra."
)

DEFINE_MESSAGE(0x1038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Om du vill lära dig om\n"
COLOR(RED) "kartan " COLOR(DEFAULT) "och " COLOR(RED) "föremål" COLOR(DEFAULT) ", så fråga mig bara.\n"
"Men fråga bara om du orkar\n"
"lyssna på en lång förklaring." BOX_BREAK "Vad skulle du vilja veta mer om?\n"
THREE_CHOICE  COLOR(ADJUSTABLE) "Om kartan \n"
"Om föremål\n"
"Fråga inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x1039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Du har en " COLOR(RED) "karta" COLOR(DEFAULT) " längst ned\n"
"till höger på skärmen." BOX_BREAK "Den " COLOR(YELLOW) "gula pilen " COLOR(DEFAULT) "visar din \n"
"nuvarande position and riktningen du\n"
"står inför. Den " COLOR(RED) "röda markeringen " COLOR(DEFAULT) "visar\n"
"vart du gick in då du kom till detta området." BOX_BREAK "Du kan stänga av och sätta på kartan\n"
"med hjälp utav " COLOR(LIGHTBLUE) "[L]" COLOR(DEFAULT) "." BOX_BREAK "Om du vill se namnet på en\n"
"plats, tryck " COLOR(RED) "START" COLOR(DEFAULT) "." BOX_BREAK "På den här skärmen så.\n"
"väljer du " COLOR(RED) "Kart-Skärmen" COLOR(DEFAULT) "." BOX_BREAK "På Kart-Skärmen, så kan du \n"
"se en karta över Hyrule.\n"
"Hänger du med?"
)

DEFINE_MESSAGE(0x103A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Det finns tre typer utav föremål:\n"
COLOR(BLUE) "Utrustnings-Föremål" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C] Knapp-Föremål" COLOR(DEFAULT) "\n"
"och " COLOR(LIGHTBLUE) "Uppdrags-Föremål" COLOR(DEFAULT) "." BOX_BREAK COLOR(BLUE) "Utrustnings-Föremål" COLOR(DEFAULT) " är saker som exempelvis \n"
"svärd, sköld och kläder \n"
"som är i effekt då du har utrustat dig med\n"
"dem." BOX_BREAK COLOR(YELLOW) "[C] Knapp-Föremål" COLOR(DEFAULT) " kan bli placerade på \n"
COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) ", och " COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) ", och\n"
"används genom att man trycker på dessa knappar." BOX_BREAK COLOR(LIGHTBLUE) "Uppdrags-Föremål " COLOR(DEFAULT) "är saker som du \n"
"samlar på dig under ditt äventyr. Du\n"
"bara bär runt på dem." BOX_BREAK "Om du vill byta utrustning\n"
"eller bara se över dina tillgångar,\n"
"tryck " COLOR(RED) "START" COLOR(DEFAULT) ". \n"
"Du får då upp en ny skärm." BOX_BREAK "Byt mellan de fyra \n"
"olika skärmarna med " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " eller\n"
COLOR(LIGHTBLUE) "[R] " COLOR(DEFAULT) "byt eller titta på föremål\n"
"så som du känner. Ta dig en titt!" BOX_BREAK "Då du bestämmer dig för ta på dig ett \n"
COLOR(BLUE) "Utrustnings-Föremål" COLOR(DEFAULT) ", tryck " COLOR(BLUE) "[A]" COLOR(DEFAULT) ". För\n"
COLOR(YELLOW) "[C] Knapp-föremål" COLOR(DEFAULT) ", tryck " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ",\n"
COLOR(YELLOW) "[C-Down] " COLOR(DEFAULT) "eller " COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) "." BOX_BREAK "Det där var en ganska så lång förklaring.\n"
"Förstod du allt det där?"
)

DEFINE_MESSAGE(0x103B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Ptja, kom ihåg det här bara. Om du\n"
"vill " COLOR(ADJUSTABLE) "spara" COLOR(DEFAULT) ", tryck " COLOR(RED) "START " COLOR(DEFAULT) "för att\n"
"få upp skärmarna, tryck sedan\n"
COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x103C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Min syster tog några Rupees och \n"
"fick iväg för att handla i affären\n"
"som har ett rött tak.\n"
"Tihi!" BOX_BREAK "När vi ändå talar om " COLOR(RED) "Rupees" COLOR(DEFAULT) ", en " COLOR(ADJUSTABLE) "grön " COLOR(DEFAULT) "Rupee\n"
"är värd en Rupee, en " COLOR(BLUE) "blå" COLOR(DEFAULT) " är värd\n"
"fem och en " COLOR(RED) "röd" COLOR(DEFAULT) " är värd \n"
"tjugo. Hehehe!"
)

DEFINE_MESSAGE(0x103D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Den här affären...säljer saker som du\n"
"kan få gratis i skogen!\n"
"Tihi!" BOX_BREAK "Vet du hur du använder en \n"
COLOR(RED) "Dekusköld" COLOR(DEFAULT) "? Tihi!" BOX_BREAK "Då du får skölden, tryck\n"
COLOR(RED) "START " COLOR(DEFAULT) "för att öppna upp skärmarna.\n"
"Välj " COLOR(BLUE) "Utrustnings-skärmen\n"
COLOR(DEFAULT) "med " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " eller " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "." BOX_BREAK "På " COLOR(BLUE) "Utrustnings-skärmen" COLOR(DEFAULT) ", \n"
"så väljer du föremålet som du vill utrusta dig med\n"
"och trycerk " COLOR(BLUE) "[A]" COLOR(DEFAULT) "." BOX_BREAK "Så fort du använder skölden, håll upp den\n"
"med " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " och byt vinkel med hjälp\n"
"utav " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ". Tihi!"
)

DEFINE_MESSAGE(0x103E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vill du veta hur du använder\n"
" " COLOR(YELLOW) "[C-Up] Knappen" COLOR(DEFAULT) "?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x103F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Om du trycker " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) ", så kan du\n"
"ändra din vy." BOX_BREAK "På en sådan här plats, så byter du\n"
"kameravinkel till ovanför. Utomhus, på\n"
"exempelvis ett fält, så kommer det istället\n"
"att byta till förstapersons-perspektiv." BOX_BREAK "Då \"" COLOR(YELLOW) "Navi" COLOR(DEFAULT) "\" visas uppe i\n"
"det högra hörnet på din skärm \n"
"så vill hon tala med dig.\n"
"Använd " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) " för att lyssna på henne!"
)

DEFINE_MESSAGE(0x1040, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Ptja, om du provar dig fram, \n"
"så kommer du att räkna ut det."
)

DEFINE_MESSAGE(0x1041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det där var inte riktigt Saria's Visa..."
)

DEFINE_MESSAGE(0x1042, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Mido" COLOR(RED) " " COLOR(DEFAULT) "är väldigt upprörd!\n"
"Har någonting hänt honom?"
)

DEFINE_MESSAGE(0x1043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Va? Vart är du på väg?!" BOX_BREAK "Till slottet?\n"
"Vart är slottet någonstans?"
)

DEFINE_MESSAGE(0x1044, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vi Kokiri dör om vi lämnar\n"
"skogen!" BOX_BREAK "Du tänker inte att försöka lämna\n"
"skogen, eller?!"
)

DEFINE_MESSAGE(0x1045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hallå där, " NAME "!\n"
"Vad har du gjort?!" BOX_BREAK UNSKIPPABLE "Det Stora Dekuträdet...har han...\n"
"dött?" BOX_BREAK UNSKIPPABLE "Vad fick dig att göra något \n"
"sådant?! Allt är ditt fel!!" EVENT
)

DEFINE_MESSAGE(0x1046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Hallå där!!" QUICKTEXT_DISABLE "\n"
"Vad gör du i mitt hus?!"
)

DEFINE_MESSAGE(0x1047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  NAME ", du är i säkerhet!" TEXTID("\x10\x48")
)

DEFINE_MESSAGE(0x1048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Saria och " NAME " kommer att vara\n"
"vänner för evigt."
)

DEFINE_MESSAGE(0x1049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Har någonting hänt \n"
"Det Stora Dekuträdet?"
)

DEFINE_MESSAGE(0x104A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det känns som att luften i skogen\n"
"har förändrats på något vis."
)

DEFINE_MESSAGE(0x104B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
NAME ", tänker du att\n"
"gå din väg?"
)

DEFINE_MESSAGE(0x104C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Kommer du tillbaka om du\n"
"förlorar din sköld?"
)

DEFINE_MESSAGE(0x104D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SFX("\x38\x80") "Alla vi små Dekubusk-bröder\n"
"håller med...du ser precis \n"
"ut som vår heliga skogstotem!" BOX_BREAK SFX("\x38\x80") "Som en gåva från oss, var\n"
"och acceptera dessa " COLOR(RED) "Dekukäppar" COLOR(DEFAULT) ".\n"
"Vi ska också förbättra din\n"
"bärförmåga!" BOX_BREAK "Abrahadabra!" BOX_BREAK SFX("\x38\x80") "Simsalabim!" EVENT
)

DEFINE_MESSAGE(0x104E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Sedan det Stora Dekuträdet började\n"
"vissna...så har fler elakingar \n"
"börjat dyka upp i skogen...\n"
"Jag är rädd!"
)

DEFINE_MESSAGE(0x104F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "En ondskefull vind blåser \n"
"från Skogstemplets riktning." BOX_BREAK UNSKIPPABLE  COLOR(RED) "Saria" COLOR(DEFAULT) " vänster, säger,\n"
"\"Jag måste göra någonting\n"
"åt det!\"" TEXTID("\x10\x50")
)

DEFINE_MESSAGE(0x1050, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"" COLOR(ADJUSTABLE) "Skogstemplet " COLOR(DEFAULT) "är beläget \n"
"i den Heliga Skogen's glänta på\n"
"andra sidan av den Förlorade Skogen."
)

DEFINE_MESSAGE(0x1051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Saria gick iväg till templet \n"
"och har inte kommit tillbaka..."
)

DEFINE_MESSAGE(0x1052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hallå där herrn! Du bör inte\n"
"använda en Dekusköld! De är\n"
"endast till för barn!"
)

DEFINE_MESSAGE(0x1053, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vart är Saria? \n"
"Känner du Saria, herrn?\n"
"Det var märkligt..." TEXTID("\x10\x54")
)

DEFINE_MESSAGE(0x1054, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vart har " COLOR(RED) "Mido" COLOR(DEFAULT) " tagit vägen\n"
"under en sådan här kris?"
)

DEFINE_MESSAGE(0x1055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag förstår. du hade inga som helst \n"
"problem att ta dig in i skogen, \n"
"herrn..." BOX_BREAK "Störde elakingarna där ute dig\n"
"så mycket? Före det Stora Dekuträdet \n"
"dog, så stötte man aldrig på\n"
"sådana där saker här...." TEXTID("\x10\x56")
)

DEFINE_MESSAGE(0x1056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"På grund av att det är farligt utomhus\n"
"så stannar jag alltid hemma. Men \n"
"jag är fruktansvärt uttråkad här inne!"
)

DEFINE_MESSAGE(0x1057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du kan köpa " COLOR(RED) "pilar " COLOR(DEFAULT) "i affären \n"
"enbart om du har en " COLOR(RED) "pilbåge" COLOR(DEFAULT) ". Har du \n"
"en sådan, herrn?"
)

DEFINE_MESSAGE(0x1058, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Har du varit ute och rest\n"
"mycket, herrn?\n"
"Har du någonsin mött en pojke vid namn \n"
NAME "?" BOX_BREAK UNSKIPPABLE "Mido har sagt att det Stora \n"
"Dekuträdet vissnade på grund av att\n"
"den pojken gjorde någonting..." BOX_BREAK UNSKIPPABLE "Endast Saria försvarade \n"
NAME "honom...tills hon lämnade." TEXTID("\x10\x59")
)

DEFINE_MESSAGE(0x1059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vi kanske missförstod...."
)

DEFINE_MESSAGE(0x105A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Har inte jag sett dig\n"
"förr, herrn?"
)

DEFINE_MESSAGE(0x105B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Herrn, känner du en pojke \n"
"vid namn " NAME "?" BOX_BREAK UNSKIPPABLE "Han lämnade skogen och kom\n"
"aldrig tillbaka..." TEXTID("\x10\x5C")
)

DEFINE_MESSAGE(0x105C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag undrar om " NAME " någonsin \n"
"kommer att återvända?"
)

DEFINE_MESSAGE(0x105D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Det hade varit jättehäftigt att \n"
"vara så stor som du, herrn! Jag vill verkligen\n"
"vara stor som du!" BOX_BREAK UNSKIPPABLE "Jag vill vara stor och stark \n"
"så att jag kan ge Dekubuskarna en omgång, men..." TEXTID("\x10\x5E")
)

DEFINE_MESSAGE(0x105E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vi Kokiri blir aldrig så stora \n"
"under hela vår livstid...\n"
"Vilken osis!"
)

DEFINE_MESSAGE(0x105F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Varför följer den där älvan \n"
"efter dig? Du är inte en av oss!"
)

DEFINE_MESSAGE(0x1060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Vem är du? Trots att du klär dig \n"
"i Kokirikläder, så kan du inte\n"
"lura mig!" TEXTID("\x10\x61")
)

DEFINE_MESSAGE(0x1061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag lovade Saria att jag aldrig\n"
"skulle låta någon passera."
)

DEFINE_MESSAGE(0x1062, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hallå där! Jag är ett skott från " COLOR(RED) "det Stora \n"
"Dekuträdet" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Tack vare att du och Saria" COLOR(RED) " " COLOR(DEFAULT) "lyfte\n"
"förbannelsen i Skogstemplet, så \n"
"kan jag gro och växa!" BOX_BREAK UNSKIPPABLE "Tack så mycket!"
)

DEFINE_MESSAGE(0x1063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hej, har du träffat dina gamla\n"
"vänner? ingen utav dem kunde känna\n"
"igen dig i din vuxna kropp,\n"
"eller hur?" BOX_BREAK UNSKIPPABLE "Det är för att " COLOR(ADJUSTABLE) "Kokiri" COLOR(DEFAULT) " aldrig\n"
"blir vuxna! Även efter sju år\n"
"så förblir de barn!"
)

DEFINE_MESSAGE(0x1064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du måste undra varför just\n"
"du har vuxit upp!" BOX_BREAK UNSKIPPABLE "Ptja, som du kanske redan har \n"
"gissat, så är du inte en Kokiri!\n"
"Du är faktiskt en " COLOR(LIGHTBLUE) "Hylian" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Jag är glad att jag äntligen\n"
"kunde berätta sanningen för dig!"
)

DEFINE_MESSAGE(0x1065, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_TOP,
"För många år sedan, före Hyrules\n"
"Konung förenade landet, så pågick\n"
"det ett våldsamt krig i vår värld." BOX_BREAK_DELAYED("\x5A") "En dag, så försökte en\n"
COLOR(RED) "Hyliansk mor " COLOR(DEFAULT) "och hennes " COLOR(RED) "bebis" COLOR(DEFAULT) "fly\n"
"genom att ta sig till den \n"
"förbjudna skogen." BOX_BREAK_DELAYED("\x5A") "Modern var väldigt illa skadad...\n"
"Hennes enda val var att anförtro\n"
"barnet till " COLOR(RED) "Dekuträdet" COLOR(DEFAULT) ", skogens \n"
"väktare." BOX_BREAK_DELAYED("\x5A") "Dekuträdet kunde känna det på sig att\n"
"detta var ett barn med ett särskilt syfte, vars\n"
"öde skulle komma att forma hela världen,\n"
"så vi tog honom hit till skogen." BOX_BREAK_DELAYED("\x5A") "Efter att modern somnade in, \n"
"så uppfostrade vi barnet som en " COLOR(ADJUSTABLE) "Kokiri" COLOR(DEFAULT) ".\n"
"Och nu, äntligen, så har \n"
"ödets dag kommit!" FADE("\x5A")
)

DEFINE_MESSAGE(0x1066, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du är en " COLOR(LIGHTBLUE) "Hylian" COLOR(DEFAULT) ", och har alltid\n"
"varit menad att lämna den här skogen." BOX_BREAK UNSKIPPABLE "Och nu...\n"
"Så har du lärt dig om \n"
"ditt öde...\n"
"Så nu vet du vad du måste göra..." BOX_BREAK UNSKIPPABLE "Det är helt riktigt...\n"
"Du måste rädda landet \n"
"Hyrule!" BOX_BREAK UNSKIPPABLE NAME ", lyft förbannelsen \n"
"som vilar över alla tempel\n"
"och återställ freden i Hyrule!!"
)

DEFINE_MESSAGE(0x1067, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SHIFT("\x37") "Den melodin?!" BOX_BREAK UNSKIPPABLE "Saria brukar alltid spela\n"
"den visan!\n"
"Du...Känner du Saria?" BOX_BREAK UNSKIPPABLE "Den visan..." BOX_BREAK UNSKIPPABLE "Saria lärde endast sina vänner \n"
"den visan..." TEXTID("\x10\x6F")
)

DEFINE_MESSAGE(0x1068, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Då jag ser dig... \n"
"Jag vet inte varför, men jag kommer ihåg...\n"
"honom..."
)

DEFINE_MESSAGE(0x1069, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Nu har jag dig!\n"
"I denna avgrund mellan dröm \n"
"och verklighet, snart är allt som\n"
"är kvar utav dig bara en död kropp!"
)

DEFINE_MESSAGE(0x106A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Tack så mycket...\n"
"Tack vare dig, så kunde jag vakna upp\n"
"som en Vise..." BOX_BREAK UNSKIPPABLE "Jag är " COLOR(ADJUSTABLE) "Saria" COLOR(DEFAULT) ".\n"
"Skogstemplets Vise..."
)

DEFINE_MESSAGE(0x106B, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE  SHIFT("\x28") "Saria kommer alltid att förbli...\n"
SHIFT("\x3C") "din vän..." FADE("\x50")
)

DEFINE_MESSAGE(0x106C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Tidens flöde är alltid grym...\n"
"Dess hastighet färdas olika\n"
"från person till person, men ingen \n"
"kan förändra det..." BOX_BREAK UNSKIPPABLE "Något som aldrig förändras däremot\n"
"är minnet från ungdomens dagar..." BOX_BREAK UNSKIPPABLE "För att återkomma hit så,\n"
"spela " COLOR(ADJUSTABLE) "Skogs-Menuetten" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x106D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME "...\n"
"På återseende..."
)

DEFINE_MESSAGE(0x106E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Saria har inte kommit tillbaka ännu...\n"
"Men jag vet att hon en dag ska återkomma..."
)

DEFINE_MESSAGE(0x106F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Okej...\n"
"Jag litar på dig." TEXTID("\x10\x68")
)

DEFINE_MESSAGE(0x1070, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Åh...Jag förstår..." BOX_BREAK UNSKIPPABLE "Saria kommer aldrig mer tillbaka..." BOX_BREAK UNSKIPPABLE "Men...Jag...Jag lovade \n"
"Saria..." BOX_BREAK UNSKIPPABLE "Att om " NAME " kommer tillbaka, så \n"
"skulle jag berätta för honom att \n"
"Saria väntade på honom..." BOX_BREAK UNSKIPPABLE "Därför att " TEXT_SPEED("\x03") "Saria...Gillade...\n"
"Verkligen..." TEXT_SPEED("\x00")  TEXTID("\x10\x71")
)

DEFINE_MESSAGE(0x1071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x4B") "Du." BOX_BREAK "Om du träffar på honom någonstans, snälla\n"
"berätta det för honom..." TEXTID("\x10\xD6")
)

DEFINE_MESSAGE(0x1072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Lär mig om hur man fäktas!\n"
"Det enda jag har gjort i hela mitt liv\n"
"är att spamma" COLOR(ADJUSTABLE) "[B] " COLOR(DEFAULT) "!\n"
)

DEFINE_MESSAGE(0x1073, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag får fortfarande känslan utav\n"
"att jag har träffat dig förr, herrn."
)

DEFINE_MESSAGE(0x1074, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du är så stor och stark!\n"
"Jag vill verkligen bli som du \n"
"en dag trots att jag alltid\n"
"kommer att vara liten."
)

DEFINE_MESSAGE(0x1075, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
NAME "... Jag undrar om han\n"
"någonsin kommer tillbaka..."
)

DEFINE_MESSAGE(0x1076, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det känns som att vi har\n"
"känt varandra länge, herrn!"
)

DEFINE_MESSAGE(0x1077, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Nu då " COLOR(RED) "Dekuträdets grodd" COLOR(DEFAULT) "\n"
"växer i det Stora Dekuträdets \n"
"glänta, så har skogen\n"
"återvänt till det normala!"
)

DEFINE_MESSAGE(0x1078, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vi ska alla hjälpas åt att\n"
"beskydda skogen!"
)

DEFINE_MESSAGE(0x1079, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Nyligen så har en lättsam vind\n"
"börjat blåsa in över oss."
)

DEFINE_MESSAGE(0x107A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Sedan den lättsamma vinden \n"
"började blåsa, så har jag blivit\n"
"övertygad att " NAME " \n"
"kommer att komma tillbaka!"
)

DEFINE_MESSAGE(0x107B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag undrar om Saria kommer tillbaka..."
)

DEFINE_MESSAGE(0x107C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag är säker på att " NAME " kommer \n"
"kommer att återvända!"
)

DEFINE_MESSAGE(0x107D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x2E")  COLOR(LIGHTBLUE) "Det Stora Dekuträdet...\n"
COLOR(DEFAULT)  SHIFT("\x48")  COLOR(LIGHTBLUE) "Jag är tillbaka!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x107E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Den där onda mannen använder\n"
"oavbrutet sina otäcka magiska krafter\n"
"för att söka det Heliga Kungariket\n"
"som är kopplat till Hyrule..." BOX_BREAK UNSKIPPABLE "För det är i det Heliga \n"
"Kungariket som man kan finna den gudomliga\n"
"reliken, " COLOR(LIGHTBLUE) "Trekraften" COLOR(DEFAULT) ", som innehåller \n"
"gudarnas heliga essens..."
)

DEFINE_MESSAGE(0x107F, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x06") "Före tiden tog sin början, före\n"
SHIFT("\x31") "andar och liv existerade..." QUICKTEXT_DISABLE  FADE("\x50")
)

DEFINE_MESSAGE(0x1080, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x02") "Så steg tre gyllene gudinnor\n"
SHIFT("\x04") "ned till den kaos som var Hyrule..." QUICKTEXT_DISABLE  FADE("\x63")
)

DEFINE_MESSAGE(0x1081, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x13") "Din, kraftens gudinna..." QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x1082, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x09") "Nayru, vishetens gudinna..." QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x1083, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x06") "Farore, modets gudinna..." QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x1084, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x53") "Din..." QUICKTEXT_DISABLE  FADE("\x1E")
)

DEFINE_MESSAGE(0x1085, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x02") "med sina starka flammande armar, hon\n"
SHIFT("\x0A") "brukade landet och skapade\n"
SHIFT("\x3A") "den röda jorden." QUICKTEXT_DISABLE  FADE("\x63")
)

DEFINE_MESSAGE(0x1086, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x4C") "Nayru..." QUICKTEXT_DISABLE  FADE("\x1E")
)

DEFINE_MESSAGE(0x1087, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x03") "Hällde sin vishet över jorden\n"
SHIFT("\x0F") "och skänkte världen\n"
SHIFT("\x45") "lagens prägel." QUICKTEXT_DISABLE  FADE("\x63")
)

DEFINE_MESSAGE(0x1088, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x4B") "Farore..." QUICKTEXT_DISABLE  FADE("\x1E")
)

DEFINE_MESSAGE(0x1089, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x09") "Med sin rika själ, skapade alla\n"
SHIFT("\x14") "livsformer som skulle komma att\n"
SHIFT("\x4B") "upphålla lagen." QUICKTEXT_DISABLE  FADE("\x63")
)

DEFINE_MESSAGE(0x108A, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x16") "De tre gudinnorna\n"
SHIFT("\x22") "hade fullbordat sitt arbete,\n"
SHIFT("\x19") "och återgick till himmelriket." QUICKTEXT_DISABLE  FADE("\x5A")
)

DEFINE_MESSAGE(0x108B, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x14") "Det enda som återstod, vid den\n"
SHIFT("\x07") "plats som gudinnorna hade lämnat världen,\n"
SHIFT("\x1B") "var tre heliga gyllene trianglar." QUICKTEXT_DISABLE  FADE("\x5A")
)

DEFINE_MESSAGE(0x108C, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x08") "Sedan dess så har de heliga\n"
SHIFT("\x0E") "trianglarna blivit en grundpelare\n"
SHIFT("\x2E") "för vår världs beskydd." QUICKTEXT_DISABLE  FADE("\x5A")
)

DEFINE_MESSAGE(0x108D, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x0F") "Och platsen där\n"
SHIFT("\x1C") "trianglarna nu mer vilar\n"
SHIFT("\x3B") "är det Heliga Kungariket." QUICKTEXT_DISABLE  FADE("\x63")
)

DEFINE_MESSAGE(0x108E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hej grabben, du gjorde rätt bra ifrån dig...\n"
"Det verkar som att du börjar\n"
"kunna det här..." BOX_BREAK_DELAYED("\x3C") "Men du har endast besegrat\n"
"min skugga...\n"
"Då du slåss mot den riktiga jag så \n"
"kommer det inte att bli lika lätt!" BOX_BREAK_DELAYED("\x3C") "Vilken värdelös skapelse det \n"
"där spöket var! Jag ska fördriva det till\n"
"tomhetens fasansfulla avgrunder!!" FADE("\x3C")
)

DEFINE_MESSAGE(0x108F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag visste hela tiden att du skulle \n"
"komma. För jag känner dig..." BOX_BREAK UNSKIPPABLE "Nej..." BOX_BREAK_DELAYED("\x1E")  UNSKIPPABLE "Du behöver inte förklara\n"
"det för mig..." BOX_BREAK UNSKIPPABLE "För ödet säger det att \n"
"du och jag inte kan leva i samma värld."
)

DEFINE_MESSAGE(0x1090, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag kommer att stanna här som Skogens\n"
"Vise ochj hjälpa dig..." BOX_BREAK UNSKIPPABLE "Så, ta den här \n"
COLOR(ADJUSTABLE) "Medaljen" COLOR(DEFAULT) "..."
)

DEFINE_MESSAGE(0x1091, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Du har sannerligen bevisat \n"
"ditt mod..." BOX_BREAK UNSKIPPABLE "Jag visste att du skulle kunna\n"
"utföra min önskan..."
)

DEFINE_MESSAGE(0x1092, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
"Så, jag har nu mer att berätta för dig,\n"
"är du beredd att lyssna...\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x1093, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE  NAME "...\n"
"Gå nu till Hyrules Slott..." BOX_BREAK UNSKIPPABLE "Där så kommer du säkerligen att\n"
"möta " COLOR(RED) "Ödets Prinsessa" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "Ta den här" COLOR(RED) "stenen " COLOR(DEFAULT) "med dig.\n"
"Stenen som han så innerligt ville\n"
"ha, att han kastade den här\n"
"förbannelsen över mig..."
)

DEFINE_MESSAGE(0x1094, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag" COLOR(RED) " " COLOR(DEFAULT) "visste...\n"
"att du skulle lämna skogen...\n"
"en vacker dag, " NAME "..." BOX_BREAK UNSKIPPABLE "För du är varken lik mig\n"
"eller" COLOR(RED) " " COLOR(DEFAULT) "mina vänner...."
)

DEFINE_MESSAGE(0x1095, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE  SFX("\x68\x44")  COLOR(LIGHTBLUE) "Hej, " QUICKTEXT_ENABLE  NAME  QUICKTEXT_DISABLE "!\n"
"Vakna!" COLOR(DEFAULT)  BOX_BREAK UNSKIPPABLE  COLOR(LIGHTBLUE) "Det" COLOR(RED) " Stora Dekuträdet " COLOR(LIGHTBLUE) "vill\n"
"tala med dig!\n"
QUICKTEXT_ENABLE  NAME ", stå upp!" QUICKTEXT_DISABLE  COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x1096, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE  SFX("\x68\x5F")  COLOR(LIGHTBLUE) "Hallå! " QUICKTEXT_ENABLE "Kom igen!" QUICKTEXT_DISABLE  COLOR(DEFAULT)  BOX_BREAK UNSKIPPABLE  COLOR(LIGHTBLUE) "Kan Hyrules öde verkligen vila\n"
"på en sådan lat pojke?" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x1097, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Att hoppa är inte trendigt just nu.\n"
"Själv så är jag besatt av att göra " COLOR(RED) "bakåtvolter" COLOR(DEFAULT) "!\n"
SHIFT("\x32") "Kan du också göra en?"
)

DEFINE_MESSAGE(0x1098, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  COLOR(LIGHTBLUE) "Det " COLOR(RED) "Stora Dekuträdet \n"
COLOR(LIGHTBLUE) "har kallat dig!\n"
"Så sätt igång och börja gå, på en gång!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x1099, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE  SHIFT("\x4B") "Navi...\n"
SHIFT("\x23") "Navi, vart är du?\n"
SHIFT("\x39") "Träd fram...."
)

DEFINE_MESSAGE(0x109A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Åh, " COLOR(LIGHTBLUE) "älvan Navi" COLOR(DEFAULT) "...\n"
"Lyssna till mina ord, orden \n"
"från det " COLOR(RED) "Stora Dekuträdet" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "Känner du av det?\n"
"Fientliga mörka vindar som\n"
"sveper in över detta rike..." BOX_BREAK UNSKIPPABLE "Ondskefulla krafter bäddar i detta nu\n"
"för att anfalla vårat\n"
"rike Hyrule..." BOX_BREAK UNSKIPPABLE "Under lång tid, har " COLOR(RED) "Kokiriskogen,\n" COLOR(DEFAULT)
"livets källa, tjänat som en \n"
"barriär för att avskräcka utomstående \n"
"samt upprätthålla ordningen i vår värld..." BOX_BREAK UNSKIPPABLE "Men...inför denna onda enorma\n"
"kraft, så är min egen kraft \n"
"ingenting..." BOX_BREAK UNSKIPPABLE "Det verkar som att tiden har kommit \n"
"för " COLOR(RED) "pojken utan älva " COLOR(DEFAULT) "att börja \n"
"sin resa..." BOX_BREAK UNSKIPPABLE "Ynglingen vars öde är att\n"
"leda Hyrule på en väg mot\n"
"sanning och rättvisa..." BOX_BREAK UNSKIPPABLE  COLOR(LIGHTBLUE) "Navi" COLOR(DEFAULT) "...gå nu! Finn vår unge\n"
"vän och vägled honom till mig..." BOX_BREAK UNSKIPPABLE "Jag har inte mycket tid kvar." BOX_BREAK UNSKIPPABLE "Flyg, Navi, flyg! Skogens öde\n"
"nej, hela världen, vilar\n"
"på dig!"
)

DEFINE_MESSAGE(0x109B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SFX("\x38\x82") "Snälla förlåt mig, herrn! Jag \n"
"ska aldrig göra om det! om du låter mig \n"
"gå, så lär jag dig någonting häftigt." BOX_BREAK UNSKIPPABLE  SFX("\x38\x80") "Du besegrar aldrig mina bröder\n"
"om du inte straffar dem \n"
"i rätt ordning." BOX_BREAK UNSKIPPABLE  SFX("\x38\x80") "Ordningen är..." TEXT_SPEED("\x05")  COLOR(LIGHTBLUE) "2  3  1" COLOR(DEFAULT)  TEXT_SPEED("\x00") "\n"
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Tjugotre är nummer ett!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE  SFX("\x38\x80") "Tycker du att jag är en förrädare?" EVENT
)

DEFINE_MESSAGE(0x109C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SFX("\x38\x82") "Hur kände du till vår hemlighet?!\n"
"Så " QUICKTEXT_ENABLE "irriterande!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE  SFX("\x38\x80") "Det stör mig så mycket att\n"
"jag ska avslöja Drottning Gohmas\n"
"hemlighet för dig!" BOX_BREAK UNSKIPPABLE  SFX("\x38\x80") "För att genomföra denna kupp emot\n"
"hennes höghet Drottning Gohma, slå\n"
"med ditt svärd " COLOR(RED) "medan hon är \n"
"bedövad" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "Åh, Drottis..." BOX_BREAK SFX("\x38\x80")  QUICKTEXT_ENABLE "Jag beklagar!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x109D, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
"I de vidsträckta skogarna i Hyrule..." BOX_BREAK_DELAYED("\x28")  SHIFT("\x16") "Har jag länge tjänat som\n"
SHIFT("\x33") "skogens väktare...\n"
SHIFT("\x0C") "Jag är känd som Dekuträdet..." FADE("\x46")
)

DEFINE_MESSAGE(0x109E, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
SHIFT("\x0B") "Den här skogens barn, de som\n"
SHIFT("\x19") "kallas för Kokiri, bor här med mig." BOX_BREAK_DELAYED("\x3C")  SHIFT("\x0B") "Varje Kokiri har sin egen\n"
SHIFT("\x38") "skyddsälva." FADE("\x3C")
)

DEFINE_MESSAGE(0x109F, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
SHIFT("\x0B") "Fast, där finns en pojke" COLOR(RED) " " COLOR(DEFAULT) "who\n"
SHIFT("\x20") "som inte har en älva..." FADE("\x3C")
)

DEFINE_MESSAGE(0x10A0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Jag ger mig! I gengäld, så kan jag sälja \n"
"din Dekunötter!\n"
COLOR(RED) "5 stycken   20 Rupees" COLOR(DEFAULT) " kostar de!" TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10A1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Utmärkt! Du vinner! I gengäld,\n"
"så kan jag sälja dig Dekukäppar!\n"
COLOR(RED) "1 styck   15 Rupees " COLOR(DEFAULT) "kostar de!" TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10A2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Utmärkt! Du vinner! I gengäld för\n"
"låter mig leva, så kan jag sälja dig en \n"
"Hjärtbit!\n"
COLOR(RED) "1 styck   10 Rupees " COLOR(DEFAULT) "kostar den!" TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10A3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x80")  QUICKTEXT_ENABLE "Låt mig komma med ett förslag!\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Okej\n"
"Nej tack" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x10A4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82")  QUICKTEXT_ENABLE "USCH!!" QUICKTEXT_DISABLE "\n"
"Då går jag väl hem då!"
)

DEFINE_MESSAGE(0x10A5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Inte tillräckligt med Rupees! \n"
"Kom tillbaka senare!"
)

DEFINE_MESSAGE(0x10A6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Du kan inte få den nu!\n"
"Kom tillbaka senare!"
)

DEFINE_MESSAGE(0x10A7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x80")  QUICKTEXT_ENABLE  SHIFT("\x2D") "Tack så väldigt mycket!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x10A8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag har väntat på dig,\n"
NAME "!" BOX_BREAK UNSKIPPABLE "Detta är den " COLOR(RED) "Heliga Skogsgläntan" COLOR(DEFAULT) ".\n"
"Det är" COLOR(RED) " " COLOR(DEFAULT) "min hemliga plats!\n"
"Jag känner som..." BOX_BREAK UNSKIPPABLE "Den här platsen kommer att \n"
"betyda väldigt mycket för oss båda en dag.\n"
"Det är så jag känner." BOX_BREAK UNSKIPPABLE "Om du spelar din Okarina här, så \n"
"kan du tala med andarna som bor här \n"
"i skogen." TEXTID("\x10\xA9")
)

DEFINE_MESSAGE(0x10A9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Kan du tänka dig att spela \n"
"på din Okarina med mig?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Gör det inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x10AA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Okej, försök att hänga med i\n"
"melodin jag spelar.\n"
"Är du redo?"
)

DEFINE_MESSAGE(0x10AB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Va?!\n"
"Så tråkigt!\n"
"Kom igen! Spela med!"
)

DEFINE_MESSAGE(0x10AC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SFX("\x68\x63")  SHIFT("\x36") "Bra! Bra!" BOX_BREAK UNSKIPPABLE "Glöm inte denna visan är du snäll!\n"
"Lovar du?" TEXTID("\x10\xAD")
)

DEFINE_MESSAGE(0x10AD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Då du vill höra min röst,\n"
"spela " COLOR(ADJUSTABLE) "Sarias Visa" COLOR(DEFAULT) ". Du kan prata \n"
"med mig när du vill..."
)

DEFINE_MESSAGE(0x10AE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tar du väl hand om \n"
"min Okarina?"
)

DEFINE_MESSAGE(0x10AF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SFX("\x38\x80") "Häftigt!\n"
"Du är grym!  Du satte\n"
"tre stycken mitt i prick!" BOX_BREAK UNSKIPPABLE  SFX("\x38\x80") "Jag måste ge en riktigt\n"
"fin present till en sådan fantastisk person!\n"
"Ta emot den här, är du snäll!" EVENT
)

DEFINE_MESSAGE(0x10B0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Mido borde veta något om\n"
"vart Sarias håller hus." BOX_BREAK "Jag tror att Mido sitter och tjurar \n"
"i något utav husen häromkring."
)

DEFINE_MESSAGE(0x10B1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x5A")  COLOR(LIGHTBLUE) "??\n"
COLOR(DEFAULT)  SHIFT("\x15")  COLOR(LIGHTBLUE) "Inget svar. Han sover." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x10B2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Cojiro?  Hur så?\n"
"I vanliga fall så kan bara en trevlig \n"
"grabb som jag tämja dig..." BOX_BREAK UNSKIPPABLE "Vilket betyder att..." BOX_BREAK UNSKIPPABLE  TEXT_SPEED("\x01") "Du... " TEXT_SPEED("\x00") "Du måste vara en trevlig grabb!\n"
QUICKTEXT_ENABLE "Så måste det vara!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Du måste vara det!!" QUICKTEXT_DISABLE "\n"
"Snälla Herr trevliga grabb! Snälla!" BOX_BREAK UNSKIPPABLE "Leverera de här sakerna till den " COLOR(RED) "gamla\n"
"haggan i brygdbutiken " COLOR(DEFAULT) "i Kakariko.\n"
"I byn där!" EVENT
)

DEFINE_MESSAGE(0x10B3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Den kommer att försvinna om du tar\n"
"för lång tid på dig, så se till att skynda!\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Oej\n"
"Jag kan inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x10B4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jaha, på så vis. " QUICKTEXT_ENABLE "Så det är så det ligger till!" QUICKTEXT_DISABLE "\n"
"Du är inte en trevlig grabb trots allt!!\n"
QUICKTEXT_ENABLE "Försvinn ur min åsyn!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x10B5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Saria ville träffa dig...\n"
"Har hon redan hittat dig?"
)

DEFINE_MESSAGE(0x10B6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Skynda dig, trevliga grabb!\n"
"Före den försvinner, leverera den\n"
"till den där gamla ragatan...."
)

DEFINE_MESSAGE(0x10B7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Den killen finns inte kvar här längre." BOX_BREAK UNSKIPPABLE "De som vandrar in i skogen \n"
"kommer att bli förlorade." BOX_BREAK UNSKIPPABLE "Alla blir till en Stalfos.\n"
"Precis alla, Stalfos.\n"
"Så, han är inte längre kvar här.\n"
"Endast hans såg är kvar. Hehehe." TEXTID("\x10\xB8")
)

DEFINE_MESSAGE(0x10B8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Den där medicinen är gjord på \n"
"svampar från skogen. Ge tillbaka den!\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x10B9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Heh heh heh.\n"
"Ska även du bli till... en?\n"
"Heh heh!"
)

DEFINE_MESSAGE(0x10BA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vi säljer sköldar, men inte svärd!" EVENT
)

DEFINE_MESSAGE(0x10BB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Så du kan " COLOR(ADJUSTABLE) "Saria's Visa" COLOR(DEFAULT) "! Vi borde\n"
"bli vänner! Här, ta den!"
)

DEFINE_MESSAGE(0x10BC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hej! Tycker du att mitt ansikte\n"
"ser medelmåttigt ut?\n"
"det ser inte tillräckligt ovanligt ut..."
)

DEFINE_MESSAGE(0x10BD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vi spelar tillsammans igen någon gång!"
)

DEFINE_MESSAGE(0x10BE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Följ efter i vår visa med \n"
"din Okarina. Vi leder dig."
)


DEFINE_MESSAGE(0x10BF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Det var en riktigt bra session.\n"
"Som ett tecken på vår vänskap, \n"
"så var snäll och ta emot denna."
)

DEFINE_MESSAGE(0x10C0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hej, du där borta!\n"
"Hohoo!" BOX_BREAK_DELAYED("\x28")  UNSKIPPABLE  NAME "...Trevligt att råkas\n"
"igen! Lyssna på det här!\n"
"Hohooo...." TEXTID("\x10\xC1")
)

DEFINE_MESSAGE(0x10C1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Efter att du har tagit dig genom den\n"
"Förlorade Skogen, så kommer du till den\n"
COLOR(ADJUSTABLE) "Heliga Skogsgläntan" COLOR(DEFAULT) "." BOX_BREAK "Det är en helig plats där\n"
"få någonsin har satt sin fot." BOX_BREAK "Shhhh...Vad är det?\n"
"Jag kan höra mystiska toner..." BOX_BREAK "Du borde lyssna till de tonerna\n"
"du med...\n"
"Hohoohoooooo!" EVENT
)

DEFINE_MESSAGE(0x10C2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vill du lyssna på vad jag hade att säga\n"
"igen?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x10C3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Om du är modig, så kommer\n"
"du att klara dig genom skogen\n"
"utan problem..." BOX_BREAK UNSKIPPABLE "följ bara dina öron och\n"
"lyssna till ljuden som kommer från\n"
"skogen! \n"
"Hoohoo!"
)

DEFINE_MESSAGE(0x10C4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hoo hoo!" BOX_BREAK_DELAYED("\x28")  UNSKIPPABLE "Lärde du dig en visa på din Okarina\n"
"från Saria?" BOX_BREAK UNSKIPPABLE "Den visan verkar besitta någon\n"
"mystisk kraft." BOX_BREAK UNSKIPPABLE "Det kan finnas andra \n"
"mystiska visor likt den här\n"
"som du kan lära dig i Hyrule." TEXTID("\x10\xC5")
)

DEFINE_MESSAGE(0x10C5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Om du håller upp din Okarina med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "\n"
"där en melodi är nödvändig, så kommer ett \n"
COLOR(RED) "musikstycke " COLOR(DEFAULT) "att framträda." BOX_BREAK "Jag föreslår att du spelar en\n"
"visa du kan." BOX_BREAK "Jag föreslår även att du spelar\n"
"ifall där inte visas något stycke. \n"
"Precis såhär:\n"
"Hoo hoo hoo hoo hoo hoo!" EVENT
)

DEFINE_MESSAGE(0x10C6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vill du lyssna på vad jag hade att\n"
"säga igen?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x10C7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Melodier som du har lärt dig \n"
"kommer att sparas på " COLOR(LIGHTBLUE) "Uppdrags-skärmen. \n"
COLOR(DEFAULT) "Du borde lägga\n"
"alla melodier på minnet."
)

DEFINE_MESSAGE(0x10C8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Jasså...den tiggaren! Jag förstår inte varför \n"
"han är så elak mot alla!" BOX_BREAK UNSKIPPABLE "Det han sa var ju sant dock." TEXTID("\x10\xC9")
)

DEFINE_MESSAGE(0x10C9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Skogen..märkliga saker har\n"
"hänt här den senaste tiden..." BOX_BREAK UNSKIPPABLE "Du måste vara redo för vad som helst.\n"
"Du bör hitta ett vapen!" TEXTID("\x10\x32")
)

DEFINE_MESSAGE(0x10CA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Okej! Du vinner! I gengäld,\n"
"så kan du få köpa " COLOR(RED) "Dekufrön" COLOR(DEFAULT) " utav mig!\n"
COLOR(RED) "30 stycken   40 Rupees" COLOR(DEFAULT) " kostar de!" TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10CB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Jag ger upp! Om du låter mig gå,\n"
"Så kan jag sälja dig en " COLOR(RED) "Dekusköld" COLOR(DEFAULT) "! Den kostar\n"
COLOR(RED) "50 Rupees" COLOR(DEFAULT) "!" TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10CC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Jag ger mig! Om du låter mig gå, så säljer jag \n"
"några " COLOR(RED) "Bomber" COLOR(DEFAULT) " till dig!\n"
COLOR(RED) "5 stycken   40 Rupees" COLOR(DEFAULT) " kostar de!" TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10CD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Sluta! Om du lämnar mig ifred, så \n"
"kan jag sälja " COLOR(RED) "Pilar" COLOR(DEFAULT) " till dig!\n"
COLOR(RED) "30 stycken   70 Rupees" COLOR(DEFAULT) " kostar de!" TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10CE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "All right! You win! If you spare \n"
"me, I will sell you a " COLOR(RED) "Red Potion" COLOR(DEFAULT) " \n"
"for " COLOR(RED) "40 Rupees" COLOR(DEFAULT) "!" TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10CF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Okej! Du vinner! Låt mig leva, så\n"
"kan du få köpa en " COLOR(ADJUSTABLE) "Grön Brygd" COLOR(DEFAULT) " utav mig för \n"
COLOR(RED) "40 Rupees" COLOR(DEFAULT) "!" TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10D0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Va?! Du har fått en älva?!\n"
"Vad säger du? Det Stora Dekuträdet\n"
"har på riktigt kallat på dig?" TEXTID("\x10\xD1")
)

DEFINE_MESSAGE(0x10D1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Vaaaaaaa?!" BOX_BREAK UNSKIPPABLE "Varför har han kallat på dig och inte \n"
"den store " COLOR(RED) "Mido" COLOR(DEFAULT) "?" BOX_BREAK UNSKIPPABLE "Det här var inte alls kul..." BOX_BREAK UNSKIPPABLE "Jag kan inte tro det!\n"
"Du är ju inte ens fullt utrustad\n"
"ännu!" BOX_BREAK UNSKIPPABLE "Hur tror du att du kan \n"
"hjälpa det Stora Dekuträdet utan\n"
"varken ett " COLOR(ADJUSTABLE) "svärd" COLOR(RED) " " COLOR(DEFAULT) "eller en " COLOR(LIGHTBLUE) "sköld" COLOR(RED) " " COLOR(DEFAULT) "redo?" BOX_BREAK "Vad? Du har rätt, jag har inte\n"
"min egen utrsustning redo, men..." TEXTID("\x10\x30")
)

DEFINE_MESSAGE(0x10D2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SHIFT("\x2D") "Eh, vad är det?!" BOX_BREAK UNSKIPPABLE "Åh, du har en " COLOR(LIGHTBLUE) "Deksköld" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "Och vad är DET?!" BOX_BREAK UNSKIPPABLE "Är det där " COLOR(ADJUSTABLE) "Kokirisvärdet" COLOR(DEFAULT) "?!" BOX_BREAK UNSKIPPABLE "VAD SJUTTON!!" TEXTID("\x10\xD3")
)

DEFINE_MESSAGE(0x10D3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Ptja, även om du har allt det där \n"
"så är en mes en mes, eller hur?" TEXTID("\x10\x34")
)

DEFINE_MESSAGE(0x10D4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Jag förlorade! Du kan nu få köpa en\n" COLOR(RED)
"Dekukäpp " COLOR(DEFAULT) "för " COLOR(RED) "15 Rupees" COLOR(DEFAULT) " utav mig." TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10D5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Jag förlorade! Du kan få köpa\n" COLOR(RED)
"Dekunötter " COLOR(DEFAULT) "om du lämnar mig ifred.\n"
COLOR(RED) "5 stycken   20 Rupees " COLOR(DEFAULT) "kostar de." TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10D6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Och dessutom..." BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x0D") "Jag ber om ursäkt att jag var elak emot honom." QUICKTEXT_DISABLE  BOX_BREAK SHIFT("\x45") "Berätta det för honom."
)

DEFINE_MESSAGE(0x10D7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hee hee hee!\n"
"Du tog dig hela vägen upp hit?\n"
"Du är en riktig man!" TEXTID("\x10\xD8")
)

DEFINE_MESSAGE(0x10D8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Titta! Är inte den här utsikten vacker?\n"
"Ändra din vy med hjälp utav " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) ",\n"
"så kan du se dig omkring i skogen\n"
"med " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x10D9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vad har du gjort med det Stora\n"
"Dekuträdet?"
)

DEFINE_MESSAGE(0x10DA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om du vill ta dig till den Förlorade \n"
"Skogen, så bör du utrusta\n"
"dig ordentligt!\n"
"Hee hee!"
)

DEFINE_MESSAGE(0x10DB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SFX("\x38\x82") "Alla mina Dekubuskbröder säger\n"
"att...\n"
"Du har ett fasansfullt ansikte!" BOX_BREAK SFX("\x38\x82") "Men var inte orolig! Vi kommer att belöna\n"
"dig med många " COLOR(RED) "Dekunötter" COLOR(DEFAULT) "." BOX_BREAK SFX("\x38\x82") "Vi ska även göra det möjligt\n"
"för dig att bära fler utav dem!" BOX_BREAK "Abrahadabra..." BOX_BREAK SFX("\x38\x80") "Simsalabim!!" EVENT
)

DEFINE_MESSAGE(0x10DC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Jag ger upp!" BOX_BREAK SFX("\x38\x80") "För att göra ditt äventyr lite lättare,\n"
"så kan jag göra det möjligt för dig att\n"
"bära fler " COLOR(RED) "Dekukäppar" COLOR(DEFAULT) "!\n"
"Men, det kommer att kosta dig " COLOR(RED) "40 Rupees" COLOR(DEFAULT) "!" TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10DD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Jag ger upp!" BOX_BREAK SFX("\x38\x80") "För att göra ditt äventyr lite lättare,\n"
"så kan jag göra det möjligt för dig att\n"
"plocka upp fler " COLOR(RED) "Dekunötter" COLOR(DEFAULT) "!\n"
"Men, det kommer att kosta dig " COLOR(RED) "40 Rupees" COLOR(DEFAULT) "!" TEXTID("\x10\xA3")
)

DEFINE_MESSAGE(0x10DE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x38\x82") "Jag ber om ursäkt!\n"
"Du kan inte köpa det just nu!"
)

DEFINE_MESSAGE(0x10DF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Den killen är inte här längre." BOX_BREAK "De som vandrar in i skogen \n"
"kommer att bli förlorade." BOX_BREAK "Alla blir till en Stalfos.\n"
"Precis alla, Stalfos.\n"
"Så, han är inte här längre."
)

DEFINE_MESSAGE(0x2000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tack så mycket för \n"
"häromdan... Jag har inte ens bett\n"
"om ditt namn än..." BOX_BREAK UNSKIPPABLE  TEXT_SPEED("\x02") "........" TEXT_SPEED("\x00")  BOX_BREAK UNSKIPPABLE "Jasså?\n"
NAME "!" BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE "Då var det som jag trodde!" QUICKTEXT_DISABLE "\n"
"Du är den där älvpojken från\n"
"skogen! Det var ju många år sedan sist!\n"
"Kommer du ihåg mig?" BOX_BREAK UNSKIPPABLE "Gör du? Jag visste att det var du\n"
"därför att Epona kände igen dig!" BOX_BREAK UNSKIPPABLE "Åh, jag måste berätta för dig om\n"
COLOR(RED) "Herr. Ingo" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "Han var orolig för att den Onda Kungen\n"
"skulle få reda på att Epona\n"
"hade blivit förflyttad...Det gjorde honom verkligen\n"
"upprörd!" BOX_BREAK UNSKIPPABLE "Men rätt som det var en dag, så\n"
"blev han sitt vanliga " COLOR(RED) "snälla\n"
"jag igen" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Nu kommer min pappa tillbaka...Jag\n"
"kan knappt tro det, med frid är\n"
"på väg tillbaka till ranchen!" BOX_BREAK UNSKIPPABLE "Allt är tack vare dig! Jag\n"
"är skyldig dig så mycket!" BOX_BREAK UNSKIPPABLE "Tack! Tack,\n"
NAME "!"
)

DEFINE_MESSAGE(0x2001, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hur är det med " COLOR(RED) "Epona " COLOR(DEFAULT) "?" BOX_BREAK "Om du spelar " COLOR(RED) "Eponas Visa " COLOR(DEFAULT) "med\n"
"din Okarina, kommer hon säkerligen\n"
"att komma till dig." BOX_BREAK "Var snäll och besök ranchen\n"
"närhelst du så än önskar " COLOR(RED) "träna med \n"
COLOR(DEFAULT) "Epona!"
)

DEFINE_MESSAGE(0x2002, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Epona" COLOR(RED) " " COLOR(DEFAULT) "ser glad ut!\n"
"Det verkar som att du klarade av\n"
"att tämja henne du med!" TEXTID("\x20\x03")
)

DEFINE_MESSAGE(0x2003, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vad sägs om att testa dina färdigheter med\n"
"Epona på en " COLOR(RED) "hinderbana" COLOR(DEFAULT) "?" BOX_BREAK "Jag tar tiden åt dig för " COLOR(RED) "två varv" COLOR(DEFAULT) ".\n"
"Det är en utmaning. Om du missar\n"
"att hoppa över ett staket i rätt \n"
"ordning, så misslyckas du." BOX_BREAK "Vad säger du?\n"
"Vill du göra ett försök? \n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Gör ett försök\n"
"Undviker det" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2004, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ptja, din tid blev " COLOR(RED)  RACE_TIME  COLOR(DEFAULT) ".\n"
"Du måste träna hårdare!" BOX_BREAK "Kom ihåg, du behöver inte \n"
"accelerera för att hoppa över \n"
"små staket, men du måste springa\n"
"fort för att hoppa över höga staket!"
)

DEFINE_MESSAGE(0x2005, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
NAME "...kan du höra mig?\n"
"Det är jag, Zelda..." FADE("\x3C")
)

DEFINE_MESSAGE(0x2006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x28\xDF") "Muuuuuuuu!" BOX_BREAK "Vilken vacker visa...\n"
"den påminner mig om betesmarker..." BOX_BREAK "Den visan får mig att må så bra,\n"
"så att jag kan producera mycket mjölk!" EVENT
)

DEFINE_MESSAGE(0x2007, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ta lite utav min uppfriskande \n"
"näringsfyllda mjölk!" EVENT
)

DEFINE_MESSAGE(0x2008, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
NAME ", då du håller\n"
"denna Okarina i din hand..." BOX_BREAK_DELAYED("\x3C") "Så kommer jag inte att finnas här mer..." BOX_BREAK_DELAYED("\x3C") "Jag ville vänta på dig, men jag\n"
"kunde inte ödsla mer tid..." BOX_BREAK_DELAYED("\x3C") "Jag kunde i alla fall lämna dig \n"
"Okarinan och " COLOR(LIGHTBLUE) "denna melodi" COLOR(DEFAULT) "..." FADE("\x3C")
)

DEFINE_MESSAGE(0x2009, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE "Så, " NAME ".\n"
"Spela denna melodi framför\n"
"altaret i Tidens Tempel.\n"
"Du måste beskydda Trekraften!"
)

DEFINE_MESSAGE(0x200A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Bah-ha-ha-hah! Tror du att \n"
"du är förklädd, Herr Hjälte?" BOX_BREAK UNSKIPPABLE  SHIFT("\x57") "Åhå?" BOX_BREAK UNSKIPPABLE "Är det en \"Kee...något...\"\n"
"figurmask? Jag har hört att han\n"
"är populär nu för tiden?" BOX_BREAK UNSKIPPABLE "Han är min pojks favorit. Den där\n"
"\"Kee...något...\" masken...\n"
"Om du inte har något emot det..." TEXTID("\x20\x0B")
)

DEFINE_MESSAGE(0x200B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Skulle du möjligtvis kunna sälja den?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Absolut inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x200C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag ger inte upp! Jag har massvis med\n"
"tålamod. Det måste man ha i detta \n"
"yrket!  Hah hah hah!" EVENT
)

DEFINE_MESSAGE(0x200D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Mmmm...mummel...mummel...\n"
"Va? Ja, Jag är vaken!" BOX_BREAK UNSKIPPABLE "Va?" BOX_BREAK UNSKIPPABLE "Hej, det är ju du! Välkommen!" BOX_BREAK UNSKIPPABLE "Awww... Det var lite väl hårt!\n"
"Malon gapade på mig väldigt\n"
"länge!" BOX_BREAK UNSKIPPABLE "Du tog hand om oss, så jag kan med \n"
"stolthet ge dig denna " COLOR(RED) "mjölk" COLOR(DEFAULT) "! Du kan \n"
"behålla flaskan för dig själv."
)

DEFINE_MESSAGE(0x200E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
COLOR(RED) "Vägen är stängd " COLOR(DEFAULT) "bortom denna\n"
"punkt!\n"
"Kan du inte läsa skylten där \n"
"borta?" BOX_BREAK "Eh? Åh, jag förstår. du är bara ett barn\n"
"och kan inte läsa än. \n"
"Ha ha ha!"
)

DEFINE_MESSAGE(0x200F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det vill jag inte!"
)

DEFINE_MESSAGE(0x2010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Oh, det här...\n"
"Det här är säkerligen Prinsessan Zeldas \n"
"handstil! Nåväl, få se då...\n"
"Hmmm... Okej..." BOX_BREAK UNSKIPPABLE  SHIFT("\x06") "\"" COLOR(PURPLE) "Det här är " NAME "...\n"
COLOR(DEFAULT)  SHIFT("\x06")  COLOR(PURPLE) "Han håller på att rädda\n"
COLOR(DEFAULT)  SHIFT("\x06")  COLOR(PURPLE) "Hyrule." COLOR(DEFAULT) " på min beställning.\"" BOX_BREAK UNSKIPPABLE "Wah ha ha ha hah!\n"
"Vad är det här för lustigt spratt våran lilla\n"
"Prinsessa försöker spela?!" BOX_BREAK UNSKIPPABLE "Ja, ja, okej då. Du får gå\n"
"då... Men var bara försiktig, Herr Hjälte!\n"
TEXT_SPEED("\x01")  QUICKTEXT_ENABLE "Wah" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "hah" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "ha" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "ha" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "hah!" QUICKTEXT_DISABLE  TEXT_SPEED("\x00")  EVENT
)

DEFINE_MESSAGE(0x2011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, Herr Hjälte!\n"
"Tack för allt ditt hårda arbete!\n"
TEXT_SPEED("\x01")  QUICKTEXT_ENABLE "Wah" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "ha" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "ha" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "hah" QUICKTEXT_DISABLE  TEXT_SPEED("\x00") "!!"
)

DEFINE_MESSAGE(0x2012, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Wow! Suveränt!\n"
"Din tid var " COLOR(RED)  RACE_TIME  COLOR(DEFAULT) "!\n"
"Du och Epona är ett jättebra\n"
"team!"
)

DEFINE_MESSAGE(0x2013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åj, det var ju synd.\n"
"Om du hade något att sätta det i,\n"
"så skulle jag  kunna ge dig lite..." EVENT
)

DEFINE_MESSAGE(0x2014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Mitt namn, är " COLOR(RED) "Ingo" COLOR(DEFAULT) "--Herr Ingo för dig.\n"
"Jag tar hand om de här hästarna.\n"
"Du är i vägen, så stick,\n"
"din unge!"
)

DEFINE_MESSAGE(0x2015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hördu förresten, Hjälten..." BOX_BREAK UNSKIPPABLE "Om du är påväg upp för \n"
"Döda Berget så borde du ta med\n"
"dig en " COLOR(LIGHTBLUE) "ordentlig sköld" COLOR(DEFAULT) "! Det är en aktiv\n"
"vulkan, trots allt!" BOX_BREAK UNSKIPPABLE "Om du återvänder till Hyrule Slottsstad\n"
"Marknad, så borde du kolla\n"
"in Basaren. De säljer skölden\n"
"du behöver där." BOX_BREAK UNSKIPPABLE "Säg bara att jag skickade dig,\n"
"så borde du få ett special\n"
"erbjudande!" BOX_BREAK UNSKIPPABLE "Men om du tror att du klarar dig sådär\n"
"så strunta i det." BOX_BREAK UNSKIPPABLE "Och du? Jag skulle vilja begära dig\n"
"en tjänst. Jag förväntar mig inte att du\n"
"gör det som tack för det goda tipset jag\n"
"gav dig! Jag bara frågar sådär annars!" BOX_BREAK UNSKIPPABLE "Har du någonsin varit till " COLOR(RED) "Glada\n"
"Mask Butiken" COLOR(DEFAULT) " som nyligen öppnade\n"
"i Hyrule Slottsstads Marknad?\n"
"Alla pratar om den!" BOX_BREAK UNSKIPPABLE "Min lille grabb näggar mig ständigt\n"
"angående någon popular mask, men jag har inte\n"
"riktigt tid att åka dit..." BOX_BREAK UNSKIPPABLE "Så, skulle du kunna skaffa den\n"
"där masken åt mig nästa gång du har vägarna\n"
"förbi Marknaden? Om du inte känner för det\n"
"så är det helt lungt, men..." BOX_BREAK UNSKIPPABLE "Nåväl, jag har inget val, det här\n"
"är mitt jobb..." BOX_BREAK UNSKIPPABLE  SHIFT("\x4B") "...suck..." EVENT
)

DEFINE_MESSAGE(0x2016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag önskar att jag kunde besöka " COLOR(RED) "mask\n"
"butiken " COLOR(DEFAULT) "inne i staden för att köpa\n"
"en present åt min grabb..." BOX_BREAK SHIFT("\x4B") "...suck..."
)

DEFINE_MESSAGE(0x2017, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Åh nej... Han andas inte..."
)

DEFINE_MESSAGE(0x2018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
NAME "!?"
)

DEFINE_MESSAGE(0x2019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x29") "Arrrrgh!" QUICKTEXT_DISABLE " Hon lyckades fly!"
)

DEFINE_MESSAGE(0x201A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x32") "Du där! \n"
SHIFT("\x3C")  QUICKTEXT_ENABLE "Lille grabb!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x201B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x3A")  TEXT_SPEED("\x0A")  QUICKTEXT_ENABLE "Heh" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "heh" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "heh" QUICKTEXT_DISABLE "..." TEXT_SPEED("\x00") "\n"
SHIFT("\x1C") "Du tror du kan ta dig an mig?\n"
SHIFT("\x3E") "Väldigt lustigt!\n"
SHIFT("\x2A") "Jag gillar din attityd!"
)

DEFINE_MESSAGE(0x201C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x2B") "Så patetiskt." QUICKTEXT_DISABLE "\n"
SHIFT("\x14") "Om du bara visste vem du har\n"
SHIFT("\x39") "att göra med!"
)

DEFINE_MESSAGE(0x201D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x34") "Jag... är " COLOR(RED) "Ganondorf" COLOR(DEFAULT) "!\n"
QUICKTEXT_ENABLE  SHIFT("\x0A") "Och snart, kommer jag härska över världen!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x201E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x0D") "Du måste ha sett den vita hästen\n"
SHIFT("\x12") "som nyss galloperade förbi...\n"
SHIFT("\x23") "I vilken riktning red den?!\n"
SHIFT("\x3D")  QUICKTEXT_ENABLE "Svara mig!!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x201F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tsk tsk...När din tid är ute,\n"
"så sparkar jag ut dig."
)

DEFINE_MESSAGE(0x2020, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Min grabb kommer bli så glad när han får\n"
"den här! Du är verkligen en hjälte!\n"
"Wha ha ha hah!" EVENT
)

DEFINE_MESSAGE(0x2021, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SFX("\x48\x07") "Du sålde 10-Rupee masken för\n"
COLOR(RED) "15 Rupees" COLOR(DEFAULT) ". Du tjänade in lite\n"checkouddd
"provision." BOX_BREAK UNSKIPPABLE "Vi åker tillbaka till Mask Butiken och\n"
"betalar tillbaka ursprungliga priset\n"
"på" COLOR(RED) "10 Rupees" COLOR(DEFAULT) "." EVENT
)

DEFINE_MESSAGE(0x2022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Småbarn får inte åka med på den\n"
"\"" COLOR(RED) "Hjärt-Bultande Gravgrävar\n"
"Turnén" COLOR(DEFAULT) "\" som beskrivs på skylten." BOX_BREAK "Eftersom jag inte får det, försöker jag\n"
"bara imitera Gravskötaren Dampé\n"
"hela dagen." BOX_BREAK "Fast med mitt gulliga ansikte är jag\n"
"inte hjärt-bultande alls, eller hur?"
)

DEFINE_MESSAGE(0x2023, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Gyaah!\n" QUICKTEXT_DISABLE "Det är Gravskötaren Dampé!"
BOX_BREAK SHIFT("\x57") "???" BOX_BREAK "Ah, det är bara en mask. Jag känner en \n"
"annan slags skräck från den där\n"
"masken än från Dampé..." BOX_BREAK "Skulle du kunna ge mig den där masken?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Åkej\n"
"Inte en chans" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2024, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag har faktiskt lite pengar,\n"
"vet du."
)

DEFINE_MESSAGE(0x2025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hallå! Tiden är ute, unge man!\n"
"Du betalade bara 10 Rupees!\n"
"Du har lekt runt länge nog!" EVENT
)

DEFINE_MESSAGE(0x2026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Med den här masken kommer jag\n"
"vara precis som Dampé! \n"
"Här får du pengarna!"
)

DEFINE_MESSAGE(0x2027, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SFX("\x48\x07") "Sålde du 30-Rupee masken till en\n"
"unge för fullt pris?! \n"
"Och han hade inget emot att betala alls!" BOX_BREAK UNSKIPPABLE "Vi åker tillbaka till mask butiken\n"
"och betalar " COLOR(RED) "30 Rupees " COLOR(DEFAULT) "för masken. \n"
"Du kan få en ny mask\n"
"mask model också."
)

DEFINE_MESSAGE(0x2028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag skall gräva och gräva! \n"
"Precis som Dampé!!"
)

DEFINE_MESSAGE(0x2029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I forna tider, hörde jag att det fanns\n"
"många vildkaniner i Hyrule, ute på\n"
"landet. Dock, inte längre, på grund\n"
"av att jakten gått till överdrift."
BOX_BREAK "Jag skulle vilja vara en hare...\n"
"Lyssna på vinden med långa öron,\n"
"skutta över marken med starka ben\n"
BOX_BREAK "Även om bara kunde låtsas."
)

DEFINE_MESSAGE(0x202A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är säker på att man med de öronen\n"
"skulle kunna höra de där rösterna... \n"
"Åh, dessa är äkta kaninöron från\n"
"djuret utifrån legenderna!" TEXTID("\x20\x2B")
)

DEFINE_MESSAGE(0x202B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag bryr mig inte om hur mycket du\n"
"vill ha! Snälla, låt mig köpa dem!\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Åkej\n"
"Inte en chans" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x202C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det var verkligen inte vad jag\n"
"ville höra!"
)

DEFINE_MESSAGE(0x202D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Min livslånga dröm! Att återvända till livet\n"
"i naturen! Äntligen... skådespelaren, \n"
"scenen och rekvisitan har förenats!" EVENT
)

DEFINE_MESSAGE(0x202E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SFX("\x48\x07") "Masken är värd 50 Rupees, men han\n"
"gav dig en galen summa pengar för\n"
"den--mer pengar än du ens kan\n"
"räkna!" BOX_BREAK UNSKIPPABLE "Återvänd till Mask Butiken och\n"
"betala tillbaka " COLOR(RED) "50 Rupees " COLOR(DEFAULT) "av de\n"
"här pengarna."
)

DEFINE_MESSAGE(0x202F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x0E") "Så, du tror alltså att du kan skydda\n"
SHIFT("\x36") "dem från mig...\n"
SHIFT("\x28") "Du besitter mod, unge."
)

DEFINE_MESSAGE(0x2030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Det finns folk i Kakariko som\n"
"påstår att jag fuskade till mig\n"
"ranchen av Talon, men..." BOX_BREAK UNSKIPPABLE  SHIFT("\x2D") "Det är " QUICKTEXT_ENABLE "skrattretande!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Den där Talon var en vekling!\n"
"Jag, den hårt arbetande " COLOR(RED) "Ingo" COLOR(DEFAULT) ", fyllde det\n"
"här stället med så mycket energi!" BOX_BREAK UNSKIPPABLE "Jag tolererar inte att främlingar\n"
"som du talar illa om mig!" BOX_BREAK UNSKIPPABLE "Lyssna här. Den " COLOR(RED) "store Ganondorf\n"
COLOR(DEFAULT) "såg min uppenbara talang och\n"
"gav mig ranchen!" BOX_BREAK UNSKIPPABLE "Jag skall avla upp en fager häst och\n"
"vinna mitt erkännande från den store \n"
"Ganondorf!" BOX_BREAK UNSKIPPABLE "Säg mig, unge man, vill du rida\n"
"en av mina fina hästar?" TEXTID("\x20\x31")
)

DEFINE_MESSAGE(0x2031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ge mig " COLOR(RED) "10 Rupees " COLOR(DEFAULT) "så får du\n"
"rida.\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Rid\n"
"Rid inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åkej då, försvinn\n"
"din lilla tölp!"
)

DEFINE_MESSAGE(0x2033, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du har inte tillräckligt!\n"
"Spara växelpengarna och\n"
"kom tillbaka senare!"
)

DEFINE_MESSAGE(0x2034, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vill du höra om hur man rider?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Lyssna\n"
"Lyssna inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2035, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Närma dig hästen försiktigt och\n"
"stå vid dess sida. Tryck " COLOR(BLUE) "[A]" COLOR(DEFAULT) " för \n"
"att bestiga hästen." BOX_BREAK "Använd " COLOR(LIGHTBLUE) "[Styr-spak] " COLOR(DEFAULT) "för att sätta den i rörelse. \n"
"Så fort den börjar springa, tryck\n"
COLOR(BLUE) "[A]" COLOR(DEFAULT) " för att ge den en smisk. \n"
"Då ökar den farten!" BOX_BREAK "Vill du hoppa över ett hinder\n"
"så måste du accelerera och träffa\n"
"hindret rakt på!" BOX_BREAK "Försöker duy hoppa över hindret\n"
"snett blir hästen missnöjd och\n"
"vägrar hoppa." BOX_BREAK "Efter att hästen har stannat helt\n"
"tryck " COLOR(BLUE) "[A]" COLOR(DEFAULT) " för att stiga \n"
"av. Nu så, ha det så roligt!" EVENT
)

DEFINE_MESSAGE(0x2036, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om du använder " COLOR(LIGHTBLUE) "[Z] Inriktning" COLOR(DEFAULT) ", kan du\n"
"tala till mig från uppe på hästryggen." BOX_BREAK "Är du redo att åka hem\n"
"så tidigt?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Nej, jag wvill rida mer.\n"
"Ja, jag är färdig." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"När du vill kliva av, stanna \n"
"och tryck " COLOR(BLUE) "[A]" COLOR(DEFAULT) "." BOX_BREAK "Hörru unge man!\n"
"Känner jag dig? Jag fick just en\n"
"känsla att jag har sett dig\n"
"någonstans tidigare..." TEXTID("\x20\x36")
)

DEFINE_MESSAGE(0x2038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du börjar bli bättre!\n"
"Hur skulle det vara med en liten kapplöpning?\n"
"Ett varv runt korrallen med\n"
"den där hästen." BOX_BREAK "Vi kan ju satsa lite pengar, kanske\n"
COLOR(RED) "50 Rupees" COLOR(DEFAULT) "?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Gör det\n"
"Gör det inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey hey... Vad är problemet?\n"
"Har du inte ens 50 Rupees?!\n"
"Jag vill inte tävla med någon\n"
"som är så fattig!"
)

DEFINE_MESSAGE(0x203A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SHIFT("\x39") "F-" QUICKTEXT_ENABLE "fanken då!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Om den store Ganondorf fick höra\n"
"om denna förödmjukelse...\n"
"Hörru, du!!  Hur skulle det vara\n"
"med en till kapplöpning!  Om du vinner..." BOX_BREAK UNSKIPPABLE "Så får du...behålla hästen!!" EVENT
)

DEFINE_MESSAGE(0x203B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Vad är grejen med den där hästen?!\n"
"Är det där " COLOR(RED) "Epona" COLOR(DEFAULT) "?" BOX_BREAK UNSKIPPABLE "Hur lyckades du tämja den där vilda\n"
"hästen rakt framför näsan på mig?!" BOX_BREAK UNSKIPPABLE "Jag som skulle visa upp den där\n"
"hästen till den store Ganondorf... Men så satsade\n"
"jag den på tävlingen och förlorade! Fan också!" EVENT
)

DEFINE_MESSAGE(0x203C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x36") "Hah ha hah!" BOX_BREAK UNSKIPPABLE "Som jag låvade, du kan ta\n"
"hästskrället..." BOX_BREAK UNSKIPPABLE  SHIFT("\x0A") "Emellertid..." BOX_BREAK UNSKIPPABLE "Men du kan aldrig ta dig ut från ranchen!" EVENT
)

DEFINE_MESSAGE(0x203D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hee hee hee... Så synd för dig!\n"
"Jag får dina 50 Rupees." EVENT
)

DEFINE_MESSAGE(0x203E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Wah ha hah!\n"
"Du är bara en unge, iallafall!\n"
"Nåväl, kom tillbaka när du vill så\n"
"kan vi ha mera kul..."
)

DEFINE_MESSAGE(0x203F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Vad i? Vad hänger du här för?\n"
"Din lilla skummis!" BOX_BREAK UNSKIPPABLE "Jag är " COLOR(RED) "Ingo " COLOR(DEFAULT) " och jag tar hand om ranchen." BOX_BREAK UNSKIPPABLE "Jag har jobbat vid den här ranchen\n"
"en väldigt lång tid, under den\n"
"där lata uslingen, Talon." BOX_BREAK UNSKIPPABLE "Idag, till exempel, är han helt försvunnen,\n"
"han skulle åka på en leverans men\n"
"har ännu inte återvänt!" BOX_BREAK UNSKIPPABLE "Så det är jag som gör allt riktigt arbet\n"
"på det här stället." TEXTID("\x20\x40")
)

DEFINE_MESSAGE(0x2040, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Nåväl...Det är tufft att vara\n"
"en arbetande man."
)

DEFINE_MESSAGE(0x2041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Du, dina kläder! De är...\n"
"annorlunda...\n"
"Du är inte här ifrån närheten, \n"
"eller hur?" BOX_BREAK UNSKIPPABLE  TEXT_SPEED("\x02") "........." TEXT_SPEED("\x00") "........" BOX_BREAK UNSKIPPABLE "Ååh... Du är en älvpojke från\n"
"skogen! Mitt namn är " COLOR(RED) "Malon" COLOR(DEFAULT) "!\n"
"Min pappa äger Lon Lon Ranch!" TEXTID("\x20\x42")
)

DEFINE_MESSAGE(0x2042, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Pappa gick till slottet för att leverera\n"
"mjölk, men han har inte kommit\n"
"tillbaka ännu..."
)

DEFINE_MESSAGE(0x2043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Är du påväg till slottet,\n"
"älvpojken?\n"
"Skulle du ha tid att leta efter " COLOR(RED) "pappa" COLOR(DEFAULT) "?" BOX_BREAK UNSKIPPABLE  SFX("\x68\x6D") "Han måste ha somnat\n"
"någonstans i närheten av slottet. \n"
"Att en vuxen skulle göra nå't sånt!\n"
"Tee hee!" BOX_BREAK UNSKIPPABLE "Förresten, om du tänker leta efter honom, så\n"
"ger jag dig den här." BOX_BREAK UNSKIPPABLE "Jag har ruvat på det här\n"
"ägget väldigt varsamt...\n"
"Tee hee!" EVENT
)

DEFINE_MESSAGE(0x2044, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Sätt ägget på " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att inkubera det.\n"
"Hee hee!" BOX_BREAK "Min pappa är väldigt besvärlig\n"
"för att vara vuxen, eller hur?!\n"
"Hee hee!"
)

DEFINE_MESSAGE(0x2045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Jag kan inte tro, att jag, den store\n"
COLOR(RED) "Ingo" COLOR(DEFAULT) ", arbetar på den här eländiga\n"
"ranchen!" BOX_BREAK UNSKIPPABLE "Eftersom ägaren är så lat, är\n"
"det alltid jag som måste göra\n"
"allt jobb på det här stället!" TEXTID("\x20\x46")
)

DEFINE_MESSAGE(0x2046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag, den hårt arbetande " COLOR(RED) "Ingo" COLOR(DEFAULT) ", borde få\n"
"styra och bestämma här, inte den där\n"
"lata slöfocken Talon!"
)

DEFINE_MESSAGE(0x2047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Åj, det är älvpojken igen!" BOX_BREAK UNSKIPPABLE "Jag hörde att du hittade min pappa!\n"
"Vad tyckte du om slottet? Fick\n"
"du se Prinsessan? Hee hee!" BOX_BREAK UNSKIPPABLE  SFX("\x68\x6D") "Pappa fick väldigt bråttom hem efter\n"
"att du hittade honom. Hee hee!" BOX_BREAK UNSKIPPABLE "Förresten, jag måste introducera dig\n"
"till min bästis, älvpojken!" BOX_BREAK UNSKIPPABLE "Hon är den här hästen. Hennes namn är\n"
COLOR(RED) "Epona" COLOR(DEFAULT) ". Är hon inte söt?"
)

DEFINE_MESSAGE(0x2048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det verkar som att Epona är lite \n"
"rädd för dig, älvpojken..."
)

DEFINE_MESSAGE(0x2049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Min mamma skrev den här sången.  \n"
"Är den inte vacker? Vi sjunger tillsammans."
)

DEFINE_MESSAGE(0x204A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, Epona!  Hon har blivit förtjust i\n"
"dig, älvpojken!"
)

DEFINE_MESSAGE(0x204B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
TEXT_SPEED("\x02") "Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z" TEXT_SPEED("\x00") "..."
)

DEFINE_MESSAGE(0x204C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åj...en besökare!\n"
"Det är länge sedan vi haft nå't\n"
"besök häromkring...\n"
"Var kom du ifrån?" BOX_BREAK "Efter att Ganondorf anlänt, folk i\n"
"Slottsstaden har försvunnit, områden\n"
"har blivit förstörda och monster\n"
"vandrar runt överallt." BOX_BREAK "Herr Ingo använder bara ranchen\n"
"för att vinna Ganondorfs gunst..." BOX_BREAK "Alla verkar hålla på bli onda..." BOX_BREAK "Men pappa...\n"
"Han blev utsparkad från ranchen\n"
"av Herr Ingo..." BOX_BREAK "Om jag inte lyder, så behandlar Herr Ingo\n"
"hästarna så illa..." BOX_BREAK "Så...\n"
"Det finns inget jag kan göra..."
)

DEFINE_MESSAGE(0x204D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag kan slå vad om vad som helst\n"
"att ingen är snabbare än mig nu!\n"
"Men jag vet inte om jag borde\n"
"vara glad eller ledsen...."
)

DEFINE_MESSAGE(0x204E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
TEXT_SPEED("\x02") "Z Z Z Z Z Z Z Z Z Z Z Z Z" TEXT_SPEED("\x00") "...\n"
"Få- Få tyst på den där sången...Jag...Jag...\n"
"Mummel... mummel..."
)

DEFINE_MESSAGE(0x204F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Ta en god titt på det där\n"
"berget. Det där är " COLOR(RED) "Döda Bergen" COLOR(DEFAULT) ",\n"
"Goron-folkets hem. De besitter\n"
"Eldens Själasten."
)

DEFINE_MESSAGE(0x2050, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Snälla håll det hemligt från Herr Ingo\n"
"att jag sjunger den här sången..."
)

DEFINE_MESSAGE(0x2051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Du...\n"
"Kan du min " COLOR(RED) "mammas sång" COLOR(DEFAULT) "?" BOX_BREAK UNSKIPPABLE "Alla gillade verkligen den sången...\n"
"Min pappa... Till och med Herr Ingo..." BOX_BREAK UNSKIPPABLE "Men... allt eftersom Ganondorf dök upp\n"
"har Herr Ingo ändrats helt." BOX_BREAK UNSKIPPABLE "Bara när jag sjunger den sången,\n"
"kan jag minnas de gamla goda tiderna. Och..." TEXTID("\x20\x52")
)

DEFINE_MESSAGE(0x2052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
COLOR(RED) "Epona" COLOR(DEFAULT) " gillade verkligen den sången...\n"
"Hon ville inte lyda någon annan än mig...\n"
"Hon gav till och med Herr Ingo problem..." BOX_BREAK "Hee hee hee!"
)

DEFINE_MESSAGE(0x2053, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Statyns enögda blick skär \n"
"in i ditt sinne..."
)

DEFINE_MESSAGE(0x2054, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Som svar på masken du bär talar den\n"
"underliga sten statyn till dig... \n"
BOX_BREAK "Jag har hört detta..."
)

DEFINE_MESSAGE(0x2055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag tänker vända till ett nytt blad och\n"
"jobba riktigt hårt från och med nu."
)

DEFINE_MESSAGE(0x2056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Herr Ingo... Han måste ha blivit \n"
"frestad av onda krafter.\n"
"Han är egentligen inte någon\n"
"ond person alls..."
)

DEFINE_MESSAGE(0x2057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Z Z Z Z Z Z Z Z...\n"
"Mummel... Det är inte lätt att\n"
"vara en arbetande karl..."
)

DEFINE_MESSAGE(0x2058, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det har gått en stund nu...\n"
"Vill du tävla?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om du ändrar dig, kom\n"
"tillbaka när du vill!"
)

DEFINE_MESSAGE(0x205A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åkej då! Försvinn,\n"
"din lilla tölp!" EVENT
)

DEFINE_MESSAGE(0x205B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Heh heh... Är du arg för att\n"
"du förlorade? Om du är så upprörd,\n"
"vad säger du om ett nytt race?" BOX_BREAK "Satsa " COLOR(RED) "50 Rupees " COLOR(DEFAULT) "och tävla igen?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Tävla\n"
"Tävla inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x205C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tack så mycket. Heh heh!" EVENT
)

DEFINE_MESSAGE(0x205D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om jag ger dig mera gratis blir\n"
"Ingo arg på mig. Så jag borde\n"
"nog sälja till dig för det\n"
"normala priset."
)

DEFINE_MESSAGE(0x205E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vill du köpa mjölk för " COLOR(RED) "30 Rupees" COLOR(DEFAULT) "?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x205F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hej där, hur mår du?\n"
"Jag är Ingo. Jag känner mig så hedrad\n"
"att få jobba här."
)

DEFINE_MESSAGE(0x2060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "Du modiga gosse...\n"
"Vi måste beskydda detta vackra\n"
"landet Hyrule!"
)

DEFINE_MESSAGE(0x2061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Åh, vilken söt okarina!\n"
"Tänker du spela den här sången\n"
"med den där okarina?"
)

DEFINE_MESSAGE(0x2062, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Vid foten av de Döda Bergen finner\n"
"du min hemby, " COLOR(RED) "Kakariko" COLOR(DEFAULT) ".\n"
"Det är där jag föddes och\n"
"växte upp." BOX_BREAK UNSKIPPABLE "Du borde tala till några av\n"
"byns invånare innan du bestiger\n"
"de Döda Bergen."
)

DEFINE_MESSAGE(0x2063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Melodin jag nyss lärde dig har\n"
"mysteriska krafter. Endast medlemmar\n"
"av den Kungliga Familjens har tillåtelse\n"
"att lära sig den." BOX_BREAK UNSKIPPABLE "Kom nu ihåg, den hjälper dig att bevisa\n"
"din förbindelse med Kungafamiljen.\n"
BOX_BREAK UNSKIPPABLE "Prinsessan väntar på att du\n"
"skall återvända till slottet med\n"
"stenarna. Nåmen då så. Vi räknar\n"
"med dig, " NAME "!"
)

DEFINE_MESSAGE(0x2064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "Hoo-hoo!" QUICKTEXT_DISABLE "\n"
NAME "...\n"
"Titta här upp!" BOX_BREAK_DELAYED("\x28")  UNSKIPPABLE "Det värkar som tiden är inne för dig\n"
"att slutligen påbörja ditt äventyr\n"
BOX_BREAK UNSKIPPABLE "Du kommer bemötas av många motgångar\n"
"och svårigheter... Så lyder ditt öde.\n"
"Men bli inte avskräckt, även under\n"
"de svåraste av tider!" TEXTID("\x20\x65")
)

DEFINE_MESSAGE(0x2065, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Fortsätt rakt frammåt, då får du syn\n"
"på " COLOR(RED) "Hyrule Slott" COLOR(DEFAULT) "." BOX_BREAK "Du kommer att möta en" COLOR(RED) "prinsessa " COLOR(DEFAULT) "där..." BOX_BREAK "Om du går vilse och inte finner \n"
"vägen, ta då en titt på din \n"
COLOR(RED) "Karta" COLOR(DEFAULT) "." BOX_BREAK "Områden som du redan har utforskat \n"
"visas på Kartan. Tryck \n"
COLOR(RED) "START " COLOR(DEFAULT) "för att öppna Undermenyerna\n"
"och " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " eller " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "för att finna din Karta." BOX_BREAK "På " COLOR(RED) "Kartans Undermeny" COLOR(DEFAULT) ", kan du\n"
"även se en " COLOR(RED) "blinkande punkt" COLOR(DEFAULT) " som visar\n"
"dig vilken väg du borde gå till näst." TEXTID("\x20\x66")
)

DEFINE_MESSAGE(0x2066, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hängde du med?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Nej\n"
"Ja" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2067, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Nåmen då så, Jag ser dig runt i svängarna!\n"
"Hoo hoo hoo-hoo!"
)

DEFINE_MESSAGE(0x2068, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du där, " NAME "! Den här vägen!" BOX_BREAK_DELAYED("\x28")  UNSKIPPABLE "Prinsessan är inne i slottet \n"
"här framför. Se upp så inte vakterna\n"
"upptäcker dig!\n"
"Ho ho hoo-hoo!" EVENT
)

DEFINE_MESSAGE(0x2069, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"På dessa marker, flödar tiden \n"
"normalt." BOX_BREAK "Men tiden står stilla medan du befinner\n"
"dig i " COLOR(RED) "Lon Lon Ranch" COLOR(DEFAULT) " eller inne i stan." BOX_BREAK "Vill du att tiden ska passera normalt,\n"
"måste du lämna staden." BOX_BREAK "Nåmen, då så, vilket håll tänker\n"
"du bege dig nu?\n"
"Hoo hoo hoo!" EVENT
)

DEFINE_MESSAGE(0x206A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vill du höra vad jag sa\n"
"igen?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x206B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hoooo. Du är en smart kille.\n"
"Lycka till då. Hoo hoo."
)

DEFINE_MESSAGE(0x206C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hördu, " NAME "! \n"
"Vänta lite, kompis!" BOX_BREAK "Bortom den här punkten finner\n"
"du" COLOR(RED) "Kakariko Byn" COLOR(DEFAULT) ". Har du träffat Prinsessan\n"
"av Hyrule ännu? Om inte, så föreslår\n"
"jag att du beger dig till " COLOR(RED) "slottet." EVENT
)

DEFINE_MESSAGE(0x206D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hej där, " NAME "! \n"
"Titta hitåt!" BOX_BREAK_DELAYED("\x28")  UNSKIPPABLE "Bortom den här punkten finner\n"
"du "COLOR(RED) "Kakariko Byn" COLOR(DEFAULT) ". Se upp vart du lägger fötterna!\n"
"Hoot hoo!" EVENT
)

DEFINE_MESSAGE(0x206E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME ", du är den enda som kan klara\n"
"av denna uppgift du står inför!\n"
"Du måste göra ditt allra bästa! Hoo!"
)

DEFINE_MESSAGE(0x206F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
NAME "! Vänta nu, kompis!\n"
"Hoo hoo!" BOX_BREAK_DELAYED("\x28") "Fortsätt söderut härifrån sför att nå\n"
COLOR(RED) "Hyliasjöns " COLOR(DEFAULT) "fylliga, rika vatten." BOX_BREAK "Beger du dig mot väst, finner\n"
"du " COLOR(RED) "Gerudo Dalen" COLOR(DEFAULT) ". Det finns ett gömställe med ett\n"
"gäng tjuvar där på andra\n"
"sida Dalen." BOX_BREAK "Nåmen, du är fri att bege dig\n"
"vart du vill!\n"
"Ho ho ho...hooo!" EVENT
)

DEFINE_MESSAGE(0x2070, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Oavsett uppgiftens svårighet, bli\n"
"aldrig avskräckad. Ho Ho Hoo!"
)

DEFINE_MESSAGE(0x2071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Bortom denna punkt ligger Hyliasjön.\n"
"Den är full av djupt, rent water." BOX_BREAK_DELAYED("\x28") COLOR(BLUE) "Zora-folket" COLOR(DEFAULT) ", som bor långt uppströms\n"
"beskyddar det försjunkna templet\n"
"på sjöns botten, såväl som \n"
"Zoras Källa." BOX_BREAK "Vill du bekräfta dess position på\n"
"kartan, tryck " COLOR(RED) "START " COLOR(DEFAULT) "för att \n"
"ta upp Pausmenyerna och " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " \n"
"eller " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " för att bläddra till Kartan." BOX_BREAK "Alla platser du besökt visas\n"
"på kartan. \n"
"Ho hoo-hoo!" EVENT
)

DEFINE_MESSAGE(0x2072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Okej, var nu försiktig, och bege dig ut!"
)

DEFINE_MESSAGE(0x2073, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Vad heter du?" EVENT
)

DEFINE_MESSAGE(0x2074, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  TEXT_SPEED("\x01") "....." TEXT_SPEED("\x00")  BOX_BREAK UNSKIPPABLE  COLOR(ADJUSTABLE)  NAME  COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "Så konstigt...de känns på något sätt... \n"
"bekant." EVENT
)

DEFINE_MESSAGE(0x2075, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Oej då, " NAME "..." BOX_BREAK UNSKIPPABLE "Jag tänker berätta för dig, hemligheten om\n"
"det Helgade Riket som har gått i\n"
"arv i den Kungliga Familjen\n"
"av Hyrule." EVENT
)

DEFINE_MESSAGE(0x2076, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x26") "Tidens Okarina!" EVENT
)

DEFINE_MESSAGE(0x2077, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Förstod du historien jag just\n"
"berättade för dig?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2078, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "Jag höll just på spionera genom\n"
"det här fönstret..." BOX_BREAK UNSKIPPABLE "Det andra väsendet från min\n"
"dröm...de " COLOR(BLUE) "mörka molnen" COLOR(DEFAULT) "...\n"
"Jag tror att de symboliserar...\n"
"den där mannen där inne!" BOX_BREAK "Kan du titta genom fönstret\n"
"på honom?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Okej\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2079, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  TEXT_SPEED("\x01") "........" TEXT_SPEED("\x00") "Ja." BOX_BREAK UNSKIPPABLE "Jag berättade för min far angående drömmen..." BOX_BREAK UNSKIPPABLE "Men dessvärre, han trodde inte att det\n"
"var en profetia..." BOX_BREAK UNSKIPPABLE "Men...Jag kan se den där mannens\n"
"onda avsikter!" EVENT
)

DEFINE_MESSAGE(0x207A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Vad Ganondorf är efter kan inte \n"
"vara någonting mindre än " COLOR(RED) "Triforce \n"
COLOR(DEFAULT) " från det Helgade Riket." BOX_BREAK UNSKIPPABLE "Han måste ha kommit till Hyrule för\n"
"att beslagta den!" BOX_BREAK UNSKIPPABLE "Utöver detta, vill han dessutom erövra Hyrule...\n"
"nej, hela världen!" EVENT
)

DEFINE_MESSAGE(0x207B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME "...nu, är vi de enda\n"
"som kan beskydda Hyrule!" EVENT
)

DEFINE_MESSAGE(0x207C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "Vi får inte låta Ganondorf ta\n"
"Triforce kraften!" BOX_BREAK UNSKIPPABLE "Jag tänker beskydda " COLOR(LIGHTBLUE) "Tidens Okarina\n"
COLOR(DEFAULT) "med all min kraft! \n"
"Han kan inte få den!" BOX_BREAK UNSKIPPABLE "Gå du och sök efter de " COLOR(RED) "två\n"
"återstående Själsstenarna" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Låt oss få tag på Triforcen före\n"
"Ganondorf gör det, så kan vi besegra honom!" EVENT
)

DEFINE_MESSAGE(0x207D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "En sak till...\n"
"Ta det här " COLOR(RED) "brevet" COLOR(DEFAULT) "...\n"
"Jag är säker på att du kan få nytta av det." EVENT
)

DEFINE_MESSAGE(0x207E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Mummel...mummel...\n"
"Vah? Jag är redan vaken!" BOX_BREAK UNSKIPPABLE "Va?" BOX_BREAK UNSKIPPABLE "Dra på trissor! Om det inte är \n"
"skogspojken från häromda'n!\n"
"Förresten, tack så mycket för\n"
"att du väckte mig!" BOX_BREAK UNSKIPPABLE "Det var inte lätt, men jag fick till slut\n"
"Malon på bra humör igen." BOX_BREAK UNSKIPPABLE "Så, vad har du i gärningen idag?\n"
"Du har lite fritid för tillfället\n"
"säger du?\n"
"Nå, hur skulle det vara med en liten lek?" BOX_BREAK UNSKIPPABLE "Dessa tre Cuccon jag har här\n"
"är väldigt speciella " COLOR(RED) "Super Cuccon" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Jag tänker slänga ut dem bland\n"
"den där skocken med vanliga\n"
"Cuccon." BOX_BREAK UNSKIPPABLE "Om du lyckas välja ut dessa tre\n"
"specialfåglar från högen med\n"
"vanliga Cuccon inom den utsatta tiden\n"
"så ger jag dig " COLOR(RED) "någonting gott" COLOR(DEFAULT) "." BOX_BREAK "Om du inte hittar dem, vinner jag.\n"
"Det blir " COLOR(RED) "10 Rupees..." COLOR(DEFAULT) "Lust att spela?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x207F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Mummel...mummel...\n"
"Jag e uppe! Jag e uppe!" BOX_BREAK "Va?" BOX_BREAK "Hörru, skogsgrabben!\n"
"Har du lite tid över?\n"
"Kom då och spela!" BOX_BREAK "Jag kastar ut dessa tre\n"
COLOR(RED) "Super Cuccon " COLOR(DEFAULT) "i den här skocken\n"
"vanliga Cuccon." BOX_BREAK "Om du kan peka ut de här tre\n"
"specialfåglarna från de vanliga fåglarna\n"
"inom den utsatta tiden så\n"
"ger jag dig " COLOR(RED) "någonting gott" COLOR(DEFAULT) "." BOX_BREAK "Om du inte hittar dem så vinner jag.\n"
"Det blir " COLOR(RED) "10 Rupees..." COLOR(DEFAULT) "Lust att spela?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2080, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du har 30 sekunder!\n"
"All righty, gör dig redo!\n"
"Här flyger Super Cuccona!" BOX_BREAK SHIFT("\x30") "BÖRJA LETA!!" EVENT
)

DEFINE_MESSAGE(0x2081, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
"Tiden är ute!\n"
"Sååå synd!!" BOX_BREAK "Det här är verkligen bra Cuccos,\n"
"visst är dom!\n"
"De bara håvar in pengar åt mig!" BOX_BREAK "Kom tillbaks till papsen, mina bebisar!" EVENT
)

DEFINE_MESSAGE(0x2082, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Där har du en av dem!\n"
"Fortsätt så! Fortsätt så!\n"
COLOR(RED) "Två till" COLOR(DEFAULT) " att hitta!" EVENT
)

DEFINE_MESSAGE(0x2083, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Där har du en till!\n"
"All right, nu så, sanningens\n"
"ögonblick! Bara " COLOR(RED) "en till" COLOR(DEFAULT) " att hitta!" EVENT
)

DEFINE_MESSAGE(0x2084, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Herrejistanes! Det var som jädran!\n"
"Det är ju helt otroligt!" BOX_BREAK "Det var den sista!\n"
"Du hittade dem allihop!\n"
"Kom hit vetja!" EVENT
)

DEFINE_MESSAGE(0x2085, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vill du prova igen?" BOX_BREAK "Unga killar som du har verkligen\n"
"en flammande låga i hjärtat!\n"
"Hitta alla tre inom\n"
"30 seconds." BOX_BREAK "Försök igen för 5 Rupees?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2086, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hörru, du!\n"
"Du har talangen att bli en av\n"
"världens bästa cowboys!" BOX_BREAK "Hur skulle du gilla att gifta dig med Malon?\n"
"Eh?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x2087, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Ha ha! Jag skämtar ju bara! \n"
"Bara på skämt! Jag tror du är lite\n"
"ung för det ännu, eller hur?\n"
"Ha ha ha!" BOX_BREAK UNSKIPPABLE "Åh...! Jag kan med stolthet presentera\n"
"för dig en flaska av vår helt egna\n"
COLOR(RED) "Lon Lon Mjölk" COLOR(DEFAULT) ". Den ger dig massor av energi\n"
"redan från första klunken!" BOX_BREAK UNSKIPPABLE "Efter att du druckit allt kan du\n"
"föra tillbaka " COLOR(RED) "flaskan " COLOR(DEFAULT) "och fyll på\n"
"mera, när du vill!" EVENT
)

DEFINE_MESSAGE(0x2088, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hördu partner, du har ett hederligt\n"
"ansikte!" BOX_BREAK "När du växt upp kan du ju komma hit\n"
"och jobba, här på ranchen.\n"
"Det är ett ihållande erbjudande!\n"
"Jag väntar på dig." EVENT
)

DEFINE_MESSAGE(0x2089, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Här får du! Ta den här super\n"
"färska " COLOR(RED) "Lon Lon Mjölken" COLOR(DEFAULT) "!" EVENT
)

DEFINE_MESSAGE(0x208A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Varsågod! Ta lite super\n"
"färsk mjölk..." BOX_BREAK "Åh? Det va ju synd!!\n"
"Du har inte någon tom " COLOR(RED) "flaska" COLOR(DEFAULT) ",\n"
"eller hur?"
)

DEFINE_MESSAGE(0x208B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Mummel...mummel...\n"
"Jag är vaken!" BOX_BREAK "Va?" BOX_BREAK "Hörru, " NAME "!\n"
"Om du letar efter Malon, så borde\n"
" hon va här utanför. Eller kom du\n"
"hit för att spela?" BOX_BREAK "Nåmen dåså, hur skulle de va med\n"
"mitt " COLOR(RED) "Super Cucco-hittar spel" COLOR(DEFAULT) "\n"
"Eller tänkte du bara köpa lite\n"
COLOR(RED) "Lon Lon Mjölk" COLOR(DEFAULT) "?" BOX_BREAK "Vad blir det?\n"
THREE_CHOICE  COLOR(ADJUSTABLE) "Lon Lon Milk - 30 Rupees\n"
"Cucco-hittar spel - 10 Rupees\n"
"Ingenting" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x208C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
QUICKTEXT_ENABLE  COLOR(RED) "Du misslyckades!" COLOR(DEFAULT) "\n"
"Du måste hoppa över alla\n"
"hinder!" QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x208D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
QUICKTEXT_ENABLE  COLOR(RED) "Ett varv till!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  FADE("\x14")
)

DEFINE_MESSAGE(0x208E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Är du säker på att du rider emot\n"
"hindren rakt på? Om du närmar \n"
"dig snett, vägrar hästen\n"
"att hoppa!" BOX_BREAK "Vill du prova igen så hoppa\n"
"upp på Epona och gör dig redo!"
)

DEFINE_MESSAGE(0x208F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Du gjorde det!\n"
COLOR(RED)  RACE_TIME  COLOR(DEFAULT) " är det nya rekordet för loppet!" BOX_BREAK UNSKIPPABLE "Jag måste ge dig en present för\n"
"att fira ditt nya rekord!" BOX_BREAK UNSKIPPABLE "Presenten är lite för tung för\n"
"att ge den till dig här, så jag\n"
"levererar den till ditt hus istället.\n"
"Du är riktigt ivrig, eller hur?! Hee hee!"
)

DEFINE_MESSAGE(0x2090, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Rekordet hittills är " COLOR(RED) "50 sekunder" COLOR(DEFAULT) ".\n"
"Din bästa tid är " COLOR(RED)  HIGHSCORE(HS_HORSE_RACE)  COLOR(DEFAULT) "." BOX_BREAK "Om du slår rekordet så\n"
"ger jag dig en present.\n"
"Ge det allt du har, okej?" BOX_BREAK "Då kör vi!" EVENT
)

DEFINE_MESSAGE(0x2091, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Din bästa tid är " COLOR(RED)  HIGHSCORE(HS_HORSE_RACE)  COLOR(DEFAULT) "!\n"
"Hur snabbt kan du rida?!\n"
"Kom igen, låt oss börja!" EVENT
)

DEFINE_MESSAGE(0x2092, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det nuvarande rekordet är " COLOR(RED) "50 sekunder" COLOR(DEFAULT) ".\n"
"Försök slå det här rekordet först!" BOX_BREAK "Om du slår rekordet, så \n"
"ger jag dig en present!\n"
"Ge det allt du har, okej?" BOX_BREAK "All right, då kör vi!" EVENT
)

DEFINE_MESSAGE(0x2093, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"2093"
)

DEFINE_MESSAGE(0x2094, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"2094"
)

DEFINE_MESSAGE(0x2095, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"2095"
)

DEFINE_MESSAGE(0x2096, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"2096"
)

DEFINE_MESSAGE(0x2097, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"2097"
)

DEFINE_MESSAGE(0x2098, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"2098"
)

DEFINE_MESSAGE(0x2099, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"2099"
)

DEFINE_MESSAGE(0x209A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"209A"
)

DEFINE_MESSAGE(0x209B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"209B"
)

DEFINE_MESSAGE(0x209C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"209C"
)

DEFINE_MESSAGE(0x209D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"209D"
)

DEFINE_MESSAGE(0x209E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"209E"
)

DEFINE_MESSAGE(0x209F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"209F"
)

DEFINE_MESSAGE(0x3000, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du vet inte riktigt vad han menar\n"
"med \"Svurna Bröder,\" men du har\n"
"samlat ihop två Själsstenar!\n"
"Du behöver bara hitta en till!"
)

DEFINE_MESSAGE(0x3001, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du vet inte riktigt vad han menar\n"
"med \"Svurna Bröder,\" men du har \n"
"äntligen hittat alla tre Själsstenarna!\n"
"Återvänd nu till Prinsessan Zelda!"
)

DEFINE_MESSAGE(0x3002, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag skaaaapade dennn häärrrr...\n"
"Byyt uut denn mot en " COLOR(RED) "anspråksblankett" COLOR(DEFAULT) "..."
)

DEFINE_MESSAGE(0x3003, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"I geeeer dig dennn hääär sommm\n"
"en souvenirrrrr."
)

DEFINE_MESSAGE(0x3004, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag gillar dig, grabben!" BOX_BREAK UNSKIPPABLE "Hur skulle det vara om du oc jag blev\n"
"Svurna Bröder?!" BOX_BREAK UNSKIPPABLE "Nej, det krävs inte något stor\n"
"ceremoni eller så! Bara ta imot den\n"
"här som bevis på våran vänskap!"
)

DEFINE_MESSAGE(0x3005, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x30") "Du gjorde jättebra ifrån dig!" FADE("\x1E")
)

DEFINE_MESSAGE(0x3006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Nu ska du få en stor Goron kram, \n"
"Broder!" FADE("\x1E")
)

DEFINE_MESSAGE(0x3007, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x50") "Åh!" BOX_BREAK_DELAYED("\x1E")  SHIFT("\x4B") "Åh-åh!" BOX_BREAK_DELAYED("\x28")  SHIFT("\x4B")  QUICKTEXT_ENABLE "Kom igen!" QUICKTEXT_DISABLE  BOX_BREAK_DELAYED("\x1E")  SHIFT("\x14") "Kom igen! Kör hårt! " QUICKTEXT_ENABLE "Ah yeah!" QUICKTEXT_DISABLE  BOX_BREAK_DELAYED("\x28")  SHIFT("\x50")  QUICKTEXT_ENABLE "Flott!!" QUICKTEXT_DISABLE  BOX_BREAK_DELAYED("\x1E")  SHIFT("\x28") "Vilken härlig takt!" BOX_BREAK_DELAYED("\x28")  SHIFT("\x32") "WHOOOOAH!" BOX_BREAK_DELAYED("\x28")  SHIFT("\x3C")  QUICKTEXT_ENABLE "YEEEEAH!" QUICKTEXT_DISABLE  BOX_BREAK_DELAYED("\x28")  SHIFT("\x3C")  QUICKTEXT_ENABLE "YAHOOO!!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x3008, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Jag är en av " COLOR(RED) "Goron" COLOR(DEFAULT) "-folket,\n"
"stenätarna som bor upper i\n"
"Döda Bergen." BOX_BREAK UNSKIPPABLE "Titta på den där stora bumlingen\n"
"där!" BOX_BREAK UNSKIPPABLE "Den blockerar ingången till\n"
COLOR(RED) "Dodongos Grotta" COLOR(DEFAULT) ", som en gång var\n"
"otroligt viktig för oss Gorons\n"
BOX_BREAK UNSKIPPABLE "Men så en dag, dök det plötsligt\n"
"upp massor av Dodongos inne i\n"
"grottan. Så blev det ett väldigt\n"
"farligt ställe!" BOX_BREAK UNSKIPPABLE "Till råga på det, anlände det en\n"
COLOR(RED) "Svartklädd Gerudo" COLOR(DEFAULT) "som använde sin magi\n"
"och föseglade grottöppningen med\n"
"den där bumlingen!" TEXTID("\x30\x2A")
)

DEFINE_MESSAGE(0x3009, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag önskar att jag kunde rulla ned för\n"
"berget som en sten, med en\n"
COLOR(RED) "Bomb Blomma " COLOR(DEFAULT) "och..." BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x3C")  COLOR(RED) "BOOOOOOM!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  BOX_BREAK "Kunde jag göra det med en " COLOR(RED) "Bomb\n"
"Blomma" COLOR(DEFAULT) ", skulle jag vara en riktig man."
)

DEFINE_MESSAGE(0x300A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag står här för att skugga\n"
COLOR(RED) "Bomb Blommorna " COLOR(DEFAULT) "från solen." BOX_BREAK "Har du en fråga till mig?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Fråga om Bomb Blommor\n"
"Fråga om Dodongos Grotta" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x300B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"De där plantorna som växer där\n"
"är " COLOR(RED) "Bomb Blommor" COLOR(DEFAULT) ". De används \n"
"för att \"gräva gruvor\" och växer bara\n"
"på det här berget." BOX_BREAK "Blommans frukt är ett\n"
"råmaterial för bomber." BOX_BREAK "Men en icke-Goron amatör borde \n"
"aldrig plocka upp en Bomb Blomma.\n"
BOX_BREAK "De växer vanligtvis på \n"
"mörka platser, så Bomb Blommorna som gror\n"
"på ett sånt här ställe är\n"
"extremt sällsynta."
)

DEFINE_MESSAGE(0x300C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"De där plantorna som växer där\n"
"är " COLOR(RED) "Bomb Blommor" COLOR(DEFAULT) ". De används \n"
"för att \"gräva gruvor\" och växer bara\n"
"på det här berget." BOX_BREAK "De växer vanligtvis på \n"
"mörka platser, så Bomb Blommorna som gror\n"
"på ett sånt här ställe är\n"
"extremt sällsynta." BOX_BREAK "Om du hade ett " COLOR(RED) "Goron Armband" COLOR(DEFAULT) ",\n"
"Så skulle till och med en liten unge\n"
" som du enkelt plocka upp den med " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x300D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Såg du grottan på vägen upp för\n"
"för berget? Det var " COLOR(RED) "Dodongos \n"
"Grotta" COLOR(DEFAULT) "." BOX_BREAK "Eftersom ljuset där inne är väldigt\n"
"vagt, så växer " COLOR(RED) "Bomb Blommorna" COLOR(DEFAULT) ", en unik\n"
"växt för dettta berg, som\n"
"galet där inne!"
)

DEFINE_MESSAGE(0x300E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Åh?" BOX_BREAK UNSKIPPABLE "Vi får inte många besökare\n"
"här uppe. Vart är du ifrån?" BOX_BREAK UNSKIPPABLE "Från skogen?" BOX_BREAK UNSKIPPABLE "Vad är en \"skog\"?" BOX_BREAK UNSKIPPABLE "Öh?" BOX_BREAK UNSKIPPABLE "Ett ställe med många \"träd\" och \n"
"gröna \"växter\"?" BOX_BREAK UNSKIPPABLE "Nu gör du mig bara mera förvirrad! \n"
"Ingenting växer här förutom "COLOR(RED) "Bomb Blommor" COLOR(DEFAULT) "..."
BOX_BREAK UNSKIPPABLE "Vi har inte ens \"frön\" eller\n"
"\"nötter\" här." BOX_BREAK UNSKIPPABLE "Till och med Deku Pinnar är väldigt\n"
"svåra att få tag på!" TEXTID("\x30\x22")
)

DEFINE_MESSAGE(0x300F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag förseglade ingången eftersom\n"
"inte har många varor att sälja.\n"
"Men du är verkligen en ihärdig\n"
"kund, eller hur?" EVENT
)

DEFINE_MESSAGE(0x3010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag beklagar...\n"
"Men den där Bomben är bara till synes.\n"
"De riktiga bomberna är " COLOR(RED) "slutsålda" COLOR(DEFAULT) "." EVENT
)

DEFINE_MESSAGE(0x3011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Varför stoppade du mig?\n"
"Stoppa mig inte här!" BOX_BREAK "Du får inte stoppa mitt vilda rullande!" BOX_BREAK "Det här är enda sättet jag vet\n"
"att lätta på min stress!" BOX_BREAK "Se nu i avund på mitt vilda, vilda\n"
"rullande!!"
)

DEFINE_MESSAGE(0x3012, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Åkej! Jag ger dig den här\n"
"för att hylla ditt mod!" EVENT
)

DEFINE_MESSAGE(0x3013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tack! Låt mig uttrycka min glädje\n"
"med ännu mera vild rullning!"
)

DEFINE_MESSAGE(0x3014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SHIFT("\x21") "Åh...Jag är så hungrig..." BOX_BREAK UNSKIPPABLE "Alla är uttröttade av hunger\n"
"på grund av matbristen i stan.\n"
"Vi står under hotet att\n"
"dö ut!" BOX_BREAK UNSKIPPABLE "Allt på grund av att vi inte kan\n"
"ta oss in i vårt stenbrott, " COLOR(RED) "Dodongos Grotta" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "Goron-folket lever på en diet bestående \n"
"av stenar..." BOX_BREAK UNSKIPPABLE "De mest delikata och näringsrika\n"
"stenarna kan endast hittas\n"
"i Dodongos Grotta! Men det \n"
"känns som forntida historia nu..." BOX_BREAK UNSKIPPABLE "Vi har blivit såna finsmakare att\n"
"vi inte klarar av att äta stenar någon\n"
"annanstans ifrån!" TEXTID("\x30\x15")
)

DEFINE_MESSAGE(0x3015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Suck... Om ja så bara kunde få\n"
"äta ett ländstycke sten från " COLOR(RED) "Dodongos \n"
"Grotta" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x3016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hördu!" BOX_BREAK UNSKIPPABLE "Det är livsfarligt för små barn som\n"
"du att springa runt här. Du kan\n"
"falla ner!" BOX_BREAK UNSKIPPABLE "Om inte jag misstar mig så kom du\n"
"hit för att äta våran " COLOR(RED) "röda sten" COLOR(DEFAULT) "!\n"
"Nå, så synd! Den finns inte här längre!" BOX_BREAK UNSKIPPABLE "Va? Inte därför du är här?\n"
BOX_BREAK UNSKIPPABLE "Du letar efter en \"Själssten\n"
"Du måste mena den där röda\n"
"stenen som ser så otroligt\n"
"utsökt ut, som brukade stå här!" BOX_BREAK UNSKIPPABLE "Jag var så hungrig, så jag tänkte\n"
"att en enda liten slickning borde\n"
"vara okej...så jag smög ut\n"
"hit. Men då var den redan borta!" BOX_BREAK UNSKIPPABLE "Jag tror min Store Broder tog den någonstans." BOX_BREAK UNSKIPPABLE "Han påstår alltid att alla\n"
"är ute efter den där röda stenen!" TEXTID("\x30\x17")
)

DEFINE_MESSAGE(0x3017, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Storebror har låst in sig i sitt\n"
"rum och säger bara:\n"
"\"" COLOR(RED) "Jag tänker vänta här, tills den\n"
"Kungliga Familjens budbärare anländer!" COLOR(DEFAULT) "\""
)

DEFINE_MESSAGE(0x3018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Jag är så hungrig att jag inte kan\n"
"tänka på någonting annat än mat!" BOX_BREAK UNSKIPPABLE "Fråga Storbroder om det är\n"
"något invecklat." BOX_BREAK UNSKIPPABLE "Är han på dåligt humör så blir han\n"
"antagligen arg på dig...det\n"
"kan vara lite läskigt. Men..." BOX_BREAK UNSKIPPABLE "Jag känner till hans HEMLIS." BOX_BREAK UNSKIPPABLE "Han kanske inte ser ut som den typen,\n"
"men Storbroder älskar att dansa!\n"
"När han får hörä rätta rytmen, blir han alldeles..." TEXTID("\x30\x19")
)

DEFINE_MESSAGE(0x3019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag minns att Storbrodern alltid\n"
"brukade lyssna på" COLOR(ADJUSTABLE) "musiken från\n"
"skogen" COLOR(DEFAULT) "..." BOX_BREAK "Åh ja, de gamla goda tiderna...\n"
"Den musiken får mig att känna\n"
"mig nostalgisk, också..." TEXTID("\x30\x2C")
)

DEFINE_MESSAGE(0x301A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Vad i hela!? Vem är du?!" BOX_BREAK UNSKIPPABLE "När jag hörde den " COLOR(BLUE) "Kungliga Familjens\n"
"melodi" COLOR(DEFAULT) ", förväntade jag mig att deras\n"
"budbärare hade anlänt, men...\n"
"du är ju bara en liten unge!" BOX_BREAK UNSKIPPABLE "Har " COLOR(RED) "Darunia" COLOR(DEFAULT) ", Goron-folkets\n"
"store ledare, förlorat så mycket\n"
"status att han kan bli behandlad\n"
"så här av sin egen Svurne Broder Kungen?" BOX_BREAK UNSKIPPABLE "Nu, blir jag nog RIKTIGT arg!\n"
"Försvinn ur min åsyn, nu!" BOX_BREAK UNSKIPPABLE "Frågar du varför jag är på så dåligt\n"
"humör just nu?" BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE "Forntida varelser har infesterat\n"
"Dodongos Grotta!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE "Vi har haft en dålig skörd av vår\n"
"special gröda, Bomb Blommorna!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE "Svält och hunger på grund av\n"
"den hårda sten bristen!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE  SHIFT("\x48") "Men..." TEXTID("\x30\x1B")
)

DEFINE_MESSAGE(0x301B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x19") "Detta är ett Goron problem!" QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE  SHIFT("\x11") "Vi behöver inte få någon hjälp\n"
SHIFT("\x46") "av främlingar!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x301C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x15") "Nejmen hörruu!! Vilken vacker stämma!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Och bara så där, så är min depression\n"
"som bortblåst! Någonting kom helt\n"
"över mig! Plötsligt ville jag bara\n"
"dansa som en galning!" BOX_BREAK UNSKIPPABLE  SHIFT("\x3C") "Jag är" COLOR(RED) "Darunia" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Jag är Goron-folkets store ledare!\n"
"Var det någonting du ville\n"
"fråga mig om?" BOX_BREAK UNSKIPPABLE  SHIFT("\x50") "Va?" BOX_BREAK UNSKIPPABLE "Du vill också ha" COLOR(RED) "Eldens Själasten" COLOR(DEFAULT) "?"
BOX_BREAK UNSKIPPABLE "Själastenen av Eld, även\n"
"känd som Goron Rubinen, är vårt\n"
"folks hemliggömda skatt...." BOX_BREAK UNSKIPPABLE "Så stop i backarna--Jag tänker inte ge\n"
"bort den så enkelt.\n"
"Om du verkligen vill ha den..." BOX_BREAK UNSKIPPABLE "Så kan du ju bege dig in Dodongos\n"
" Grotta, rensa bort odjuren där inne,\n"
"och bevisa att du är en äkta karl?" BOX_BREAK UNSKIPPABLE "På det viset blir vi alla nöjda\n"
"och glada igen! Gör du det, så ger\n"
"jag dig vad du vill, även om det\n"
"så är självaste Själastenen!" BOX_BREAK UNSKIPPABLE "Jag har någonting åt dig. Jag ger\n"
"dig inte denna i utbyte för något\n"
"eller så, men ta den iallafall\n" BOX_BREAK UNSKIPPABLE "Om du bär på den här, så borde till\n"
"och med en liten grabb som du kunna\n"
"plocka upp en " COLOR(RED) "Bomb Blomma" COLOR(DEFAULT) " med " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x301D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Förgör monstren i" COLOR(RED) "Dodongos Grotta\n"
COLOR(DEFAULT) "och bli en riktig man!\n"
"Efter det kan vi diskutera\n"
"Själastenen!"
)

DEFINE_MESSAGE(0x301E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du, Broder, spela den där melodin\n"
"för mig igen någon gång!"
)

DEFINE_MESSAGE(0x301F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oavsett hur många gånger jag\n"
"hör den där melodin, så\n"
"blir den aldrig dålig!"
)

DEFINE_MESSAGE(0x3020, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Tjaa, det var inte riktigt vad jag\n"
"känner för just nu..." BOX_BREAK "Jag skulle föredra...en melodi... från\n"
"någonstans...um... bortom dessa \n"
"berg...någonting mer...\n"
"grönt...naturrikt..." BOX_BREAK "Det är den sortens musik jag är\n"
"intresserad av..."
)

DEFINE_MESSAGE(0x3021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, nu kan vi ta oss in i grottan.\n"
"Du är väldigt smart!"
)

DEFINE_MESSAGE(0x3022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag känner till ett knep som sparar Deku Pinnar!\n"
"När du tänt eld på en pinne, så brinner\n"
"den till aksa. Tryck " COLOR(BLUE) "[A]" COLOR(DEFAULT) " för att släcka\n"
"den innan den brinner upp helt!" BOX_BREAK "Förresten, jag gömde en pinne\n"
"någonstans i närheten...\n"
"Hehehee..."
)

DEFINE_MESSAGE(0x3023, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Det är jag, " COLOR(RED) "Darunia" COLOR(DEFAULT) "!\n"
"Bra jobbat!" BOX_BREAK UNSKIPPABLE "Tack vare dig, kan vi återigen\n"
"avnjuta de delikata stenarna från\n"
"Dodongos Grotta tills våra\n"
"magar spricker!"
)

DEFINE_MESSAGE(0x3024, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Jag är så hungrig att jag inte kan tänka\n"
"på någonting annat än mat!" BOX_BREAK UNSKIPPABLE "\"Själasten?\"\n"
"Den där " COLOR(RED) "röda stenen" COLOR(DEFAULT) " som belyste upp\n"
"vår stad?" BOX_BREAK UNSKIPPABLE "Storebror " COLOR(RED) "Darunia" COLOR(DEFAULT) " tog den\n"
"och låste in sig på sitt rum\n"
BOX_BREAK UNSKIPPABLE "Efter det, känns det som om allt\n"
"ljus i staden har slocknat helt...\n"
"Allihopa verkar helt...\n"
"nedstämda..." TEXTID("\x30\x25")
)

DEFINE_MESSAGE(0x3025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag skulle vilja att du tog lite " COLOR(RED) "fire" COLOR(DEFAULT) "\n"
"från Storebrors rum hit"
)

DEFINE_MESSAGE(0x3026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ah, Jag förstår...\n"
"Vi borde ha kastat den där\n"
"Bomben från klippkanten..."
)

DEFINE_MESSAGE(0x3027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du är helt otrolig som förgörde\n"
"alla Dodongos! Har du något emot\n"
"att jag kallar dig Storebror?"
)

DEFINE_MESSAGE(0x3028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Thack vare dig, är vi all okej!\n"
"Varför inte köpa ett par Bomber?" EVENT
)

DEFINE_MESSAGE(0x3029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du vet, jag är så otroligt tacksam mot\n"
"dig att när jag får ett barn, tänker jag\n"
"döpa det efter dig!"
)

DEFINE_MESSAGE(0x302A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vill du höra mera Goron skvaller,\n"
"gå då upp till staden!" BOX_BREAK COLOR(RED) "Goron Stad" COLOR(DEFAULT) " är bara en liten\n"
"bit upp längs ledet. Det tar inte\n"
"lång tid att ta sig dit,\n"
"inte ens till fots."
)

DEFINE_MESSAGE(0x302B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du plockar upp Bomb Blommor med \n"
COLOR(BLUE) "[A]" COLOR(DEFAULT) ". Tryck " COLOR(BLUE) "[A] " COLOR(DEFAULT) "igen för att sätta ned den."
)

DEFINE_MESSAGE(0x302C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"När alla " COLOR(RED) "facklorna" COLOR(DEFAULT) " på denna våning är\n"
"tända, vaknar Goron Staden verkligen till liv!"
)

DEFINE_MESSAGE(0x302D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Tänker du rensa bort alla Dodongos?\n"
"Det är egentligen ett Goron problem.\n"
"Du är en snokande liten unge,\n"
"eller hur?!" BOX_BREAK "I och för sig, vi vore\n"
"nog väldigt tacksamma om du faktiskt löste\n"
"det så vi kan hämta alla Bomber vi vill\n"
"ha, som vi brukade..." BOX_BREAK "Låt mig ge dig en varning...\n"
"Dodongos är väldigt skrämmade vidunder! \n"
"De äter VAD SOM HELST!!" BOX_BREAK "Så se upp, så du inte\n"
"blir uppäten!" EVENT
)

DEFINE_MESSAGE(0x302E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag har ju redan sagt det!\n"
"Vi har slut på Bomber!\n"
"Åhhh... Jag är så hungrig!" PERSISTENT
)

DEFINE_MESSAGE(0x302F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hur mådde Storebror?\n"
"Jag förståt..." BOX_BREAK "Förresten, känner du till\n"
"musiken som kommer djupt in ifrån\n"
"den här tunneln? Alla här gillar den!"
)

DEFINE_MESSAGE(0x3030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag låter dig aldrig ta fast mig! \n"
"Du jobbar säkert för Ganondorf!"
)

DEFINE_MESSAGE(0x3031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hur kunde du göra såhär mot mig?\n"
"Du, du är Ganondorfs udersåte!" BOX_BREAK UNSKIPPABLE "Hör mitt namn och darra!" BOX_BREAK UNSKIPPABLE "Jag är " COLOR(RED)  NAME  COLOR(DEFAULT) "! \n"
"Goron-folkets stora hjälte!"
)

DEFINE_MESSAGE(0x3032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Va?" BOX_BREAK UNSKIPPABLE "Ditt namn är också\n"
NAME "?" BOX_BREAK UNSKIPPABLE "Isåfall måste du vara den legendariske\n"
"Hjälten och Dodongo Tämjaren, \n"
NAME "!" BOX_BREAK UNSKIPPABLE "Min pappa är " COLOR(RED) "Darunia" COLOR(DEFAULT) "...\n"
"Minns du honom?" BOX_BREAK UNSKIPPABLE "Pappa döpte mig " NAME "\n"
"efter dig, eftersom du är så\n"
"modig!" BOX_BREAK UNSKIPPABLE "Det är ett häftigt namn!\n"
"Jag gillar det verkligen!" BOX_BREAK UNSKIPPABLE  NAME ", du är en hjälte för\n"
"oss alla Gorons! \n"
"Jag är så glad att få träffa dig!" BOX_BREAK UNSKIPPABLE "Snälla, ge mig din autograf!\n"
"Signera den:\n"
SHIFT("\x05") "\"Till min vän, \n"
SHIFT("\x05")  NAME " av Goron-folket\"" BOX_BREAK UNSKIPPABLE "Åh..." BOX_BREAK UNSKIPPABLE "Jag antar att det inte är riktigt\n"
"passande att fråga just nu...\n"
"Snälla, hjälp dom andra!" BOX_BREAK UNSKIPPABLE "Min pappa, Darunia, begav sig till " COLOR(RED) "Eldens\n"
"Tempel" COLOR(DEFAULT) ". Det finns en drake där inne!" BOX_BREAK UNSKIPPABLE "Om vi inte skyndar oss, kommer även min\n"
"pappa att bli uppäten av draken!!!" TEXTID("\x30\x33")
)

DEFINE_MESSAGE(0x3033, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"B-b-b-buuuu huuuuuu!" EVENT
)

DEFINE_MESSAGE(0x3034, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Du borde nog försöka lugna ner honom\n"
"om du kan...\n"
"Kanske han lugnar ned sig om du\n"
"pratar med honom?" BOX_BREAK "Vad vill du fråga honom?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Fråga om draken\n"
"Fråga om de andra Gorons" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x3035, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "För mycket länge sedan, fanns det\n"
"en ond drake vid namn " COLOR(RED) "Volvagia" COLOR(DEFAULT) " som bodde\n"
"inne i berget." BOX_BREAK UNSKIPPABLE "Den draken var oerhört läskig!\n"
"Han åt Gorons!" BOX_BREAK UNSKIPPABLE "Hjälten av Goron-folket tog en jättelik\n"
"hammare, och... BOOOM!" BOX_BREAK UNSKIPPABLE "Förgorde draken, bara så där. Visst, det här\n"
"är en myt från väldigt länge sedan,\n"
"med det är sant!" BOX_BREAK UNSKIPPABLE "Det vet jag, eftersom min pappa är\n"
"ättling till den store hjälten!" TEXTID("\x30\x33")
)

DEFINE_MESSAGE(0x3036, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Alla de andra blev tagna till \n"
COLOR(RED) "Eldtemplet" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "Medan min far var borta...\n"
"kom Ganondorfs följeslagare" COLOR(RED) " " COLOR(DEFAULT) "och\n"
"förde bort dem allihop!" BOX_BREAK UNSKIPPABLE "Hela vårt folkslag kommer bli ätna\n"
"av" COLOR(RED) "Volvagia" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Pappa säger att Ganondorf har\n"
"Återuppväckt " COLOR(RED) "Volvagia" BOX_BREAK UNSKIPPABLE "Som en varning till alla som gör\n"
"motstånd, tänker Ganondorf mata dem\n"
"alla till Volvagia!" BOX_BREAK UNSKIPPABLE "Pappa begav sig till Eldens Tempel alldeles\n"
"ensam för att förrsöka rädda \n"
"allihop..." BOX_BREAK UNSKIPPABLE "Snälla, hjälp oss, " NAME "!\n"
"Jag ger dig den här " COLOR(RED) "värme-tåliga\n"
"tunikan" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x3037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Pappa sa åt mig att inte låta någon\n"
"följa efter honom in i templet, men..." BOX_BREAK UNSKIPPABLE "Bara du, " NAME ", kan\n"
"rädda alla!" BOX_BREAK UNSKIPPABLE "Jag är säker på att butiksägaren, som\n"
"ännu gömmer sig någonstans, också\n"
"vill hjälpa dig!" BOX_BREAK UNSKIPPABLE "Men nu tänker jag berätta för dig om\n"
"om den hemliga vägen till Eldtemplet!" TEXTID("\x30\x38")
)

DEFINE_MESSAGE(0x3038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Försök flytta " COLOR(RED) "statyn " COLOR(DEFAULT) "inne\n"
"i Pappas rum!"
)

DEFINE_MESSAGE(0x3039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Vem där?  Är det du,\n"
NAME "...?" BOX_BREAK UNSKIPPABLE "Oj, det är verkligen du, " NAME "!" BOX_BREAK UNSKIPPABLE "Du har växt dig så stor sen jag\n"
"såg dig senast!" BOX_BREAK UNSKIPPABLE "Jag skulle vilja ha ett riktigt manligt\n"
"samtal med dig, men vi har tyvärr inte tid." BOX_BREAK UNSKIPPABLE "Ganondorf orsakar trubbel på\n"
"Döda Berget igen!\n"
"Han har återuppväckt den onda, forntida\n"
"draken " COLOR(RED) "Volvagia" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Dessutom, håller han på\n"
"mata mitt folk till den onda draken\n"
"som en varning till andra släkten som\n"
"kan stå emot honom..." BOX_BREAK UNSKIPPABLE "Om den där eldsprutande draken\n"
"lyckas fly ut från bergen, kommer\n"
"hela Hyrule förvandlas till en\n"
"brinnande ödemark!" BOX_BREAK UNSKIPPABLE "Jag går i föväg och föröker försegla\n"
"den onda draken..." BOX_BREAK UNSKIPPABLE "Men jag är orolig, eftersom jag inte\n"
"har den legendariska hammaren...\n"
"Men jag har inget val." BOX_BREAK UNSKIPPABLE  NAME "...Jag begär av dig, att som\n"
"min Svurne Broder gör detta..." BOX_BREAK UNSKIPPABLE "Under tiden jag försöker ta hand om\n"
"draken, snälla rädda mitt folk!" BOX_BREAK UNSKIPPABLE "Fångarnas celler finns i den\n"
"motsatta riktningen.\n"
"Jag räknar mig dig, \n"
NAME "!"
)

DEFINE_MESSAGE(0x303A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är räddad!\n"
"Tack så mycket!\n"
"Här, ta den här!"
)

DEFINE_MESSAGE(0x303B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  NAME "...Kan inte... \n"
"hålla emot...Jag kan inte hålla\n"
"emot längre..." BOX_BREAK UNSKIPPABLE "Ta dig ut härifrån!!"
)

DEFINE_MESSAGE(0x303C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Tack, Broder!\n"
"Jag uppskattar verkligen allt du\n"
"gjort. Jag tackar dig, från oss allihop,\n"
"från hela Goron folket!" BOX_BREAK UNSKIPPABLE "Du visade dig växa upp till en,\n"
"riktig man, precis som jag trodde!"
)

DEFINE_MESSAGE(0x303D, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
SHIFT("\x36") "Glöm inte...\n"
SHIFT("\x03") "Nu är du och jag verkligen äkta Bröder!" FADE("\x50")
)

DEFINE_MESSAGE(0x303E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Det är någonting som uppendagar sig under\n"
"lång tid... en sann vänskap.\n"
"En känsla inne i hjärtat som bara\n"
"blir starkare med tiden..." BOX_BREAK UNSKIPPABLE "Vänskapens passion blomstrar snart\n"
"ut till en rättskaffens kraft,\n"
"och genom den känner du\n"
"vilken väg du borde gå..." BOX_BREAK UNSKIPPABLE "Denna melodi är dedikerad till\n"
"hjärtats kraft...\n"
"Lyssna nu till " COLOR(RED) "Eldens Bolero" COLOR(DEFAULT) "..."
)

DEFINE_MESSAGE(0x303F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME "...Vi ses igen..."
)

DEFINE_MESSAGE(0x3040, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE)  NAME ", det är så hett här inne!\n"
"Vi kan inte stanna här länge!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x3041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Broder " NAME "!\n"
"Allihopa har återvänt!" BOX_BREAK UNSKIPPABLE "Du och pappa förgjorde draken\n"
"tillsammans, visst gjorde ni!?" TEXTID("\x30\x42")
)

DEFINE_MESSAGE(0x3042, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"När jag växer upp vill jag\n"
"bli stor och stark som du, \n"
NAME "!"
)

DEFINE_MESSAGE(0x3043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tack, " NAME "!!"
)

DEFINE_MESSAGE(0x3044, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Tack så otroligt mycket för\n"
"att du räddade oss!" PERSISTENT
)

DEFINE_MESSAGE(0x3045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Förresten, jag, den vilda Darunia,\n"
"visade sig vara den store\n"
COLOR(RED) "Eldens Vise" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "Det är väl lustigt, eller hur, Broder?\n"
"Så, detta måste vara vad de\n"
"kallar ödet." BOX_BREAK UNSKIPPABLE "Ingenting har gjort mig lyckligare\n"
"än att hjälpa dig försegla ondskan\n"
"här!"
)

DEFINE_MESSAGE(0x3046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hey, Broder, ta den här!\n"
"Det här är en " COLOR(RED) "Medaljong " COLOR(DEFAULT) "som besitter\n"
"kraften av eld andarna --och\n"
"min vänskap."
)

DEFINE_MESSAGE(0x3047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Stort problem!\n"
"Alla är borta!\n"
"Men jag behåller mina affärer öppna!" PERSISTENT
)

DEFINE_MESSAGE(0x3048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Vilket vilt äventyr! Det kommer\n"
"att bli en otrolig historia..." BOX_BREAK UNSKIPPABLE "Jag kan inte fatta att alla Dodongon\n"
"plötsligt dök upp i såna stora\n"
"mängder!" BOX_BREAK UNSKIPPABLE "Och den där stora stenen som blockerar\n"
"grottan..." BOX_BREAK UNSKIPPABLE "All denna trubbel måste ha orsakats\n"
"av den där Gerudo tjuven, \n"
COLOR(RED) "Ganondorf" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Han sa, \n"
"\"" COLOR(LIGHTBLUE) "Ge mig Själsstenarna!\n"
"Endast då öppnar jag grottan \n"
"igen!" COLOR(DEFAULT) "\"" BOX_BREAK UNSKIPPABLE "Men du däremot, riskerade \n"
"ditt liv för oss..."
)

DEFINE_MESSAGE(0x3049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x4B") "Trångt läge..."
)

DEFINE_MESSAGE(0x304A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag jobbar på någonting riktigt\n"
"häftigt just nu! Men jag tror det\n"
"lär ta ett tag..." TEXTID("\x30\x4B")
)

DEFINE_MESSAGE(0x304B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om du har tid att vänta fem eller\n"
"sex år så borde det vara färdigt"
)

DEFINE_MESSAGE(0x304C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag tillverkade nyligen ett litet.\n"
"vapen. Vad tycker du..." TEXTID("\x30\x4F")
)

DEFINE_MESSAGE(0x304D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vad tycker du, hur känns det?"
)

DEFINE_MESSAGE(0x304E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Verkar som vi har ett litet problem\n"
"med hållbarheten...\n"
"Men ändå..." TEXTID("\x30\x4F")
)

DEFINE_MESSAGE(0x304F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vad säger du om att köpa den här\n"
"kniven för " COLOR(RED) "200 Rupees?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x3050, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åkej då. Välkommen åter."
)

DEFINE_MESSAGE(0x3051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Snälla...Ät inte... Upp mig...\n"
"Om du äter upp en sån som jag,\n"
"får du hård magkramp!" BOX_BREAK "Du skullle inte gilla det!!"
)

DEFINE_MESSAGE(0x3052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ah, jag förstår. Storebror Darunia\n"
"bad dig att rädda mig.\n"
"Då står jag i stor skuld till dig!" BOX_BREAK "Snälla hjälp Storebror!"
)

DEFINE_MESSAGE(0x3053, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Min Broorrrr...\n"
"Öppnadeen ny butiiik...\n"
"Medigoron's Svärd Butiiiik..." BOX_BREAK "Men dessvärrrrree... \n"
"Så är jag bättre på att tillverka\n"
"Sväärrrd." BOX_BREAK "Hylianska timmermän hyllar\n"
"mig förrrrrr min skickligheeeet.\n"
"Det är sannnnt..."
)

DEFINE_MESSAGE(0x3054, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Den där trasiga kniven är säkerligen\n"
"mitt verrrrkkk...\n"
"Jag vill verkligen reparera deeennn, meennn..." BOX_BREAK UNSKIPPABLE "Men på grund av gårdaagennsss\n"
"utbrottt, har mina ögon blivit\n"
"irrrrrrrriterade..." BOX_BREAK UNSKIPPABLE "De har strålande ögondroppar i Zoras\n"
"Domän... Du får tag på dem genom att\n"
"tala med " COLOR(RED) "Kunnnnnng Zorrrrrra" COLOR(DEFAULT) "..." TEXTID("\x30\x55")
)

DEFINE_MESSAGE(0x3055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Snälla hämta ögondrropparrrnaaa...\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Åkej\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x3056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Awww neeeej... Jag är köörrd...\n"
"Mina ögon sviderr något gaalettt...\n"
"Owwwwww..."
)

DEFINE_MESSAGE(0x3057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Åh, nej! Allihopa är borta!\n"
"Bara jag är kvar!" EVENT
)

DEFINE_MESSAGE(0x3058, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag har väntat påå diiiig\n"
"med tåårrarr i öögonen...\n"
"Var goood och hälsssa till Kunnng Zorrra fråån miiig!"
)

DEFINE_MESSAGE(0x3059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Ärr det sannnt? Du hämtade ögondrrropparrrna\n"
"åt mig? Jag bliirrr så lättad!  Jag\n"
"tänker anväända demmm med detsaamma!" EVENT
)

DEFINE_MESSAGE(0x305A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(RED) "Wowwwwwwwwwwwwww!!" COLOR(DEFAULT)  BOX_BREAK UNSKIPPABLE "Detta är så uppiggande! Det\n"
"funkarrr jättebrrraa!" BOX_BREAK UNSKIPPABLE "Nu kan jag återvända till mitt\n"
"svärdtillverkande! Mitt arbete är ganska\n"
"oregelbundet, så jag ger dig den här\n"
"så du inte glömmerrr." TEXTID("\x30\x5C")
)

DEFINE_MESSAGE(0x305B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Allihopa har återvänt!\n"
"Affärerna återgår till det vanliga!" EVENT
)

DEFINE_MESSAGE(0x305C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Efterrrr några dagarrr...\n"
"Var god kom tillbaaka hiiit...\n"
"Vänta bara, vänta tålmodigt en stund..."
)

DEFINE_MESSAGE(0x305D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Inte ännu...\n"
"Hördu duu...\n"
"Du ärrr otååålig..."
)

DEFINE_MESSAGE(0x305E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Det därrr svärrdet är mitt vackraste\n"
"arrrbete!"
)

DEFINE_MESSAGE(0x305F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Din " COLOR(DEFAULT) "sköld " COLOR(LIGHTBLUE) "blev tagen!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x3060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(DEFAULT) "Tunikan" COLOR(LIGHTBLUE) "som du bar blev tagen" COLOR(DEFAULT)  QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x3061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Din " COLOR(DEFAULT) "sköld " COLOR(LIGHTBLUE) "blev tagen!\n"
COLOR(DEFAULT) "Tunikan " COLOR(LIGHTBLUE) "du bar blev också tagen!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x3062, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Du har gjort väl ifrån dig för att ta\n"
"dig ända hit upp, " NAME ". \n"
"Det här är de Döda Bergens\n"
"helgade topp! Hoot!" BOX_BREAK UNSKIPPABLE "Det sägs a molnen som omringar\n"
"bergstoppen reflekterar Döda\n"
"Bergens välmående. När de ser\n"
"normala ut, vilar berget." BOX_BREAK UNSKIPPABLE "Att lyckass ta dig ända hit upp\n"
"visar starkt på hur smart du är!\n"
"Nu vill jag se dig göra\n"
"ännu ett smart drag..." BOX_BREAK UNSKIPPABLE "Den " COLOR(RED) "Underbara Fen" COLOR(DEFAULT) " som bor här uppe på\n"
"bergstoppen kan ge dig en ny\n"
"färdighet! Hon är ledaren över\n"
"feerna, vet du. Hoo!" BOX_BREAK UNSKIPPABLE "Jag sitter och väntar här på dig.\n"
"När du är redo att bege dig tillbaka\n"
"ned till Kakariko, så kan jag hjälpa\n"
"till! Rör på påkarna nu!"
)

DEFINE_MESSAGE(0x3063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hoo hoot!\n"
"Nå ja, ser ut som att du växt upp lite\n"
"efter den " COLOR(RED) "Underbara Feen" COLOR(DEFAULT) "s\n"
"krafter..." BOX_BREAK "Men du ser fortfarande inte riktigt ut\n"
"som hjälten som kommer rädda Hyrule.\n"
"Inte ännu iallafall!" BOX_BREAK "Om du är påväg tillbaka " COLOR(RED) "ned för\n"
"berget" COLOR(DEFAULT) ", så kan jag låna dig en vinge.\n"
"Kom hit och ta tag i mina klor!\n"
"Och håll i dig hårt! Hoo hooooooot!"
)

DEFINE_MESSAGE(0x3064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det sägs att det bor en " COLOR(RED) "vacker" COLOR(DEFAULT) " " COLOR(RED) "fe\n"
COLOR(DEFAULT) "uppe på Döda Bergen!" BOX_BREAK "Vill du inte träffa henne?"
)

DEFINE_MESSAGE(0x3065, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det sägs att en " COLOR(RED) "fe " COLOR(DEFAULT) "bor uppe på\n"
"toppen av Döda Bergen." BOX_BREAK "Vill du ta dig upp dit\n"
"så är det bäst du tar med dig\n"
"en stor " COLOR(LIGHTBLUE) "sköld" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x3066, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Titta! En " COLOR(DEFAULT) "kyckling " COLOR(LIGHTBLUE) "kläcktes ur\n"
COLOR(DEFAULT) "ägget " COLOR(LIGHTBLUE) "som du inkuberade!\n"
"Det är livets mirakel" COLOR(DEFAULT)  QUICKTEXT_DISABLE  FADE("\x63")
)

DEFINE_MESSAGE(0x3067, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Fick du tag på den röda stenen?\n"
"Låt mig få slicka lite på den!" BOX_BREAK "Nähä? Buuuuuu!"
)

DEFINE_MESSAGE(0x3068, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Broder! Du kommer bara bli ännu\n"
"bättre under dina resor, eller hur?\n"
BOX_BREAK UNSKIPPABLE "Du borde åka och träffa den" COLOR(RED) "Underbara Fen" COLOR(DEFAULT) "\n"
"på toppen avDöda Bergen! Hon\n"
"kommer öka dina förmågor!" BOX_BREAK UNSKIPPABLE "Hörni, allihop! Låt oss ta farväl av\n"
"vår Broder!"
)

DEFINE_MESSAGE(0x3069, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Jag kan berätta en hemlighet som\n"
"tack för att du räddade mig!" BOX_BREAK UNSKIPPABLE "I det här templet finns det vissa " COLOR(RED) "dörrar\n"
"som faller ned " COLOR(DEFAULT) "när du försöker\n"
"öppna dem. När en av dessa dörra\n"
"börjar falla, flytta på dig!" BOX_BREAK UNSKIPPABLE "Använder du ett stycke av\n"
"Gorons \"speciella gröda,\" så kan\n"
"du förstöra den..."
)

DEFINE_MESSAGE(0x306A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Låt mig berätta en hemlighet som\n"
"tack för att du befriar mig!" BOX_BREAK UNSKIPPABLE "När du har fattat eld, så kan du släcka\n"
"den genom att svinga ditt svärd eller\n"
"genom att rulla frammåt... Visste du\n"
"om det?"
)

DEFINE_MESSAGE(0x306B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Här får du ett tips för att du räddat mig!" BOX_BREAK UNSKIPPABLE "Någonstans i det här templet, lär du\n"
"säkerligen stöta på några varelser\n"
"som dansar när de anfaller.\n"
"Pilar kan inte skada dem!" BOX_BREAK UNSKIPPABLE "Verkar som att du behöver ett exemplar\n"
"av våran \"speciella gröda!\" Det är\n"
"allt jag har att säga dig!"
)

DEFINE_MESSAGE(0x306C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Jag berättar en hemlighet eftersom du\n"
"räddade mig!" BOX_BREAK UNSKIPPABLE "Det finns knappar i det här templet\n"
"som du måste hugga för att aktivera.\n"
"Men, du kan även använda Goron-folkets\n"
"\"speciella grödfa\" för att slutföra arbetet."
)

DEFINE_MESSAGE(0x306D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Jag avslöjar en hemlighet som tack\n"
"för att du räddat mig!" BOX_BREAK UNSKIPPABLE "Om du ser ett ställe på kartan men\n"
"som du inte kan nå, prova\n"
"spela någonting på din Okarina!"
)

DEFINE_MESSAGE(0x306E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Jag avslöjar en hemlighet som tack\n"
"för att du räddat mig!" BOX_BREAK UNSKIPPABLE "För att slippa till rummet dit\n"
"Darunia  gick, måste du göra någonting\n"
"åt den där balken som går ända upp\n"
"i taket." BOX_BREAK UNSKIPPABLE "Försök finn en väg som leder dig till\n"
"våningen ovanför så fort som möjligt!"
)

DEFINE_MESSAGE(0x306F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Jag avslöjar en hemlighet som tack\n"
"för att du räddat mig!" BOX_BREAK UNSKIPPABLE "Det finns en dörr gömd i statyn\n"
"vid ingången av templet." BOX_BREAK UNSKIPPABLE "Men, Goron-folkets \"speciella gröda\" funkar\n"
"inte på den... Inte råkar du ha\n"
"någonting ännu starkare?"
)

DEFINE_MESSAGE(0x3070, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Här kommer en hemlighet som tack för räddningen!" BOX_BREAK UNSKIPPABLE "En vägg som kan förstöras av vår\n"
"\"speciella gröda\" låter lite\n"
"annorlunda än vanliga väggar\n"
"när du slår dem med ditt svärd."
)

DEFINE_MESSAGE(0x3071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Befriar du mig?\n"
"Är jag fri att gå?" EVENT
)

DEFINE_MESSAGE(0x3072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"3072"
)

DEFINE_MESSAGE(0x3073, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"3073"
)

DEFINE_MESSAGE(0x4000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "Dessa ögonglobar är så delikata!\n"
"Inatt ska jag tillaga stekta ögonglobar\n"
"för första gången på väldigt lång tid!\n"
"Uhoy hoy hoo houy hoy!" BOX_BREAK UNSKIPPABLE "Vilka härliga grejer! Snälla hälsa\n"
"tack till Kung Zora!\n"
"Eh? Va?" EVENT
)

DEFINE_MESSAGE(0x4001, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "De är till för att göra " COLOR(RED) "Storgorons \n"
"Ögondroppar" COLOR(DEFAULT) "? Åh, vilken besvikelse!\n"
"Du skulle ha sagt det direkt\n"
"från början!" EVENT
)

DEFINE_MESSAGE(0x4002, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME "!\n"
"Den här vägen!  Hoo hoo!" BOX_BREAK_DELAYED("\x28")  UNSKIPPABLE "Jag undrar vad " COLOR(RED) "Saria" COLOR(DEFAULT) " har för sig?\n"
"Hur skulle det vara att återvända\n"
"till skogen någon gång?"
)

DEFINE_MESSAGE(0x4003, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Vad gör du? Du har kommit lång\n"
"väg för att ta dig hit upp..." BOX_BREAK_DELAYED("\x28")  UNSKIPPABLE "Du borde ta en titt på " COLOR(RED) "Kartmenyn \n"
COLOR(DEFAULT) "nu som då." BOX_BREAK UNSKIPPABLE  NAME ", den här är en vacker sjö,\n"
"full av rent, klart vatten." BOX_BREAK UNSKIPPABLE "På sjöns botten ligger ett\n"
COLOR(BLUE) "Vatten Tempel " COLOR(DEFAULT) "som används till att dyrka\n"
"vattenandarna." COLOR(BLUE) "Zora-folket " COLOR(DEFAULT) "är\n"
"templets beskyddare. Hoo hoo." BOX_BREAK UNSKIPPABLE "Zora-folket kom fråm Zoras\n"
"Domän i nordöstra Hyrule. Ett\n"
"vattenlevande folk, allierade med\n"
"Hyrules Kungafamilj sedan långt tillbaka." BOX_BREAK UNSKIPPABLE "Jag hörde att endast den Kungliga Familjen\n"
"av Hyrule får träda in i Zoras Domän...\n"
"Hoo hoo!" BOX_BREAK UNSKIPPABLE "Jag är påväg tillbaka till " COLOR(RED) "slottet" COLOR(DEFAULT) ".\n"
"Vill du följa med, ta tag\n"
"i mina fötter!"
)

DEFINE_MESSAGE(0x4004, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är påväg tillbaka till " COLOR(RED) "slottet" COLOR(DEFAULT) ".\n"
"Vill du följa med, ta tag\n"
"i mina fötter!"
)

DEFINE_MESSAGE(0x4005, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "...Huh?" BOX_BREAK UNSKIPPABLE "Verkar som att det redan finns något\n"
"inuti den här flaskan.\n"
"Det är ett " COLOR(RED) "brev" COLOR(DEFAULT) ":" BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x0C") "\"" COLOR(PURPLE) "Hjälp mig.\n"
COLOR(DEFAULT)  SHIFT("\x0C")  COLOR(PURPLE) "Jag väntar på dig inne i\n"
COLOR(DEFAULT)  SHIFT("\x0C")  COLOR(YELLOW) "Herr Jabu-Jabus" COLOR(PURPLE) " mage.\n"
COLOR(DEFAULT)  SHIFT("\x18") "--" COLOR(YELLOW) "Ruto" COLOR(DEFAULT)  QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x0C")  COLOR(PURPLE) "PS: Berätta inte för min far!" COLOR(DEFAULT) "\"" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x4006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Vem är du?" BOX_BREAK UNSKIPPABLE "Vi är av" COLOR(BLUE) "Zora" COLOR(DEFAULT) "-folket, det ståtliga\n"
"vattu-folket!" BOX_BREAK UNSKIPPABLE "Så...du säger att du har en\n"
"förbindelse till Hyrules Kungliga\n"
"Familj... \n"
"Nå, vad vill du av oss?"
)

DEFINE_MESSAGE(0x4007, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vi är bra på att dyka!\n"
"Hur är det med dig då?" BOX_BREAK "Vill du bli en mäster-dykare,\n"
"prova då på " COLOR(RED) "dykarspelet" COLOR(DEFAULT) " uppe på\n"
"toppen av vattenfallet!\n"
"Har du provat delta redan?"
)

DEFINE_MESSAGE(0x4008, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Zoras fontän är \n"
"älvens källa.\n"
COLOR(RED) "Vår Herre Jabu-Jabu " COLOR(DEFAULT) "bor i den \n"
"fontänen." TEXTID("\x40\x09")
)

DEFINE_MESSAGE(0x4009, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vår Herre Jabu-Jabu är Zoras\n"
"Gud. " COLOR(RED) "Prinsessan Ruto" COLOR(DEFAULT) " ser till \n"
"att förbereda hans måltider \n"
"både morgon och kväll."
)

DEFINE_MESSAGE(0x400A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vi Zora tjänar alla den store \n"
COLOR(RED) "Kung Zora" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x400B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Den store Kung Zora borde hålla\n"
"till i den " COLOR(RED) "Kungliga Kammaren" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x400C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Har du mött vår Herre Jabu-Jabu?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x400D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Enligt \"Legenden om Zora,\"\n"
"så blir du glad utav att skänka " COLOR(RED) "fisk" COLOR(DEFAULT) "\n"
"till vår Herre Jabu-Jabu."
)

DEFINE_MESSAGE(0x400E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, Det var ju inget vidare." BOX_BREAK "Alla som kommer hit \n"
"borde träffa vår " COLOR(RED) "Herre Jabu-Jabu" COLOR(DEFAULT) " åtminstone \n"
"en gång!" BOX_BREAK "Zoras Fontän är precis \n"
"bortom Kung Zoras tron. Det är där som\n"
"vår Herre Jabu-Jabu simmar. Men..." BOX_BREAK "så vida du inte har vår\n"
"Herre Jabu-Jabus tillåtelse, så kan du inte \n"
"ta dig till Zoras Fontän."
)

DEFINE_MESSAGE(0x400F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Vi har inte hittat " COLOR(RED) "Prinsessan Ruto\n"
COLOR(DEFAULT) "trots att vissa utav oss har \n"
"sökt ända vid " COLOR(BLUE) "Hyliasjön" COLOR(DEFAULT) "...."
)

DEFINE_MESSAGE(0x4010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om du hittar någon ledtråd till vart\n"
COLOR(RED) "Prinsessan Ruto " COLOR(DEFAULT) "befinner sig,\n"
"kan du i så fall visa det för kung Zora?"
)

DEFINE_MESSAGE(0x4011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Allt vatten i Hyrule flödar\n"
"genom " COLOR(BLUE) "Zoras Fontän" COLOR(DEFAULT) "." BOX_BREAK "Det vattnet flödar genom\n"
"Zoras älv, som sedan sträcker sig till\n"
COLOR(BLUE) "Hyliasjön " COLOR(DEFAULT) "åt söder."
)

DEFINE_MESSAGE(0x4012, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Åh--Jag har kommit tillbaka till liv!" BOX_BREAK UNSKIPPABLE "Var det du som räddade mig?\n"
"Var inte nervös!" BOX_BREAK UNSKIPPABLE "Det verkar som att du tycker det är svårt\n"
"att andas under vattnet." BOX_BREAK UNSKIPPABLE "För att visa min tacksamhet,\n"
"så ger jag dig denna " COLOR(RED) "tunika" COLOR(DEFAULT) ". Med den så\n"
"kommer du inte att kvävas under vatten."
)

DEFINE_MESSAGE(0x4013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Prinsessan Ruto har gått till \n"
"Hyliasjön och har inte återvänt...\n"
"Jag är så orolig...igen!"
)

DEFINE_MESSAGE(0x4014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Ooh...\n"
"Detta är... Ptja... hmmm...\n"
"Hmmm... " COLOR(RED) "Ögondroppar" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "Man kan säga att vi har det,\n"
"men även att vi inte har det...\n"
"Vi har däremot ingredienserna." BOX_BREAK UNSKIPPABLE "Om du tar " COLOR(RED) "ingredienserna " COLOR(DEFAULT) "till\n"
"läkaren vid sjöns laboratorie, så\n"
"kan han göra dropparna åt dig." BOX_BREAK UNSKIPPABLE "Men du måste leverera dem\n"
"färska..." TEXTID("\x40\x15")
)

DEFINE_MESSAGE(0x4015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Klarar du det " COLOR(RED) "före de blir\n"
"dåliga" COLOR(DEFAULT) "?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Så du tror alltså att de blir \n"
"dåliga innan du kommer fram?\n"
"Det är inte så långt dit om du \n"
"färdas på hästrygg..."
)

DEFINE_MESSAGE(0x4017, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hohoo!" BOX_BREAK_DELAYED("\x28")  UNSKIPPABLE  NAME ", det verkar som \n"
"att du blir mer och mer bekväm\n"
"i din roll som äventyrare." BOX_BREAK UNSKIPPABLE "Jag tror att Prinsessan Zelda \n"
"väntar på att du ska besöka henne igen." BOX_BREAK UNSKIPPABLE "Du har redan " COLOR(RED) "Gorons Rubin" COLOR(DEFAULT) "," COLOR(RED) "\n"
COLOR(DEFAULT) "eller hur?"
)

DEFINE_MESSAGE(0x4018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hallå där, pojke. Jag forskar \n"
"i en process där jag tillverkar \n"
"medicin genom att blanda vatten \n"
"från Hyliasjön med ovanliga ämnen." BOX_BREAK "Du kanske har träffat den gamla \n"
"damen från Brygdbutiken...Hon är som \n"
"en elev till mig...\n"
"Ho ho ho!"
)

DEFINE_MESSAGE(0x4019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
QUICKTEXT_ENABLE "Åh, wow!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Jag har inte sett en " COLOR(RED) "Ögonglobsgroda" COLOR(DEFAULT) " \n"
"likt denna sedan Zoras Domän frös\n"
"över!" EVENT
)

DEFINE_MESSAGE(0x401A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Åh, kära, rara " COLOR(RED) "Prinsessan Ruto" COLOR(DEFAULT) "...\n"
"Vart har hon tagit vägen?\n"
"Jag är så orolig..."
)

DEFINE_MESSAGE(0x401B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Ho, det här brevet! \n"
"Det är från " COLOR(RED) "Prinsessan Ruto" COLOR(DEFAULT) "!!" BOX_BREAK UNSKIPPABLE "Hmmm...Låt mig se...\n"
"Hon är inuti Jabu-Jabu?\n"
"Det kan inte vara möjligt!" BOX_BREAK UNSKIPPABLE "Vår gud, " COLOR(RED) "Jabu-Jabu" COLOR(DEFAULT) ",\n"
"skulle aldrig äta upp min älskade Prinsessan\n"
"Ruto!" BOX_BREAK UNSKIPPABLE "Men sedan den där främlingen, " COLOR(RED) "Ganondorf" COLOR(DEFAULT) ",\n"
"kom hit, så har vår Herre Jabu-Jabu\n"
"blivit lite grön runt\n"
"gälarna..." BOX_BREAK UNSKIPPABLE "Beviset talar för sig självt.\n"
"Självklart så ska du leta efter Ruto.\n"
"Du kan passera härigenom till \n"
"vår Herre Jabu-Jabus altare." BOX_BREAK UNSKIPPABLE "Jag behåller det här brevet. Behåll du \n"
COLOR(RED) "flaskan " COLOR(DEFAULT) "det kom i. Behåll den \n"
"med vördnad!" TEXTID("\x40\x1C")
)

DEFINE_MESSAGE(0x401C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Snälla hitta min älskade " COLOR(RED) "Ruto" COLOR(DEFAULT) "\n"
"med en gång... Zora!"
)

DEFINE_MESSAGE(0x401D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Du kan inte andas under vattnet!\n"
"Om du kvävs, så ta av dig\n"
"de där " COLOR(DEFAULT) "skorna" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x401E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x36") "Åååååh neeej!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x401F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Åhhh, nu så kvicknade jag till...\n"
"Var det du som räddade mig?\n"
"Var inte så nervös!" BOX_BREAK UNSKIPPABLE "Jag ska ge dig en " COLOR(BLUE) "Zoratunika " COLOR(DEFAULT) "som\n"
"bevis för min tacksamhet. Om du tar\n"
"på dig... Va?!" BOX_BREAK UNSKIPPABLE "Har du redan en? Du är \n"
"då redo för precis allt du!" BOX_BREAK UNSKIPPABLE "Så från djupet av mitt hjärta...vad \n"
"sägs om en KYSS?! Va? Du vill inte \n"
"ha det?! Jaha..." BOX_BREAK UNSKIPPABLE "Om du inte kan ta emot mina belöningar, så kan\n"
"du väl istället lyssna på mina problem..." TEXTID("\x40\x13")
)

DEFINE_MESSAGE(0x4020, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är en " COLOR(BLUE) "Zora" COLOR(DEFAULT) ". Har du sett någon \n"
"söt Zoraflicka häromkring?"
)

DEFINE_MESSAGE(0x4021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är en " COLOR(BLUE) "Zora" COLOR(DEFAULT) ". Har du sett\n"
"någpnting märkligt i sjön?\n"
"Älven bär med sig många ting \n"
"till den här sjön!"
)

DEFINE_MESSAGE(0x4022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Du..." QUICKTEXT_ENABLE "Du är sen!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Varför tog du sådan tid på dig?" QUICKTEXT_DISABLE "\n"
"Du är " QUICKTEXT_ENABLE "värdelös!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Jag var helt enkelt ensam, det är allt...\n"
"Men bara lite!!"
)

DEFINE_MESSAGE(0x4023, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "Jag var rädd..." QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Lite!" QUICKTEXT_DISABLE " Bara lite!!"
)

DEFINE_MESSAGE(0x4024, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE  NAME "!\n"
NAME "!"
)

DEFINE_MESSAGE(0x4025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "Du!" QUICKTEXT_DISABLE "\n"
"Du såg häftig ut...Häftigare än vad \n"
"jag trodde att du skulle göra... \n"
QUICKTEXT_ENABLE "Men bara lite!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Ptja, du räddade mig trots allt, så jag \n"
"antar att jag får belöna dig." BOX_BREAK UNSKIPPABLE "Vad önskar du? berätta för mig...\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Jag vill ha den där Själastenen.\n"
"Ingenting egentligen..." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Du menar Vattnets Själasten,\n"
COLOR(BLUE) "Zoras Safir" COLOR(DEFAULT) ", eller hur?" TEXTID("\x40\x27")
)

DEFINE_MESSAGE(0x4027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Min mor gav den till mig och sa \n"
"att jag endast skulle ge den till \n"
"mannen som jag kommer att gifta mig med. Du kan\n"
"kalla den för Zoras förlovningsring!" BOX_BREAK UNSKIPPABLE  SHIFT("\x45")  QUICKTEXT_ENABLE "Okej!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Jag ger dig min mest värdefulla\n"
"ägodel: \n"
"Zoras Safir!"
)

DEFINE_MESSAGE(0x4028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
"Säg ingenting till min far..."
)

DEFINE_MESSAGE(0x4029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hihihi... Var inte blyg." BOX_BREAK UNSKIPPABLE "Jag vet vad du tänker på..." TEXTID("\x40\x27")
)

DEFINE_MESSAGE(0x402A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag vill köpa en fisk, men de är\n"
"lite för dyra..." BOX_BREAK "Jag har inget annat val än att\n"
"fånga en utav fiskarna\n"
"som simmar omkring där ute."
)

DEFINE_MESSAGE(0x402B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Åh, " NAME "!\n"
"Så, du räddade prinsessan va?\n"
"Jag uppskattar det verkligen!"
)

DEFINE_MESSAGE(0x402C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Har min käraste ägodel hjälpt\n"
"hjälpt dig på ditt äventyr? Hihi!"
)

DEFINE_MESSAGE(0x402D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, hej " NAME "!\n"
"Du är det enda som Prinsessan Ruto\n"
"pratar om nuförtiden!"
)

DEFINE_MESSAGE(0x402E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, det är du, " NAME "!\n"
"Tack vare dig, så är vår Herre Jabu-Jabu\n"
"frisk igen!"
)

DEFINE_MESSAGE(0x402F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Alla vi Zora respekterar den store\n"
"Kung Zora! Han besitter en Kungs \n"
"värdighet. Åh ja, det gör han." BOX_BREAK UNSKIPPABLE "Den store Kung Zora har en \n"
"dotter vid namn " COLOR(RED) "Ruto" COLOR(DEFAULT) ". Hon är\n"
"hans enda barn." BOX_BREAK UNSKIPPABLE "Hon är en vild pojkflicka,\n"
"och hon hittar ofta på rackartyg\n"
"som ställer till det för kungen!" TEXTID("\x40\x0B")
)

DEFINE_MESSAGE(0x4030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "Här är det." BOX_BREAK UNSKIPPABLE "Den här medicinen innehåller\n"
"inga konserveringsmedel. Så den " COLOR(RED) "varar \n"
"inte så länge i " COLOR(DEFAULT) "den här temperaturen." BOX_BREAK UNSKIPPABLE "Spring så fort du kan till \n"
"Dödens Berg. Du har friska ben--\n"
"så du klarar det!"
)

DEFINE_MESSAGE(0x4031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hoo hoo! Jag ser att du har blivit större\n"
"större och starkare redan,\n"
NAME "!" BOX_BREAK UNSKIPPABLE "Precis här borta så ligger " COLOR(BLUE) "Zoras Domän" COLOR(DEFAULT) ". \n"
"Zorerna tjänar Hyrules Kungliga \n"
"Familj genom att beskydda \n"
"källan till allt vatten." BOX_BREAK UNSKIPPABLE "De öppnar inte dörren för \n"
"någon utomstående, så länge de inte\n"
"har någon anknytning till den Kungliga \n"
"Familjen." BOX_BREAK UNSKIPPABLE "Låt dem höra den " COLOR(RED) "Kungliga familjens \n"
"melodi" COLOR(DEFAULT) "!\n"
"Hooo hoo hoooo!"
)

DEFINE_MESSAGE(0x4032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Nästa gång du kommer tillbaka, \n"
"så kom ihåg att ta med dig en \n"
"souvenir till mig!"
)

DEFINE_MESSAGE(0x4033, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Du hittade Prinsessan Ruto!\n"
"Nu så kommer Kung Zora att ge dig \n"
COLOR(BLUE) "Vattnets Själasten" COLOR(DEFAULT) "...\n"
"Eller, Ptja." BOX_BREAK UNSKIPPABLE "Kanske?"
)

DEFINE_MESSAGE(0x4034, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hennes mest värdefulla ägodel?\n"
"Du förstår inte vad hon babblar\n"
"om, men du har härmed samlat in två \n"
"Själastenar! Bara en till nu!"
)

DEFINE_MESSAGE(0x4035, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hennes mest värdefulla ägodel?\n"
"Du förstår inte vad hon babblar\n"
"om, men du har äntligen samlat in\n"
"alla tre Själastenar!!" BOX_BREAK UNSKIPPABLE "Återvänd till Prinsessan Zelda!"
)

DEFINE_MESSAGE(0x4036, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Vi möts igen, " NAME "..."
)

DEFINE_MESSAGE(0x4037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Denna is skapades utav en ondskefull\n"
"förbannelse... Monstret i " COLOR(BLUE) "\n"
"Vattentemplet " COLOR(DEFAULT) "är källan till förbannelsen." BOX_BREAK UNSKIPPABLE "Så länge du inte stänger av \n"
"källan så kommer isen aldrig att smälta...." BOX_BREAK UNSKIPPABLE "Om du är modig nog att \n"
"stå upp inför faran och rädda \n"
"Zorerna, så ska jag lära dig en melodi \n"
"som kommer att leda dig in i templet."
)

DEFINE_MESSAGE(0x4038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Tiden går, folk går vidare....\n"
"Som flödet i en älv, så slutar det aldrig..." BOX_BREAK UNSKIPPABLE "Ett barnsligt sinne\n"
"och ett ädelt ändamål... Ung kärlek förändras\n"
"till djup åtråhet... Det klara \n"
"vattnets yta återspeglar tillväxt..." BOX_BREAK UNSKIPPABLE "Så lyssna nu till " COLOR(BLUE) "Vattenserenaden\n"
COLOR(DEFAULT) " och unna dig själv en tanke...."
)

DEFINE_MESSAGE(0x4039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Om du har kommit hit för att träffa \n"
"Zorerna, så ödslar du din tid...\n"
"Det här är allt som finns kvar..." BOX_BREAK UNSKIPPABLE "Med ett undantag, Zorerna \n"
"är nu förseglade bakom detta tjocka \n"
"lager av is..." BOX_BREAK UNSKIPPABLE "Jag lyckades rädda Zora-\n"
"Prinsessan från under isen, men... \n"
"hon gav sig iväg till " COLOR(BLUE) "\n"
"Vattentemplet" COLOR(DEFAULT) "..."
)

DEFINE_MESSAGE(0x403A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Om du vill köpa fisk, så behöver du\n"
"en behållare att stoppa dem i." EVENT
)

DEFINE_MESSAGE(0x403B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Så du säger att du vill köpa en " COLOR(BLUE) "Zora-\n"
"Tunika" COLOR(DEFAULT) "? Den Tunikan är tillverkad\n"
"utav väldigt bra material, och är således\n"
"ofantligt dyr!" BOX_BREAK "Jag är rädd att endast den " COLOR(RED) "den\n"
"rikaste familjen i Kakarikobyn " COLOR(DEFAULT) "\n"
"har råd med detta fina plagg..." EVENT
)

DEFINE_MESSAGE(0x403C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"403C"
)

DEFINE_MESSAGE(0x403D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"403D"
)

DEFINE_MESSAGE(0x403E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Åh...du... Stämmer det att...\n"
NAME "?!" BOX_BREAK UNSKIPPABLE "Det är du som är " NAME ", eller\n"
"hur?" BOX_BREAK UNSKIPPABLE "Det är jag, din fästmö, " COLOR(BLUE) "Ruto" COLOR(DEFAULT) "!\n"
"Prinsessa utav Zorerna!" BOX_BREAK UNSKIPPABLE "Jag glömde aldrig löftena\n"
"vi gav varandra för sju år \n"
"sedan!" BOX_BREAK UNSKIPPABLE "Du är en hemsk man som har \n"
"låtit mig vänta alla dessa sju\n"
"långa år..." BOX_BREAK UNSKIPPABLE "Men just nu så har vi inte tid att \n"
"tala om kärlek..." BOX_BREAK UNSKIPPABLE "Har du märkt av det ännu?!\n"
"att Zoras Domän helt frusit över!" BOX_BREAK UNSKIPPABLE "En ung man vid namn " COLOR(RED) "Sheik" COLOR(DEFAULT) " räddade \n"
"från under isen..." BOX_BREAK UNSKIPPABLE "Men min far och de andra \n"
"Zorerna är kvar där" TEXT_SPEED("\x02") "...fortfarande..." TEXT_SPEED("\x00")  BOX_BREAK UNSKIPPABLE "Jag vill rädda dem allihop!\n"
"Jag vill rädda Zoras Domän!" BOX_BREAK UNSKIPPABLE "Du! Du måste hjälpa mig!\n"
"Detta är en begäran från mig,\n"
"kvinnan som ska bli din\n"
"hustru!" BOX_BREAK UNSKIPPABLE  NAME ", du måste \n"
"hjälpa mig att besegra monstret\n"
"i Templet, Okej?!" BOX_BREAK UNSKIPPABLE "I Vattentemplet, så finns där \n"
COLOR(RED) "tre platser" COLOR(DEFAULT) " där du kan \n"
"förändra vatten-nivån." BOX_BREAK UNSKIPPABLE "Jag tar täten.\n"
"Följ efter mig, fort!!"
)

DEFINE_MESSAGE(0x403F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE  NAME "! Look out!\n"
"That isn't normal water over \n"
"there!"
)

DEFINE_MESSAGE(0x4040, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"4040"
)

DEFINE_MESSAGE(0x4041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME "..." BOX_BREAK UNSKIPPABLE "I would have expected no less\n"
"från den man som ska bli till min\n"
"make." BOX_BREAK UNSKIPPABLE "Zoras Domän och dess folk\n"
"kommer i sinom tid återvända\n"
"till det gamla vanliga igen."
)

DEFINE_MESSAGE(0x4042, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE "Om du träffar på Sheik, \n"
"så var snäll och tacka honom, okej?" FADE("\x5A")
)

DEFINE_MESSAGE(0x4043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Så Ruto tackade mig?" BOX_BREAK UNSKIPPABLE "Jag förstår...." BOX_BREAK UNSKIPPABLE "Vi måste återställa freden \n"
"i även för hennes skull \n"
"Eller hur?"
)

DEFINE_MESSAGE(0x4044, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"4044"
)

DEFINE_MESSAGE(0x4045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Ah, I see...\n"
"Princess Ruto went to the Water\n"
"Temple..."
)

DEFINE_MESSAGE(0x4046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Som belöning...\n"
"Så skänker jag dig min eviga kärlek." BOX_BREAK UNSKIPPABLE "Ptja, det är vad jag önskar säga, \n"
"men jag tror inte att jag kan ge dig\n"
"det just nu."
)

DEFINE_MESSAGE(0x4047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Prinsessan Zelda... Hon lever. Jag kan\n"
"känna det...så tappa inte modet."
)

DEFINE_MESSAGE(0x4048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE  SHIFT("\x3F") "Hjääälp!\n"
SHIFT("\x0F") "Vad är det där?! En bläckfisk?!" QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x4049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Som" COLOR(BLUE) "Vattnets Vise" COLOR(DEFAULT) "så måste jag\n"
"vaka över Vattentemplet..." BOX_BREAK UNSKIPPABLE "Och du... Du söker efter\n"
"prinsessan, " COLOR(RED) "Zelda" COLOR(DEFAULT) "?" BOX_BREAK UNSKIPPABLE "Hah!\n"
"Du kan inte dölja någonting för mig!"
)

DEFINE_MESSAGE(0x404A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag märker att ingenting kan stoppa\n"
"dig på din jakt efter fred och  \n"
"rättvisa... Ta emot den här \n"
COLOR(BLUE) "Medaljen" COLOR(DEFAULT) "... Bär den med respekt!"
)

DEFINE_MESSAGE(0x404B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du! Vem är du?!" BOX_BREAK UNSKIPPABLE "Jag heter " COLOR(RED) "Ruto" COLOR(DEFAULT) ", Prinsessa över Zorerna." BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE "Va?!" QUICKTEXT_DISABLE "\n"
"Säger du att min pappa har bett \n"
"dig att komma hit och rädda mig?" BOX_BREAK UNSKIPPABLE "Jag skulle " QUICKTEXT_ENABLE "aldrig" QUICKTEXT_DISABLE " be någon att göra en sådan\n"
"sak!" BOX_BREAK UNSKIPPABLE "\"Ett brev i en flaska?\"  Jag har\n"
QUICKTEXT_ENABLE "ingen aning" QUICKTEXT_DISABLE " vad du pratar för strunt!" BOX_BREAK UNSKIPPABLE "Är min far orolig för mig?" BOX_BREAK UNSKIPPABLE "Jag " QUICKTEXT_ENABLE "bryr mig inte!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Oavsett så kan jag inte gå hem nu.\n"
"Och du... " QUICKTEXT_ENABLE "Gå ut härifrån!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Är det förstått?!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x404C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hänger du fortfarande kvar här?\n"
"Jag sa ju åt dig att sticka!" BOX_BREAK UNSKIPPABLE "Jag är okej. Jag har gått in i\n"
"vår Herre Jabu-Jabus mage sedan jag var\n"
"liten, men..." BOX_BREAK UNSKIPPABLE "Vår Herre Jabu-Jabu är lite konstig \n"
"idag..." BOX_BREAK UNSKIPPABLE "Där finns elektriska maneter och\n"
"märkliga hål häromkring..." BOX_BREAK UNSKIPPABLE "Som grädde på moset så \n"
"har min älskade sten...den...\n"
QUICKTEXT_ENABLE "Det angår inte dig!" QUICKTEXT_DISABLE "\n"
"Oavsett..." BOX_BREAK UNSKIPPABLE "Du! " QUICKTEXT_ENABLE "Gå hem med dig!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Förstått?!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x404D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Är du så orolig för mig?" BOX_BREAK UNSKIPPABLE "I så fall så ska du få äran att\n"
"bära mig!" BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE "Fast" QUICKTEXT_DISABLE "...Jag kommer att stanna \n"
"kvar här tills vi hittar vad vi letar efter.\n"
"Kom inte och säg något annat!" EVENT
)

DEFINE_MESSAGE(0x404E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Så ofärskämt!" QUICKTEXT_DISABLE "\n"
"Hur kunde du lämna kvar mig här?! \n"
"Om du är en man, så bete dig som en! \n"
"Ta lite ansvar!" EVENT
)

DEFINE_MESSAGE(0x404F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "Där är den!" QUICKTEXT_DISABLE "\n"
"Det är den som jag har letat efter!\n"
"Kasta upp mig dit! \n"
"Upp på den där plattformen!"
)

DEFINE_MESSAGE(0x4050, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "Prinsessan Ruto fick \n"
COLOR(BLUE) "Själastenen" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED("\x02") "Men" TEXT_SPEED("\x00") " varför just Prinsessan Ruto?"
)

DEFINE_MESSAGE(0x4051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Åh herre min skapare!\n"
"Jag hittade den till slut... \n"
"Min mors sten..." BOX_BREAK UNSKIPPABLE "Jag jätteupprörd då vår Herre Jabu-\n"
"Jabu svalde den..." BOX_BREAK UNSKIPPABLE "Medan jag matade honom, så\n"
"svalde han plötsligt mig med! Jag blev \n"
"Så överraskad att jag tappade stenen..." BOX_BREAK UNSKIPPABLE "Men, nu när jag har hittat den, \n"
"så behöver jag inte vara här \n"
"inne mer!"
)

DEFINE_MESSAGE(0x4052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Så, ta med mig hem, på en gång!"
)

DEFINE_MESSAGE(0x4053, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Dykarspel   20 Rupees\n"
"Vill du spela?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4054, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x3F") "OKEJ!" QUICKTEXT_DISABLE  BOX_BREAK "Plocka upp alla Rupees jag kastar \n"
"härifrån. Du har bara en begränsak\n"
"tid på dig!" BOX_BREAK "Då du plockat upp alla, \n"
"så återvänd hit! Så ska jag ge dig\n"
"någonting väldigt fint!" EVENT
)

DEFINE_MESSAGE(0x4055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE  QUICKTEXT_ENABLE "Hej!  Grattis!" QUICKTEXT_DISABLE "\n"
"Jag har någonting \n"
"väldigt fint till dig!\n"
"Ta emot den!" EVENT
)

DEFINE_MESSAGE(0x4056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Vilket graciöst dyk!\n"
"Snälla ta emot den här!" BOX_BREAK UNSKIPPABLE "Det är ett \"" COLOR(RED) "fjäll" COLOR(DEFAULT) "\" utav oss.\n"
"Med denna, så kan du dyka\n"
"mycket djupare under vattnet." EVENT
)

DEFINE_MESSAGE(0x4057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Medan vattenytan stiger, så \n"
"försvinner ondskan från sjön...\n"
NAME ", du gjorde det!"
)

DEFINE_MESSAGE(0x4058, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag...tror att du kommer att rädda \n"
"save this world..."
)

DEFINE_MESSAGE(0x4059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Se där, " NAME "..." BOX_BREAK UNSKIPPABLE "Tillsammans med Prinsessan Ruto \n"
"besegrade du det onda monstret!" BOX_BREAK UNSKIPPABLE "Ännu en gång, så fylls sjön med\n"
"rent vatten. Allt är som vanligt igen."
)

DEFINE_MESSAGE(0x405A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x51")  COLOR(RED) "SÄTT IGÅNG!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x405B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Gå genom fallet för en genväg." EVENT
)

DEFINE_MESSAGE(0x405C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ta så mycket du kan bära för \n"
"20 Rupees.  Vill du spela?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x405D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Hej!  Grattis!!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x405E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tugg tugg tugg...\n"
"Vad sägs om några" COLOR(RED) "Magiska Bönor" COLOR(DEFAULT) "?\n"
"De säljer inte så värst bra..." BOX_BREAK "Hur låter...\n"
COLOR(RED) "10 Rupees" COLOR(DEFAULT) " för en styck?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x405F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tugg tugg tugg...\n"
"Vad sägs om några" COLOR(RED) "Magiska Bönor" COLOR(DEFAULT) "?\n"
"Ptja, de är inte så värst populära än." BOX_BREAK "Vad sägs om...\n"
COLOR(RED) "20 Rupees" COLOR(DEFAULT) " för en styck?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tugg tugg tugg...\n"
"Vad sägs om några" COLOR(RED) "Magiska Bönor" COLOR(DEFAULT) "?\n"
"De börjar bli rätt så\n"
"populära..." BOX_BREAK COLOR(RED) "30 Rupees" COLOR(DEFAULT) " för en styck.\n"
"Vad sägs?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tugg tugg tugg...\n"
"Vad sägs om några" COLOR(RED) "Magiska Bönor" COLOR(DEFAULT) "?\n"
"Alla vill köpa dem!" BOX_BREAK COLOR(RED) "40 Rupees" COLOR(DEFAULT) " för en styck.\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4062, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tugg tugg tugg...\n"
"Det är vi som säljer de populära " COLOR(RED) "Magiska Bönorna" COLOR(DEFAULT) "!\n"
"Du kommer att ångra dig ifall du inte \n"
"köper dem nu!" BOX_BREAK COLOR(RED) "50 Rupees" COLOR(DEFAULT) " för en styck.\n"
"(tillfälligt pris.)\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tugg tugg tugg...\n"
"Detta är de superpopulära \n"
COLOR(RED) "Magiska Bönorna" COLOR(DEFAULT) "! Ifall du undrar \n"
"så kommer de snart att sälja slut!" BOX_BREAK "Superpris!\n"
COLOR(RED) "60 Rupees" COLOR(DEFAULT) " för en styck!\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tugg tugg tugg...\n"
"Vi säljer de superovanliga \n"
COLOR(RED) "Magiska Bönorna" COLOR(DEFAULT) "! Detta kan bli din\n"
"sista chans!" BOX_BREAK "Specialpris!\n"
COLOR(RED) "70 Rupees" COLOR(DEFAULT) " för en styck!\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4065, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tugg tugg tugg...\n"
"Vi har de legendariska \n"
COLOR(RED) "Magiska Bönorna" COLOR(DEFAULT) "! Nu har just DU chansen \n"
"att köpa dem!" BOX_BREAK "Superpris!\n"
COLOR(RED) "80 Rupees" COLOR(DEFAULT) " för en styck!\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4066, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tugg tugg tugg...\n"
"Vill du köpa..." COLOR(RED) "Magiska Bönor" COLOR(DEFAULT) "?! \n"
"De är inte billiga, men...vill du\n"
"vill du fortfarande köpa?" BOX_BREAK "Jag kan inte släppa dem för mindre än\n"
COLOR(RED) "90 Rupees" COLOR(DEFAULT) " styck!\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4067, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tugg tugg tugg...\n"
"Vi har..." COLOR(RED) "Magiska Bönor" COLOR(DEFAULT) "! \n"
"Du vill ha dem...va? va?" BOX_BREAK COLOR(RED) "100 Rupees" COLOR(DEFAULT) " för en styck!\n"
"Hahaha!\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4068, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jaha...\n"
"Tugg tugg..."
)

DEFINE_MESSAGE(0x4069, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du har inte tillräckligt med pengar.\n"
"Jag kan inte sälja dem till dig.\n"
"Tugg tugg..."
)

DEFINE_MESSAGE(0x406A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Placera en böna på " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "och använd den på\n"
"jorden här."
)

DEFINE_MESSAGE(0x406B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, ledsen! Vi är slutsålda!\n"
"Tugg tugg...Va?\n"
"Åh, de där bönorna är inte till salu!"
)

DEFINE_MESSAGE(0x406C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om du vill plantera bönor, gå\n"
"runt och leta efter mjuk jord.\n"
"Tugg tugg tugg."
)

DEFINE_MESSAGE(0x406D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du kanske inte har märkt det, men jag\n"
"har hållit ett öga på dig. Du dök \n"
COLOR(RED) "1 meter" COLOR(DEFAULT) " precis nu. Men jag skulle \n"
"inte kalla det för ett riktigt dyk."
)

DEFINE_MESSAGE(0x406E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du kanske inte har märkt det, men jag\n"
"har hållit ett öga på dig. Du dök \n"
COLOR(RED) "2 meter" COLOR(DEFAULT) " precis nu. Men jag skulle \n"
"inte kalla det för ett riktigt dyk."
)

DEFINE_MESSAGE(0x406F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du kanske inte har märkt det, men jag\n"
"har hållit ett öga på dig. Du dök \n"
COLOR(RED) "3 meter" COLOR(DEFAULT) " precis nu. Men jag skulle \n"
"inte kalla det för ett riktigt dyk."
)

DEFINE_MESSAGE(0x4070, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du kanske inte har märkt det, men jag\n"
"har hållit ett öga på dig. Du dök \n"
COLOR(RED) "4 meter " COLOR(DEFAULT) "precis nu. Fortfarande \n"
"inte tillräckligt djupt!"
)

DEFINE_MESSAGE(0x4071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du kanske inte har märkt det, men jag\n"
"har hållit ett öga på dig. Du dök \n"
COLOR(RED) "5 meter " COLOR(DEFAULT) "precis nu. Fortfarande \n"
"inte tillräckligt djupt!"
)

DEFINE_MESSAGE(0x4072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du kanske inte har märkt det, men jag\n"
"har hållit ett öga på dig. Du dök \n"
COLOR(RED) "6 meter" COLOR(DEFAULT) " precis nu. Du borde kunna\n"
"dyka djupare!"
)

DEFINE_MESSAGE(0x4073, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du kanske inte har märkt det, men jag\n"
"har hållit ett öga på dig. Du dök \n"
COLOR(RED) "7 meter" COLOR(DEFAULT) " precis nu. Du borde kunna\n"
"dyka djupare!"
)

DEFINE_MESSAGE(0x4074, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du kanske inte har märkt det, men jag\n"
"har hållit ett öga på dig. Du \n" COLOR(RED) "vidrörde \n"
"botten " COLOR(DEFAULT) "precis nu.  Fantastiskt!\n"
"Du får den här utav mig!"
)

DEFINE_MESSAGE(0x4075, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du är bäst på att dyka i hela \n"
"världen. Vad sägs om att dyka till \n"
"botten av Hyliasjön?"
)

DEFINE_MESSAGE(0x4076, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Mitt namn är " COLOR(RED) "Pierre" COLOR(DEFAULT) ", den vandrande\n"
"fågelskrämman. Egentligen så önskar jag\n"
"vandra runt och leta efter vackra låtar,\n"
"men jag är rädd att jag sitter fast här."
)

DEFINE_MESSAGE(0x4077, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Fantastisk låt! Den vidrörde mitt \n"
"hjärta!" EVENT
)

DEFINE_MESSAGE(0x4078, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Om du kommer på en vacker låt,\n"
"kom då tillbaka och låt mig höra den!" EVENT
)

DEFINE_MESSAGE(0x4079, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Den låten du först spelade för mig\n"
"finns kvar i mitt hjärta. Får jag\n"
"höra den igen?!" EVENT
)

DEFINE_MESSAGE(0x407A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Den låtem du spelade för mig \n"
"stannar i mitt hjärta!" EVENT
)

DEFINE_MESSAGE(0x407B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Så, vill du gå och fiska \n"
"för " COLOR(RED) "20 Rupees" COLOR(DEFAULT) "?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x407C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Åh, nej! Du har inte en " COLOR(RED) "Rumble \n"
"Pak" COLOR(DEFAULT) "! Med en Rumble Pak, så kan\n"
"du känna vibrationerna från en fisk som\n"
"fastnar på kroken." BOX_BREAK "Det blir inga vibrationer för din del!" EVENT
)

DEFINE_MESSAGE(0x407D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Wow! du har en " COLOR(RED) "Rumble Pak" COLOR(DEFAULT) "!\n"
"Idag så kan du känna vibrationerna,\n"
"unge man!" EVENT
)

DEFINE_MESSAGE(0x407E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hrmf! Du har inte tillräcklgt \n"
"med pengar."
)

DEFINE_MESSAGE(0x407F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Okej, lyssna här!" BOX_BREAK "Gå till kanten av vattnet och\n"
"tryck " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " för att titta på en fisk." BOX_BREAK "Medan du ser på en fisk, så kan du \n"
"kasta en lina med " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) ". Tryck " COLOR(BLUE) "[A]\n"
COLOR(DEFAULT) "för att bromsa linan." BOX_BREAK "Då draget faller ned i vattnet \n"
"så kan du lirka det med " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ".\n"
"Om du är nybörjare, så kan du även\n"
"använda " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "." BOX_BREAK "Veva in draget med " COLOR(BLUE) "[A]" COLOR(DEFAULT) ". Håll \n"
"ned " COLOR(BLUE) "[A]" COLOR(DEFAULT) " och " COLOR(LIGHTBLUE) "[R] " COLOR(DEFAULT) "för att veva in det \n"
"snabbare." BOX_BREAK "Om du känner av en träff, tryck " COLOR(BLUE) "[A]" COLOR(ADJUSTABLE) " " COLOR(DEFAULT) "och\n"
COLOR(LIGHTBLUE) "[Control-Pad] ned " COLOR(DEFAULT) "för att sätta kroken.\n"
"Efter det, veva in den med " COLOR(BLUE) "[A]" COLOR(DEFAULT) "." BOX_BREAK "förstår du?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4080, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag är så generös, så att jag låter\n"
"dig fiska hur länge du vill. Fast,\n"
"du kan endast behålla en fisk." BOX_BREAK "Den största fisken du har fångat här\n"
"vägde " COLOR(RED)  FISH_INFO " pund" COLOR(DEFAULT) "." BOX_BREAK "Efter du kastar, så kan du ändra\n"
"din vy med " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "." BOX_BREAK SHIFT("\x41") "Då fiskar vi!" EVENT
)

DEFINE_MESSAGE(0x4081, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hah ha haah!\n"
"Satte du kroken genom att trycka\n"
COLOR(BLUE) "[A]" COLOR(DEFAULT) " och " COLOR(LIGHTBLUE) "[Control-Pad] ned" COLOR(DEFAULT) "?"
)

DEFINE_MESSAGE(0x4082, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Va, vad hände?\n"
"Du tappade den!" FADE("\x3C")
)

DEFINE_MESSAGE(0x4083, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Ja, ja...den väger typ " COLOR(RED)  FISH_INFO " pund" COLOR(DEFAULT) ". \n"
"Vill du behålla den?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4084, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vad vill du?\n"
THREE_CHOICE  COLOR(ADJUSTABLE) "Väg min fisk.\n"
"Vi pratar om någonting.\n"
"Jag vill avsluta." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4085, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag är seriös! Enbart passion\n"
"fångar inte många fiskar!!"
)

DEFINE_MESSAGE(0x4086, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x4B") "OJ!" BOX_BREAK "Den här fisken är enorm! Det ser ut som \n"
"ett nytt rekord! Den väger minst \n"
COLOR(RED)  FISH_INFO " pund" COLOR(DEFAULT) "! Seriöst! \n"
"Okej, här får du ditt pris!" EVENT
)

DEFINE_MESSAGE(0x4087, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Va? \n"
"Vad gör du med mig?!" FADE("\x3C")
)

DEFINE_MESSAGE(0x4088, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hallå där, unge man! Har du inte \n"
"någonting viktigt som du måste\n"
"göra?" BOX_BREAK "Va? Säger du att det är mycket \n"
"roligare att leka här?" BOX_BREAK "Jag har sett många fördärva\n"
"sina liv med den attityden.\n"
"Jag är helt seriös!\n"
"Ja ja..."
)

DEFINE_MESSAGE(0x4089, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Den största fisken som fångats\n"
"i den här dammen vägde " FISH_INFO " pund.\n"
"Fiskaren namn var: " NAME  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x408A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vill du fortsätta att fiska?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x408B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"¨Ptja, den väger " COLOR(RED)  FISH_INFO " pund" COLOR(DEFAULT) "...\n"
"Inte illa, men det finns större\n"
"fiskar där i!" EVENT
)

DEFINE_MESSAGE(0x408C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hallå, kom igen! Du har ju ingen fisk!\n"
"Äsch!" EVENT
)

DEFINE_MESSAGE(0x408D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vill du prova ett annat drag?\n"
"Vad snackar du om? Är du verkligen\n"
"så självisk?" BOX_BREAK "Har du inte hört uttrycket,\n"
"\"En bra fiskare väljer aldrig\n"
"sitt eget drag?\""
)

DEFINE_MESSAGE(0x408E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vad? Vill du höra några \n"
"fiskehemligheter? Jag kan inte berätta\n"
"det för dig. De är företagshemligheter.\n"
"Helt seriöst!"
)

DEFINE_MESSAGE(0x408F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Vad? Vill du veta om jag är en \n"
"bra fiskare?" BOX_BREAK "Självklart så är jag det!\n"
"Jag är ett riktigt proffs?\n"
"Det är så sant som det är sagt!"
)

DEFINE_MESSAGE(0x4090, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Regler och Reglementen\n" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "1. Använd inte sjunkdrag.\n"
"2. Skräpa inte ned.\n"
"3. Gå tyst." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "4. Kasta inte på någon annan." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x4091, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Wow! Detta var en riktig gammelgädda!\n"
"Låt se...den väger\n"
COLOR(RED)  FISH_INFO " pund" COLOR(DEFAULT) "!" BOX_BREAK "Vill du behålla den?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4092, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Kom tillbaka då du är äldre!\n"
"Fiskarna kommer att vara större\n"
"då med...Eller...Kanske."
)

DEFINE_MESSAGE(0x4093, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hallå där, herrn! Jag kommer ihåg dig!\n"
"Det var länge sedan sist!" BOX_BREAK UNSKIPPABLE "Hur många år sedan är det?\n"
"Sju år?! Vad har du haft för dig\n"
"under den här tiden?!" BOX_BREAK UNSKIPPABLE "Du är min enda kund. Jag har \n"
"nästan varit tvungen att stänga ned!\n"
"På allt detta så har mitt hår..." BOX_BREAK UNSKIPPABLE "Öh, jag menar, glöm det..." BOX_BREAK UNSKIPPABLE "Så, vill du fiska?\n"
"Det kostar endast " COLOR(RED) "20 Rupees" COLOR(DEFAULT) "!\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4094, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Va?" BOX_BREAK "Du vill gå och fiska i \n"
"en annan fiskedamm?!\n"
"Vad snackar du om?" BOX_BREAK "Jag kommer ju att bli ruinerad\n"
"om inte du fiskar här!\n"
"Jag är helt seriös!"
)

DEFINE_MESSAGE(0x4095, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Va?" BOX_BREAK "Vill du veta varför jag \n"
"kliar mig hela tiden?\n"
"Vad snackar du om?" BOX_BREAK "Jag har faktiskt ingen aning.\n"
"Jag är helt seriös!"
)

DEFINE_MESSAGE(0x4096, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Va?" BOX_BREAK "Säger du att du inte kan\n"
"se fiskarna för att vattnet\n"
"är dammigt?" BOX_BREAK "Vad snackar du om?\n"
"Det här är ju den bästa tiden \n"
"på dygnet för att fiska!" BOX_BREAK "Du kan kroka fast en fisk\n"
"rätt som det är då du minst anar det.\n"
"Nu blev jag riktigt peppad!" BOX_BREAK "Seriöst.  det blev jag!"
)

DEFINE_MESSAGE(0x4097, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hallå där, vad håller du på med?\n"
"Jag sade ju åt dig att inte göra så!\n"
"Fy vad odräglig du är!\n"
"Seriöst!" BOX_BREAK "Ge tillbaka min hatt!\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Okej\n"
"Aldrig i livet!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4098, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Va? Jaha? Åhå?\n"
"Jag tror att fisken du redan\n"
"hade var större än den här..." BOX_BREAK "Vill du fortfarande behålla den?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Nä, jag vill inte ha den\n"
"Ja, jag vill behålla den ändå" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x4099, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oj då! Det var då en konstig fisk\n"
"du fångade där! Som grädde på moset\n"
"så väger den " COLOR(RED)  FISH_INFO " pund" COLOR(DEFAULT) "!" BOX_BREAK "Vad vill du göra med den?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Behåll den ändå\n"
"Jag vill inte ha den" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x409A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Wow!" BOX_BREAK "Är det här vad jag tror det är?\n"
"Häpnadsväckande!\n"
"Du drog upp ett " COLOR(RED) "sjunkdrag" COLOR(DEFAULT) "!" BOX_BREAK "Vad vill du göra med det?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Använd det nu.\n"
"Gör dig av med det." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x409B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Men ser man på..." BOX_BREAK "WOW! Vilken ovanlig fisk!\n"
"Det här är en " COLOR(RED) "Hyrulelax" COLOR(DEFAULT) "!" BOX_BREAK "Vad gäller denna fisk, så spelar \n"
"storleken ingen roll. Du har förtjänat \n"
"det här priset!" EVENT
)

DEFINE_MESSAGE(0x409C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Senaste tiden, så har antalet\n"
"fiskar minskat oerhört mycket,\n"
"så jag släpper lös den här." EVENT
)

DEFINE_MESSAGE(0x409D, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Regler och Reglementen\n"
"1. Använd inte sjunkdrag.\n"
"2. Skräpa inte ned.\n"
"3. Gå tyst." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x409E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hallå där!\n"
"Du kan inte ta med dig ett spö\n"
"härifrån!" BOX_BREAK "Återlämna spöet vid disken \n"
"då du slutar fiska.\n"
"Jag är helt seriös!"
)

DEFINE_MESSAGE(0x409F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh min store!\n"
"Den här fisken är gigantisk!!" BOX_BREAK "En sådan här fisk får inte ens\n"
"plats på skärmen, och jag kan inte väga\n"
"den ordentligt, men den ser ut att\n"
"väga " COLOR(RED)  FISH_INFO " pund" COLOR(DEFAULT) "!!" BOX_BREAK "Du vill definitivt behålla den,\n"
"eller?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Behåll den\n"
"Behåll den inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x40A0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Tja snäckan!\n"
"Jag heter " COLOR(RED) "Bonooru" COLOR(DEFAULT) ", fågelskrämman!\n"
"Du har förmodligen hört om mitt\n"
"fantastiska minne!" BOX_BREAK "Om du har en ny låt,\n"
"så kör igång!" BOX_BREAK "Denna låten spelade du för mig \n"
"sist, snäckan!" BOX_BREAK "Kör igång!" EVENT
)

DEFINE_MESSAGE(0x40A1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag heter " COLOR(RED) "Bonooru" COLOR(DEFAULT) ", fågelskrämman!\n"
"Ett musikaliskt geni!\n"
"Hör jag en låt, Så glömmer\n"
"jag aldrig bort den, snäckan!"
)

DEFINE_MESSAGE(0x40A2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Spela den vanliga låten\n"
"för att kalla på Pierre!\n"
"Om han är i närheten, så kommer\n"
"han för att hjälpa dig, snäckan!"
)

DEFINE_MESSAGE(0x40A3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hej! Är inte du den där älvpojken\n"
"som jag mötte för länge sedan?\n"
"Wow, du har vuxit, snubben!" BOX_BREAK "Ptja, här är din låt..." BOX_BREAK "Va?" BOX_BREAK "Nej, jag glömmer aldrig!\n"
"Du, det var du som glömde...\n"
"eller hur? Om du har en \n"
"Okarina, så spela den låten, snäckan!"
)

DEFINE_MESSAGE(0x40A4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Tjoho! You have an okarina!\n"
"Men du, vad sägs om att du drar\n"
"en låt på den för mig, snäckan?!" EVENT
)

DEFINE_MESSAGE(0x40A5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Ptja...inte illa!\n"
"Jag ska komma ihåg den åt dig \n"
"i alla fall!" BOX_BREAK "Jag menar, jag kan inte enbart komma\n"
"ihåg åtta noter, men vi håller oss till\n"
"det för tillfället, snäckan!" EVENT
)

DEFINE_MESSAGE(0x40A6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Spelar du sådär illa så kommer\n"
"du aldrig att röra den här\n"
"fågelskrämmans hjärta, snäckan!" EVENT
)

DEFINE_MESSAGE(0x40A7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"OH YEAHHH!!\n"
"Precis så, där har vi låten!!\n"
"Du rockar!! Jag är helt såld!" BOX_BREAK "Åh, nej, nej! Jag glömde aldrig\n"
"låten...Jag glömmer aldrig något!\n"
"Men just nu känner jag för att\n"
"belöna dig, snäckan!" BOX_BREAK "........\n"
"Jag har en bra idé!" BOX_BREAK "Min polare Pierre vandrar\n"
"omkring, så spela den låten då\n"
"du vill kalla på honom!" BOX_BREAK "Jag ska säga åt honom att\n"
"hjälpa dig om han är i närheten, snäckan!" EVENT
)

DEFINE_MESSAGE(0x40A8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Se där, Det är ju Okarinan!\n"
"Spela en låt med den,\n"
"snäckan!" EVENT
)

DEFINE_MESSAGE(0x40A9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x28\xE4") "Unge man, du spelar väldigt\n"
"bra på din okarina...! Den melofin är \n"
"så fin...kväk! Vi alla borde öva\n"
"på den tillsammans, kväk!" BOX_BREAK "Ta emot Rupees som en souvenir!\n"
"Om du kommer på en annan fin \n"
"melodi, så kom tillbaka och spela\n"
"den för oss...kväk kväk!" EVENT
)

DEFINE_MESSAGE(0x40AA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x28\xE3") "Wow, den melodin är så grym! \n"
"Kväk!" BOX_BREAK "Ned faller regnet, ned faller regnet,\n"
"spolar spindeln bort! \n"
"Kvvääääk!!" BOX_BREAK "Var snäll och ta emot detta som\n"
"ett tecken på vår grodiska tacksamhet, kväk!\n"
"Då så. Vi ses, kväk!" EVENT
)

DEFINE_MESSAGE(0x40AB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x28\xE4") "Se på oss, vi är stora grodor allihop!!\n"
"Vi är de världskända fabulösa\n"
"Fem Grodiska Tenorerna!!\n"
"Kvväääk!!" BOX_BREAK "Få oss att hoppa så vi kan äta \n"
"krypen som flyger över oss, kväääk!" BOX_BREAK "Okej? \n"
"Ett, två, tre, kör!" EVENT
)

DEFINE_MESSAGE(0x40AC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x28\xE3") "Unga pojke, Du gjorde brrraa ifrån dig!\n"
"Perrrrrfekt!\n"
"Nu är vi mätta, kväk!" BOX_BREAK "Vill du ha detta som ett tecken\n"
"på vår tacksamhet?" EVENT
)

DEFINE_MESSAGE(0x40AD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jaha, jag kommer inte ihåg \n"
"den låten, snäckan.\n"
"Varför? Jag har ingen aning!\n"
"Herre min skapare!"
)

DEFINE_MESSAGE(0x40AE, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Den största fisken som fångats\n"
"i den här dammen vägde " FISH_INFO " pund.\n"
"Fiskaren var: dammens ägare" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x40AF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Va?\n"
"Vill du fiska med ett \n"
"annat drag?\n"
"...Hallå, vad är det där?" BOX_BREAK "Va? Du plockade ju precis upp det?\n"
"I vanliga fall, så säger reglerna att man\n"
"inte får använda en sådan där. I vanliga fall.\n"
"Men, vad sjutton..."
)

DEFINE_MESSAGE(0x40B0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"TJOHOOO!\n"
"Den är ENORM!! Ett nytt rekord!!\n"
"Den...Den väger så mycket som...\n"
COLOR(RED)  FISH_INFO " pund" COLOR(DEFAULT) "!!" BOX_BREAK "Meeeen! Det där sjunkdraget\n"
"är emot reglerna!\n"
"Så, inget pris för din del.\n"
"Haaaa ha ha ha ha!" EVENT
)

DEFINE_MESSAGE(0x40B1, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Den största fisken som fångats\n"
"i den här dammen vägde " FISH_INFO " pund.\n"
"Fiskaren var: " NAME "\n"
"(NOTERING: Med ett illegalt sjunkdrag.)" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x40B2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du är ett godhjärtat barn!\n"
"Men berätta inte det för någon.\n"
"Seriöst!" EVENT
)

DEFINE_MESSAGE(0x40B3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"VAAAAA?!?" BOX_BREAK "Varför gör du såhär mot mig?\n"
"Vad tänker du med egentligen?" BOX_BREAK "Du kommer inte att slippa undan\n"
"så enkelt! Du måste betala mig \n"
COLOR(RED) "50 Rupees " COLOR(DEFAULT) "i böter!\n"
"Seriöst!" EVENT
)

DEFINE_MESSAGE(0x5000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "GYAAAAH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED("\x02")  QUICKTEXT_ENABLE "Du" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "dödade" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "mig!!" QUICKTEXT_DISABLE  TEXT_SPEED("\x00") "\n"
"Va? Åh, det är ju du." BOX_BREAK "Försökte du att spela \n"
COLOR(YELLOW) "Solens Visa" COLOR(DEFAULT) "?" BOX_BREAK "Som jag sa till dig innan, med den \n"
"visan, så kan du göra dag till natt \n"
"eller natt till dag när du så än \n"
"önskar." BOX_BREAK "Då du befinner dig i mörker, så \n"
"kan den visan bringa dig solljus.\n"
"Gör ett försök."
)

DEFINE_MESSAGE(0x5001, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_TOP,
QUICKTEXT_ENABLE "Då jag grävde ett hål, så hittade \n"
"en skatt man kan töja--BOING!\n"
"och som krymper--BOING! Det är jättekul, \n"
"Jag kommer aldrig att ge den till någon!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x5002, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_TOP,
COLOR(RED) "Gravvårdarens dagbok " COLOR(DEFAULT) "finns här.\n"
"Vill du läsa den?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x5003, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_TOP,
QUICKTEXT_ENABLE "Du som läser detta, kom in i\n"
"min grav. Jag låter dig ta min\n"
"töjbara, krympande " COLOR(RED) "minnessak" COLOR(DEFAULT) "." QUICKTEXT_DISABLE  BOX_BREAK QUICKTEXT_ENABLE "Jag väntar på dig.\n"
"--Dampé" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x5004, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE "Du bestämde dig för att inte läsa..." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x5005, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Du besegrade spöket Poe!" BOX_BREAK "Vill du fånga det i \n"
"en flaska?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x5006, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Du vill fånga det men\n"
"du saknar en tom flaska."
)

DEFINE_MESSAGE(0x5007, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Du släpper lös den tills vidare."
)

DEFINE_MESSAGE(0x5008, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"Du fångade en Poe!"
)

DEFINE_MESSAGE(0x5009, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x04") "Den annalkande solnedgången är snart kommen  ,\n"
SHIFT("\x19") "Ett nyfött liv bleknar bort." QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x05") "Från sol till måne, måne till sol..." QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x25") "Skänk inre ro till\n"
SHIFT("\x37") "till de levande döde." QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Detta är en intressant dikt...\n"
"eller hur?"
)

DEFINE_MESSAGE(0x500A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x24") "Rastlösa själar vandrar\n"
SHIFT("\x1E") "där de ej hemma hör,\n"
SHIFT("\x27") "skänk dem tröst\n"
SHIFT("\x36") "med " COLOR(YELLOW) "Solens Visa" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x500B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Någonting är inristat i \n"
"gravstenen..." BOX_BREAK UNSKIPPABLE "Det är Kompositörbrödernas " COLOR(YELLOW) "hemliga melodi." COLOR(DEFAULT)
)


DEFINE_MESSAGE(0x500C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Den Ultimata brygden! Vad sägs om\n"
COLOR(RED) "100 Rupees" COLOR(DEFAULT) "?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Köp\n"
"Köp inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x500D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Om du ångrar dig så kom \n"
"tillbaka och hälsa på mig...\n"
"Hihihi!"
)

DEFINE_MESSAGE(0x500E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du har inte tillräckligt med Rupees!\n"
"Hihihi!"
)

DEFINE_MESSAGE(0x500F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "GYAAAAH!\n"
TEXT_SPEED("\x02")  QUICKTEXT_ENABLE "DU" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "DÖDADE" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "MIG..." QUICKTEXT_DISABLE  TEXT_SPEED("\x00")  QUICKTEXT_ENABLE "Otroligt!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Åh, va?\n"
"Du är inte en utav Ganondorfs \n"
"män, eller?" BOX_BREAK UNSKIPPABLE "På grund utav min roll som spöke, så\n"
"var jag tvungen att bete mig som ett. Ursäkta." BOX_BREAK UNSKIPPABLE "Då så, låt mig presentera mig själv.\n"
"Ahem..." TEXTID("\x50\x10")
)

DEFINE_MESSAGE(0x5010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är en utav de spökliga Kompositör- \n"
"bröderna från Kakarikobyn." BOX_BREAK "Alla i den byn är\n"
"födda att tjäna den Kungliga Familjen av\n"
"Hyrule." BOX_BREAK "Vi bröder tjänade också den Kungliga \n"
"Familjen, vi tilldelades arbetet att \n"
"studera de nedärvda mystiska krafter \n"
"som familjen besitter." BOX_BREAK "Även om vi inte kunde lista ut\n"
"den kraft som Trekraften besitter," BOX_BREAK "så hade vi nästan färdigställt vår\n"
COLOR(RED) "forskning i att kontrollera tid" COLOR(DEFAULT) " med hjälp utav\n"
"tonerna från en Okarina." BOX_BREAK "Öh, Jag menar..." BOX_BREAK "Egentligen så blev vi\n"
"klara!" BOX_BREAK "Vi skulle ha blivit berömda, om \n"
"det inte hade varit för att den där hätska Ganondorf\n"
"försökte stjäla våra resultat." BOX_BREAK "Vi skulle aldrig kunna låta \n"
"honom skörda frukterna utav vår forskning!" BOX_BREAK "Det var därför som vi gav vårt \n"
"liv för att skydda hemligheten." TEXTID("\x50\x11")
)

DEFINE_MESSAGE(0x5011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vill du höra vad jag hade \n"
"att säga igen?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x5012, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "GYAAAAH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED("\x02")  QUICKTEXT_ENABLE "JAG ÄR" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "DÖD" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "I" QUICKTEXT_DISABLE  QUICKTEXT_ENABLE "GEN!" QUICKTEXT_DISABLE  TEXT_SPEED("\x00") "\n"
"Va? Du igen?" BOX_BREAK UNSKIPPABLE "Du påminner mig om...\n"
"Prinsessan Zelda, på något vis..." BOX_BREAK UNSKIPPABLE "Hmm... Då du verkar ha något form utav band\n"
"till den Kungliga Familjen, så\n"
"ska jag berätta lite mer om oss\n"
"för dig." BOX_BREAK UNSKIPPABLE "På den tiden, så kallades vi för\n"
"stora kompositörer på grund av de många \n"
"musikaliska mästerverk vi skrev." BOX_BREAK UNSKIPPABLE "Fast vi bröder var inte bara \n"
"kompositörer." BOX_BREAK UNSKIPPABLE "Vi hade en uppgift att undersöka\n"
"de mystiska krafter som den\n"
"Kungliga Familjen besitter." BOX_BREAK UNSKIPPABLE "Våra namn hade blivit en del \n"
"utav Hyrules historia om vi hade \n"
"färdigställt vårt arbete!" BOX_BREAK UNSKIPPABLE "Vi var extremt hemliga med \n"
"vårt arbete fram tills att vi var färdiga." TEXTID("\x50\x14")
)

DEFINE_MESSAGE(0x5013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "GYAAAAH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED("\x02")  QUICKTEXT_ENABLE "JAG ÄR" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "DÖD" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "I" QUICKTEXT_DISABLE  QUICKTEXT_ENABLE "GEN!" QUICKTEXT_DISABLE  TEXT_SPEED("\x00") "\n"
"Va? Du igen?" BOX_BREAK UNSKIPPABLE "Du påminner mig om...\n"
"Prinsessan Zelda, på något vis..." BOX_BREAK UNSKIPPABLE "Hmm... Då du verkar ha något form utav band\n"
"till den Kungliga Familjen, så\n"
"ska jag berätta lite mer om oss\n"
"för dig." TEXTID("\x50\x14")
)

DEFINE_MESSAGE(0x5014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om jag ska vara ärlig, så studerade\n"
"vi var sin visa, en\n"
"för att " COLOR(RED) "åkalla solen" COLOR(DEFAULT) " och en annan för att\n"
COLOR(RED) "åkalla månen" COLOR(DEFAULT) "." BOX_BREAK "Om en medlem utav den Kungliga\n"
"Familjen verkligen har skickat dig, så ska\n"
"jag berätta för dig om forskningens\n"
"resultat." BOX_BREAK "Vi ristade in den i på den " COLOR(RED) "kungliga\n"
"gravstenen" COLOR(DEFAULT) "." BOX_BREAK "Som budbärare för den Kungliga \n"
"Familjen, så bör du visa upp ditt\n"
"Kungliga intyg då du står på \n"
"Trekraftens märke..." TEXTID("\x50\x11")
)

DEFINE_MESSAGE(0x5015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Z Z Z..." BOX_BREAK "Malon...hur går det...\n"
"Mummel...mummel...\n"
"Ledsen att jag oroar dig..."
)

DEFINE_MESSAGE(0x5016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ingo tog över Lon Lon-Ranchen och\n"
"bytte namn på den till " COLOR(RED) "Ingos Ranch " COLOR(DEFAULT) "." BOX_BREAK "Jag blev utsparkad, och\n"
"se på mig nu! Min flicka, Malon, \n"
"jobbar fortfarande på ranchen..." BOX_BREAK "Jag oroar mig över henne..."
)

DEFINE_MESSAGE(0x5017, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Räddade du Malon? Tack!\n"
"I så fall så går jag tillbaka dit, nu!\n"
"Yeehah!"
)

DEFINE_MESSAGE(0x5018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  QUICKTEXT_ENABLE "Hallå där grabben!" QUICKTEXT_DISABLE "\n"
"Stöka inte runt bland \n"
"gravarna!" BOX_BREAK UNSKIPPABLE "Mitt namn är " COLOR(RED) "Gravvårdaren Dampé" COLOR(DEFAULT) "!\n"
"Mitt ansikte kan vara läskigt, men jag är\n"
"ingen dålig person..." BOX_BREAK UNSKIPPABLE "Låt mig ge dig lite reklam\n"
"för mitt yrke vid sidan om..." BOX_BREAK UNSKIPPABLE  COLOR(RED) "Gravvårdaren Dampés" COLOR(DEFAULT) "\n"
"Hjärtpumpande" COLOR(LIGHTBLUE) " Gravgrävar-rundtur " COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Vad kommer fram?!\n"
"Vad kommer fram?!\n"
"Då jag börjar gräva,\n"
"Låt oss se!" TEXTID("\x50\x19")
)

DEFINE_MESSAGE(0x5019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vill du att jag gräver ett hål här?\n"
COLOR(RED) "10 Rupees" COLOR(DEFAULT) " för ett hål.\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Gör det inte" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x501A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(RED) "Nepp, ingenting här!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x501B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Håll dig undan, " NAME "!"
)

DEFINE_MESSAGE(0x501C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME "....\n"
"En fruktansvärd sak har inträffat!\n"
"Den " COLOR(RED) "onda skugganden" COLOR(DEFAULT) " har\n"
"släppts lös!" BOX_BREAK UNSKIPPABLE  COLOR(RED) "Impa" COLOR(DEFAULT) ", Kakarikobyns ledare,\n"
"hade förseglat den onda skugganden\n"
"i botten av brunnen...." BOX_BREAK UNSKIPPABLE "Men kraften hos den onda anden\n"
"blev så stark att inseglet i brunnen\n"
"gick sönder, och den rymde ut\n"
"i världen!!"
)

DEFINE_MESSAGE(0x501D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Låt mig ta hand om byn!\n"
"Jag litar på dig,\n"
NAME "!"
)

DEFINE_MESSAGE(0x501E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x23") "De Kungliga Kompositörbröderna.\n"
SHIFT("\x37") "Sharp den Äldre\n"
SHIFT("\x50") "R.I.P." QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x501F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x23") "De Kungliga Kompositörbröderna.\n"
SHIFT("\x33") "Flat den Yngre\n"
SHIFT("\x50") "R.I.P." QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x5020, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x28") "Kungliga Familjens Grav" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x5021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x1A") "Den här dikten är tillägnad\n"
"minnet av de medlemmar utav den Kungliga\n"
SHIFT("\x10") "Familjen som ej längre är med oss." QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x5022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Pojken med den ädla Prinsessan \n"
"Zeldas Okarina...som jag förväntade mig, \n"
"du har kommit." BOX_BREAK UNSKIPPABLE "Jag är " COLOR(RED) "Impa" COLOR(DEFAULT) ", en utav Sheikah.\n"
"Jag är Prinsessan Zeldas tjänare,\n"
"jag är även den Vise som\n"
"vakar över Skuggtemplet."
)

DEFINE_MESSAGE(0x5023, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE "Var snäll och se efter rinsessan Zelda!" FADE("\x32")
)

DEFINE_MESSAGE(0x5024, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  NAME ", hjälten!" BOX_BREAK UNSKIPPABLE "Äntligen, så har alla vi " COLOR(RED) "sex Vise" COLOR(DEFAULT) ", \n"
"vaknat upp!\n"
"Striden mot Ondskans Konung\n"
"har äntligen kommit!" BOX_BREAK UNSKIPPABLE "Men först, så bör du träffa\n"
"den som väntar på dig...\n"
BOX_BREAK UNSKIPPABLE "Den som väntar på dig i\n"
COLOR(LIGHTBLUE) "Tidens Tempel" COLOR(DEFAULT) "...."
)

DEFINE_MESSAGE(0x5025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Vi Sheikah har tjänat Hyrules \n"
"kungligheter genom många generationer.\n"
"Fast..." BOX_BREAK UNSKIPPABLE "På den dagen för sju år sedan,\n"
"så attackerade Ganondorf plötsligt...\n"
"och slottet Hyrule gav upp\n"
"kort därefter." BOX_BREAK UNSKIPPABLE "Ganondorfs mål var att få en utav\n"
"nycklarna till det Heliga Kungariket...\n"
"den Kungliga Familjens gömda skatt...\n"
"...Tidsokarinan!" BOX_BREAK UNSKIPPABLE "Min plikt blev att föra Zelda \n"
"dit Ganondorf inte kunde nå henne." BOX_BREAK UNSKIPPABLE "När jag senaste såg dig, då\n"
"vi flydde ut ur slottet, så var du\n"
"bara en liten pojke..." BOX_BREAK UNSKIPPABLE "Jag kan nu se att du har blivit \n"
"en fin hjälte..."
)


DEFINE_MESSAGE(0x5026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag måste stanna här... Gå till \n"
"Prinsessan Zeldas sida och beskydda \n"
"henne även för min del." BOX_BREAK UNSKIPPABLE "Jag fyller denna " COLOR(BLUE) "Medalj" COLOR(DEFAULT) ",\n"
"med mina krafter, mitt hopp är att de\n"
"ska hjälpa dig!"
)

DEFINE_MESSAGE(0x5027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hur mår din Cucco? Är han glad?\n"
"Ska jag se över honom åt dig?"
)

DEFINE_MESSAGE(0x5028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SFX("\x68\x55") "Jag är " COLOR(RED) "chef över dessa hantverkare\n"
COLOR(DEFAULT) "den där Impa har hyrt in oss för att\n"
"förbättra den här byn och göra den till en riktig\n"
"stad!" BOX_BREAK UNSKIPPABLE "Men dagens ungdom har ingen\n"
"riktig ambition...\n"
"Förstår du vad jag menar grabben?" BOX_BREAK UNSKIPPABLE "Mina arbetare springer bara\n"
"runt i byn hela dagarna, och\n"
"de gör inga riktiga framsteg över\n"
"huvudtaget..." BOX_BREAK UNSKIPPABLE "Till och med min son är \n"
"arbetslös, han gör inget vettigt\n"
"om dagarna!" TEXTID("\x50\x29")
)

DEFINE_MESSAGE(0x5029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "De är helt värdelösa allihop\n"
"ska du veta!!"
)

DEFINE_MESSAGE(0x502A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Se på den där stackars flickan där borta.\n"
"Hon jobbar så hårt med att ta hand om sina \n"
"höns trots att hon får gåshud av att bara\n"
"röra vid dem..." BOX_BREAK "Vilken kämpe! Jag vill \n"
"verkligen hjälpa henne! Den senaste tiden \n"
"så har jag känt mig så välvillig!\n"
"Känner du precis likadant?"
)

DEFINE_MESSAGE(0x502B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Det finns inget att oroa sig över...\n"
"Prinsessan är i säkerhet nu."
)

DEFINE_MESSAGE(0x502C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Snart så träffar du Prinsessan Zelda\n"
"öga mot öga, och då kommer hon att\n"
"förklara allt..." BOX_BREAK UNSKIPPABLE "Det är då som vi, de sex Vise, \n"
"kommer att försegla den Onde Konungen\n"
"och återställa freden i Hyrule."
)

DEFINE_MESSAGE(0x502D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hehehe, unge man...\n"
"Du var väldigt kvick som hängde\n"
"med i mina takter! Hehehe!" BOX_BREAK UNSKIPPABLE "Som belöning, så ska jag ge dig\n"
"min skatt. Den kallas för\n"
COLOR(RED) "Krokskottet" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Det är en fjäderladdad kedja som\n"
"kan dra dig mot en punkt där kroken\n"
"fastnar. Låter inte det häftigt?\n"
"Jag är säker på att den kommer att hjälpa dig!" BOX_BREAK UNSKIPPABLE "Jag bor här nu, så kom tillbaka\n"
"igen någon dag. Jag ger dig\n"
"Någonting häftigt!" BOX_BREAK UNSKIPPABLE "En sak till! Var försiktig\n"
"på din väg tillbaka!\n"
"Heheheh...."
)

DEFINE_MESSAGE(0x502E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du är tillbaka, unge man...\n"
"Var presenten du fick rolig\n"
"och användbar?"
)

DEFINE_MESSAGE(0x502F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x19") "Din tid för detta loppet var\n"
SHIFT("\x4B")  RACE_TIME "!!" EVENT
)

DEFINE_MESSAGE(0x5030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Verkar som att du fixar detta..."
)

DEFINE_MESSAGE(0x5031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag tror att Impa har gått till \n"
COLOR(PURPLE) "Skuggtemplet " COLOR(DEFAULT) "för att försegla det igen,\n"
"men...hon är i fara om hon inte får \n"
"någon hjälp!" BOX_BREAK UNSKIPPABLE  NAME "!\n"
"Impa är en utav de sex Vise.\n"
"Besegra den onda skugganden och\n"
"rädda Impa!" BOX_BREAK UNSKIPPABLE "Där finns en ingång till \n"
"Skuggtemplet under kyrkogården \n"
"här bakom byn." BOX_BREAK UNSKIPPABLE "Det enda jag kan göra för dig är\n"
"att lära dig den visa som ska\n"
"leda dig till Skuggtemplet..." BOX_BREAK UNSKIPPABLE "Denna visa är gjord för att\n"
"dra dig ned i ett oändligt mörker \n"
"som även uppslukar tid... Lyssna noga nu \n"
"till " COLOR(PURPLE) "Skuggors Nokturne" COLOR(DEFAULT) "!!"
)

DEFINE_MESSAGE(0x5032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Snurra runt! Snurra runt runt runt\n"
"och runt igen! Åh så kul! Jag är så \n"
"glad!" BOX_BREAK "Jag är en musikens man\n"
"som tycker om att snurra runt runt!\n"
"Snurra runt runt!!!" BOX_BREAK "Jag försöker att komma på ett\n"
"musikaliskt tema baserat på den här \n"
"vädekvarnen...som snurrar runt runt\n"
"runt och runt igen!!!"
)

DEFINE_MESSAGE(0x5033, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Snurra runt, snurra runt, snurrar runt...\n"
"Va? Nu går det alldeles för fort!"
)

DEFINE_MESSAGE(0x5034, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Grrrrrrrrr!" BOX_BREAK "Jag kommer aldrig att glömma vad som\n"
"hände den dagen, för sju år sedan!\n"
"Grrrrrrrrr!" BOX_BREAK "Allt är den där Okarinakillens fel!\n"
"Nästa gång som han kommer hit,\n"
"så ska jag spöa upp honom ordentligt!"
)

DEFINE_MESSAGE(0x5035, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Va?! Du har en okarina!!" BOX_BREAK UNSKIPPABLE "Vad sjutton!" BOX_BREAK UNSKIPPABLE "Det påminner mig om den där gången\n"
"för sju år sedan!" BOX_BREAK UNSKIPPABLE "Det var en elak liten kille som kom hit \n"
"och spelade en " COLOR(PURPLE) "konstig visa" COLOR(DEFAULT) ".\n"
"Väderkvarnen blev helt tokig efter det!"
)

DEFINE_MESSAGE(0x5036, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vad ska jag göra!?\n"
"Mina " COLOR(RED) "Cuccos" COLOR(DEFAULT) " har flugit iväg allihop!" BOX_BREAK "Du, lilla pojke, snälla!\n"
"Snälla hjällp mig att samla in dem \n"
"till hönsgården igen!"
)

DEFINE_MESSAGE(0x5037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Mina Cuccos har rymt!\n"
"Snälla hjälp mig att samla in de \n"
"fyra andra till hönsgården igen!"
)

DEFINE_MESSAGE(0x5038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Mina Cuccos har rymt!\n"
"Snälla hjälp mig att samla in de \n"
"tre andra till hönsgården igen!"
)

DEFINE_MESSAGE(0x5039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Mina Cuccos har rymt!\n"
"Snälla hjälp mig att samla in de \n"
"två sista till hönsgården igen!"
)

DEFINE_MESSAGE(0x503A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Mina Cuccos har rymt!\n"
"Snälla hjälp mig att samla in den \n"
"sista utav dem till hönsgården igen!"
)

DEFINE_MESSAGE(0x503B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Tack för att du hittade mina Cuccos.\n"
"Jag är allergisk, så jag får \n"
"gåshud bara jag rör vid dem." BOX_BREAK UNSKIPPABLE "Som tack, så ger jag den här\n"
"till dig. Det är jättefint glas, och borde\n"
"komma till användning. Ta väl\n"
"hand om den!" EVENT
)

DEFINE_MESSAGE(0x503C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hallå, vad håller du på med?!\n"
"Se till att samla in dem eller \n"
"betala för dem!" EVENT
)

DEFINE_MESSAGE(0x503D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Reta inte mina Cucco är du snäll!"
)

DEFINE_MESSAGE(0x503E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Jag har avlat fram en ny typ utav \n"
"Miniatyr-Cucco! Jag kallar den för en " COLOR(RED) "Fick-\n"
"Cucco" COLOR(DEFAULT) "! Jag får inte gåshud utav\n"
"den här skönheten." BOX_BREAK UNSKIPPABLE  COLOR(RED) "En Cucco " COLOR(DEFAULT) "blir väldigt lätt \n"
"lat, så de vaknar ofta mycket sent.\n"
"Har du inte hört talas om dem \n"
"tidigare?" BOX_BREAK UNSKIPPABLE "De blir väldigt glada av att gala:\n"
QUICKTEXT_ENABLE  SHIFT("\x38")  COLOR(RED) "CUCKOOO" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"speciellt då de väcker folk som sover \n"
"väldigt tungt!" BOX_BREAK UNSKIPPABLE "Fast, min Cucco är inte riktigt glad\n"
"för tillfället..." BOX_BREAK UNSKIPPABLE "Du..., \n"
"Du ser ut som att du är bra på att \n"
"handskas med Cucco." BOX_BREAK UNSKIPPABLE "Här, ta det här ägget.\n"
"Efter att Cuccon kläcks, så ta den \n"
"hit till mig så kan jag kolla \n"
"hur den mår." TEXTID("\x50\x3F")
)

DEFINE_MESSAGE(0x503F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vad tror du? \n"
"Vill du försöka?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x5040, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, rackarns...blev du pickad\n"
"utav en Cucco då du var liten?" EVENT
)

DEFINE_MESSAGE(0x5041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Heh heh heh, unge man!\n"
"Är du snabb på foten?" BOX_BREAK "Det kanske inte verkar så, men jag \n"
"är väldigt snabb!\n"
"Vad sägs om att vi tävlar! \n"
"Följ mig om du vågar!"
)

DEFINE_MESSAGE(0x5042, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Snälla gör min Cucco glad!\n"
"Okej?"
)

DEFINE_MESSAGE(0x5043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Åh, din Cucco verkar hyffsat \n"
"glad! Han måste ha väckt en riktigt\n"
"lat person!" BOX_BREAK UNSKIPPABLE "Du är en väldigt bra Cuccoägare!\n"
"Jag ska ge dig en ovanlig, värdefull\n"
"Cucco, om du är intresserad..." BOX_BREAK UNSKIPPABLE "Dess namn är " COLOR(RED) "Cojiro" COLOR(DEFAULT) "," COLOR(RED) " " COLOR(DEFAULT) "och den brukade\n"
"vara min brors Cucco. Dess\n"
"blå kropp är ganska charmerande.\n"
"Den är så söt!" BOX_BREAK UNSKIPPABLE "Sedan min bror lämnade, \n"
"det är märkligt, men Cojiro har \n"
"helt slutat gala." TEXTID("\x50\x44")
)

DEFINE_MESSAGE(0x5044, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vill du ha " COLOR(RED) "Cojiro" COLOR(DEFAULT) "?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x5045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det verkar som att du verkligen tycker om\n"
"din andra Cucco. Okej, du kan behålla den\n"
"ett tag." EVENT
)

DEFINE_MESSAGE(0x5046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Det är en gammal häxa som har Brygdbutiken\n"
"här bakom. Du kan ta dig till dit \n"
"genom dörren till vänster\n"
"om disken." EVENT
)

DEFINE_MESSAGE(0x5047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Min bror måste ha varit väldigt \n"
"ensam..."
)

DEFINE_MESSAGE(0x5048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag hörde att den " COLOR(ADJUSTABLE) "Förlorade Skogen" COLOR(DEFAULT) ", \n"
"där älvorna lever, är en märklig\n"
"plats med många mysteriska dofter." BOX_BREAK "Jag önskar att jag i alla fall \n"
"en gång kunde göra medicin utav de\n"
"märkliga saker jag kan hitta där..." BOX_BREAK "Jag kanske inte ser så bra \n"
"längre, men min näsa fungerar \n"
"fortfarande fint!  Hehehe!"
)

DEFINE_MESSAGE(0x5049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Sniff sniff sniff..." BOX_BREAK "Vad är det som luktar så konstigt..." BOX_BREAK "Vad har du i fickan?!"
)

DEFINE_MESSAGE(0x504A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"That uslingen! Han var bara tvungen \n"
"att gå in i skogen...\n"
TEXT_SPEED("\x01") "....." TEXT_SPEED("\x00") "Jag förstår." TEXTID("\x50\x4B")
)

DEFINE_MESSAGE(0x504B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hall dår, ge mig den på en gång!\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x504C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Så sorgligt... Jag behöver bara lite..."
)

DEFINE_MESSAGE(0x504D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Om du ser den dåren, så ge detta till \n"
"honom. Det är den starkaste medicin\n"
"jag någonsin har skapat." BOX_BREAK UNSKIPPABLE "Fast, den här brygden funkar\n"
"inte på ett monster..." EVENT
)

DEFINE_MESSAGE(0x504E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hallå, grabben! Om du vill bära runt på \n"
"medicin, så behöver du en behållare\n"
"att ha den i!" EVENT
)

DEFINE_MESSAGE(0x504F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det sägs att ingen medicin \n"
"kan bota en dåre...\n"
"Jag antar att det stämmer..."
)

DEFINE_MESSAGE(0x5050, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag kan inte komma ned, så det enda jag kan\n"
"göra är att titta på " COLOR(RED) "Dödens Berg" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x5051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag kan inte komma ned, så det enda jag kan\n"
"göra är att titta på stjärnorna."
)

DEFINE_MESSAGE(0x5052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Kan du se det där nedifrån? \n"
"Någonting håller på att hända på " COLOR(RED) "Dödens \n"
"Berg" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x5053, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Kan du se det därifrån?\n"
COLOR(RED) "Döda Berget " COLOR(DEFAULT) "är tillbaka som vanligt!"
)

DEFINE_MESSAGE(0x5054, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag har ingen lust att komma ned,\n"
"någonsin! Vad som än händer, så kommer\n"
"jag fortsätta att titta på Dödens Berg \n"
"här uppifrån."
)

DEFINE_MESSAGE(0x5055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hej! Kul att se dig igen! Du får\n"
"den här utav mig som ett minne."
)

DEFINE_MESSAGE(0x5056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"För att få en bra överblick, använd " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) " och \n"
"se dig omkring med " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x5057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du! Grabben, brukar du alltid gå in\n"
"i folks hus utan tillåtelse? \n"
"Har inte dina föräldrar \n"
"uppfostrat dig ordentligt?" BOX_BREAK UNSKIPPABLE  SHIFT("\x42") "Strunt samma." BOX_BREAK UNSKIPPABLE "Har du sett en kvinna bakom detta \n"
"huset? Hon har det väldigt tufft \n"
"just nu." BOX_BREAK UNSKIPPABLE  SHIFT("\x42") "Jaja..." TEXTID("\x50\x58")
)

DEFINE_MESSAGE(0x5058, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Om den kvinnan frågar dig om höns, \n"
"så bör du se till att lyssna på henne."
)

DEFINE_MESSAGE(0x5059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Tycker du att det är roligt att\n"
"stövla in i folks hus mitt i natten? \n"
"Du måste ha haft en riktigt \n"
"bedrövlig uppväxt." BOX_BREAK UNSKIPPABLE  SHIFT("\x42") "Jaja..." TEXTID("\x50\x5A")
)

DEFINE_MESSAGE(0x505A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Den där kvinnan tar hand om höns,\n"
"men faktum är, att hon är allergisk \n"
"mot dem." BOX_BREAK SHIFT("\x42") "Jaja..."
)

DEFINE_MESSAGE(0x505B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hallå! Unge man! en stor pojke\n"
"som du borde veta bättre än att gå in i\n"
"folks hus utan tillåtelse?! Jag vill tala\n"
"med dina föräldrar!" BOX_BREAK UNSKIPPABLE  SHIFT("\x42") "Jaja." BOX_BREAK UNSKIPPABLE "Det är inte mitt hus ändå.\n"
"Detta är den " COLOR(RED) "stora Impas" COLOR(DEFAULT) " hus!" BOX_BREAK UNSKIPPABLE "Den stora Impa har gått till\n"
COLOR(RED) "kyrkogården " COLOR(DEFAULT) "för att försegla \n"
"en enorm varelse där." BOX_BREAK UNSKIPPABLE "Sedan Ganondorf dök upp, så har \n"
"mycket monster siktats \n"
"här omkring." BOX_BREAK UNSKIPPABLE "Vi har den stora Impa att \n"
"tacka för den frid som råder här.\n"
"Tänk på det, unge man!" BOX_BREAK UNSKIPPABLE  SHIFT("\x42") "Jaja." BOX_BREAK UNSKIPPABLE "Då vi talar om den Stora Impa, hon\n"
"har ännu inte kommit tillbaka. Jag undrar \n"
"vad som hänt henne?" TEXTID("\x50\x5C")
)

DEFINE_MESSAGE(0x505C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag hörde att " COLOR(RED) "gravvårdarens\n"
"spöke " COLOR(DEFAULT) "ofta kommer fram på \n"
"kyrkogården bakom byn..." BOX_BREAK SHIFT("\x34") "Men, vem bryr sig?"
)

DEFINE_MESSAGE(0x505D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hej pojke! Är det första gången\n"
"du besöker den här byn?" BOX_BREAK UNSKIPPABLE "En stor kvinna, " COLOR(RED) "Impa" COLOR(DEFAULT) ", öppnade upp\n"
"den här byn för oss\n"
"stackars fattiga." TEXTID("\x50\x5E")
)

DEFINE_MESSAGE(0x505E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Så, känn dig som hemma.\n"
"Maten är inte klar än dock."
)

DEFINE_MESSAGE(0x505F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Den stora Impa är inte här. Har\n"
"någonting hänt henne?"
)

DEFINE_MESSAGE(0x5060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Alla har någon gång varit med \n"
"om tuffa saker i sitt liv som de\n"
"inte vill att andra ska känna till." TEXTID("\x50\x61")
)

DEFINE_MESSAGE(0x5061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Se bara på den skäggiga gubben\n"
"som sover där borta. Jag slår vad\n"
"om att även han har varit med om\n"
"något tufft i sitt liv..."
)

DEFINE_MESSAGE(0x5062, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Den där skäggiga gubben återvände \n"
"till ranchen. Han såg väldigt glad ut!"
)

DEFINE_MESSAGE(0x5063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Ding dong, ding dong!\n"
"I'm a clock soldier of Kakariko!\n"
"The current time is: " TIME "." BOX_BREAK UNSKIPPABLE "Hello there, son.\n"
"Zelda's attendant, the great " COLOR(RED) "Impa" COLOR(DEFAULT) ",\n"
"opened this village to the common\n"
"people." BOX_BREAK UNSKIPPABLE "We have only a small population \n"
"now, but someday this place will \n"
"be as lively as Hyrule Castle \n"
"Town! Oh, yes! It will!" BOX_BREAK UNSKIPPABLE "Climb up the " COLOR(RED) "stairs at the north\n"
COLOR(DEFAULT) "end of the village to find the trail\n"
"that leads up Death Mountain." BOX_BREAK UNSKIPPABLE "But you need the King's permission\n"
"to actually go up the mountain."
)

DEFINE_MESSAGE(0x5064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ding dong, ding dong!\n"
"The current time is: " TIME "."
)

DEFINE_MESSAGE(0x5065, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ding dong, ding dong!\n"
"The current time is: " TIME ".\n"
"By the way, do you know what \n"
"happened in the castle?"
)

DEFINE_MESSAGE(0x5066, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hey, son, what are you doing \n"
"wandering around this late at \n"
"night?" BOX_BREAK UNSKIPPABLE "Oh, I get it. You're testing your\n"
"courage, aren't you? You must \n"
"want to go to...a graveyard!" BOX_BREAK UNSKIPPABLE "Wait a minute! What am I doing\n"
"talking to a kid? I've got work to\n"
"do! Work! Work!" TEXTID("\x50\x67")
)

DEFINE_MESSAGE(0x5067, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ding dong, ding dong!\n"
"The current time is: " TIME "." BOX_BREAK "Head east and you'll find a\n"
COLOR(RED) "graveyard" COLOR(DEFAULT) ". Legends say you can \n"
"calm the souls of the dead with\n"
"an " COLOR(BLUE) "old song of the Royal Family" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x5068, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"There's a strange guy living in the \n"
"Windmill. Have you already met\n"
"him, Mr. Hero?"
)

DEFINE_MESSAGE(0x5069, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"People are disgusting. \n"
"My own father and mother are\n"
"disgusting.\n"
"You must be disgusting, too!"
)

DEFINE_MESSAGE(0x506A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"All day long, we are working on \n"
"many construction projects in the\n"
"village. It's going to take awhile\n"
"before everything is done." BOX_BREAK "Our boss works us very hard!"
)

DEFINE_MESSAGE(0x506B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"I'm starving!\n"
"Let's eat dinner, right now!"
)

DEFINE_MESSAGE(0x506C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Those guys each do the work of \n"
"half a man, but they still want a\n"
"full man's portion!\n"
"They're lazy slackers, I tell you!"
)

DEFINE_MESSAGE(0x506D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Poe   30 Rupees\n"
COLOR(DEFAULT) "This is a bottled ghost spirit. \n"
"Sell it to someone who is crazy \n"
"about weird things like this." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x506E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Poe  30 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Buy\n"
"Don't buy" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x506F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"506f"
)

DEFINE_MESSAGE(0x5070, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"My Cuccos have run away!\n"
"Please catch six more!"
)

DEFINE_MESSAGE(0x5071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE)  NAME "!\n"
"This ship is sinking!\n"
"Abandon ship!\n"
"Get onto a safe platform!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x5072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I'm still missing some Cuccos!\n"
"Please round up five more!"
)

DEFINE_MESSAGE(0x5073, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE "Don't cause trouble!\n"
"I'll tell Dampé!" QUICKTEXT_DISABLE  FADE("\x3C")
)

DEFINE_MESSAGE(0x5074, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Look at this, kid! My beautiful,\n"
"smooth hands are all worn out \n"
"from working. Sob sob..."
)

DEFINE_MESSAGE(0x5075, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"A job where you can make a lot\n"
"of money without much effort...\n"
"The only thing I can think of is\n"
"thievery... Is that a bad idea?"
)

DEFINE_MESSAGE(0x5076, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"I heard that our boss's house is\n"
"just behind this house. He doesn't\n"
"want any of us to know, though."
)

DEFINE_MESSAGE(0x5077, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Have you seen " COLOR(RED) "Mr. Dampé" COLOR(DEFAULT) ", who\n"
"lives in the graveyard up ahead?" BOX_BREAK "It's " TIME " right now, so he's\n"
"probably asleep in his hut." BOX_BREAK "Why don't you go out onto the \n"
"field and kill some time?"
)

DEFINE_MESSAGE(0x5078, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"I'm starving!\n"
"Isn't dinner ready yet?\n"
"It's " TIME " already!"
)

DEFINE_MESSAGE(0x5079, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "This used to be the " COLOR(RED) "great \n"
"Impa's house" COLOR(DEFAULT) ", but she doesn't\n"
"live here any longer." BOX_BREAK UNSKIPPABLE "It is now open to all \n"
"villagers. You are free to\n"
"go on in." TEXTID("\x50\x7A")
)

DEFINE_MESSAGE(0x507A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"This village used to be a \n"
COLOR(BLUE) "Shiekah " COLOR(DEFAULT) "village, but the \n"
"great Impa opened it to \n"
"everyone."
)

DEFINE_MESSAGE(0x507B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I tell you, I saw him!" BOX_BREAK "I saw the ghostly figure of Dampé\n"
"the gravekeeper sinking into\n"
"his grave. It looked like he was\n"
"holding some kind of " COLOR(RED) "treasure" COLOR(DEFAULT) "!"
)

DEFINE_MESSAGE(0x507C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"There he is! It's him!\n"
"He's the one who dropped from\n"
"the sky surrounded by a blue\n"
"light!" BOX_BREAK "Now do you believe me?"
)

DEFINE_MESSAGE(0x507D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Nobody believes what I've been\n"
"telling them all these past \n"
"seven years!"
)

DEFINE_MESSAGE(0x507E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"The fire almost consumed us all!\n"
"But together, we all were able to\n"
"put out the fire! Pretty good\n"
"work, don't you think?"
)

DEFINE_MESSAGE(0x507F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Wah hah hah hah hah hah!" BOX_BREAK "Look at this guy! Ever since\n"
"he escaped from Hyrule Castle\n"
"Town, he's become even more\n"
"timid!"
)

DEFINE_MESSAGE(0x5080, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Wah hah hah hah hah hah!" BOX_BREAK "He must have been seeing things!\n"
"Wah hah hah hah hah hah!"
)

DEFINE_MESSAGE(0x5081, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Wah hah hah hah hah hah!\n"
"Those are some funny-looking\n"
"clothes, man!"
)

DEFINE_MESSAGE(0x5082, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Wah hah hah hah hah hah!\n"
"When times are tough, laughter is\n"
"the best medicine!\n"
"That's what my dad always said!"
)

DEFINE_MESSAGE(0x5083, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Look at me! I'm on top of the \n"
"world! It really bothers me to see\n"
"anyone at a higher level than I\n"
"am! I have to be on top!"
)

DEFINE_MESSAGE(0x5084, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"If I fall asleep up here, I'll\n"
"surely fall down..."
)

DEFINE_MESSAGE(0x5085, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"The windmill draws water up from \n"
"the depth of the well." BOX_BREAK "Now the well is dried up, though.\n"
"Hrrrrm..."
)

DEFINE_MESSAGE(0x5086, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"The lady here is really\n"
"generous. She even took care of\n"
"the carpenters when they were\n"
"here!"
)

DEFINE_MESSAGE(0x5087, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"A long time ago...\n"
"There was a man in this very\n"
"village who had an eye they said\n"
"could see the truth!" BOX_BREAK "Now usually, you have to train\n"
"your mind's eye most strenuously\n"
"to actually see the truth..." BOX_BREAK "But this fella, no, they say he\n"
"had a different way of doing\n"
"things..." BOX_BREAK "His house stood where the well is\n"
"now..."
)

DEFINE_MESSAGE(0x5088, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Folks around here tell of a\n"
COLOR(RED) "fabulously rich family " COLOR(DEFAULT) "that once\n"
"lived in one of the houses in this\n"
"village..." BOX_BREAK "But they say that the entire\n"
"family was cursed due to their\n"
"greed!" BOX_BREAK "Who knows what might happen to\n"
"those who are consumed by\n"
"greed..."
)

DEFINE_MESSAGE(0x5089, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Heh...." BOX_BREAK "What an annoying person,\n"
"interrupting us like this...\n"
"Don't you agree, my love?"
)

DEFINE_MESSAGE(0x508A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hee hee..." BOX_BREAK "Violating our personal space!\n"
"He must have something better\n"
"to do...\n"
"Don't you agree, darling?"
)

DEFINE_MESSAGE(0x508B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Look at him...the man with the\n"
"beard. I think he was fired from\n"
"his job at the ranch..." TEXTID("\x50\x8C")
)

DEFINE_MESSAGE(0x508C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"He's always just lazing around, \n"
"morning, noon and night. \n"
"He's an awfully carefree guy \n"
"during such hard times."
)

DEFINE_MESSAGE(0x508D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"That lazy man, he kind of \n"
"reminded me of my little Richard..." BOX_BREAK "What's that? You say you've\n"
"never heard of my little Richard?\n"
"He was such a famous puppy! You \n"
"seriously haven't heard of him?"
)

DEFINE_MESSAGE(0x508E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Oh, no! A storm again!!\n"
"You played the Ocarina again,\n"
"didn't you!!\n"
"Grrrrrrrrrrrrrrr!!"
)

DEFINE_MESSAGE(0x508F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"You caught a Big Poe!\n"
"Sell it at the " COLOR(RED) "Ghost Shop " COLOR(DEFAULT) "for a\n"
"lot of money!"
)

DEFINE_MESSAGE(0x6000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE "Halt! Stay where you are!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x6001, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, newcomer!"
)

DEFINE_MESSAGE(0x6002, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, newcomer! Wait a second \n"
"and I'll open the gate for you."
)

DEFINE_MESSAGE(0x6003, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE "Don't take us so lightly!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x6004, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "I've seen your fine work. To get \n"
"past the guards here, you must \n"
"have good thieving skills." BOX_BREAK UNSKIPPABLE "I used to think that all men, \n"
"besides the great Ganondorf, were \n"
"useless...but now that I've seen\n"
"you, I don't think so anymore!" BOX_BREAK UNSKIPPABLE  COLOR(RED) "The exalted Nabooru" COLOR(DEFAULT) ", our leader, \n"
"put me in charge of this fortress." BOX_BREAK UNSKIPPABLE "Nabooru is the second-in-command\n"
"to the great Ganondorf, King of \n"
"the Gerudo Thieves." BOX_BREAK UNSKIPPABLE "Her headquarters are in the " COLOR(YELLOW) "Spirit\n"
"Temple" COLOR(DEFAULT) ", which is at the end of the\n"
"desert." BOX_BREAK UNSKIPPABLE "Say, you must want to become \n"
"one of us, eh?\n"
"All right, then!\n"
"You're in from now on!" BOX_BREAK UNSKIPPABLE "Take this. With it, you will\n"
"have free access to all areas of\n"
"the fortress!" EVENT
)

DEFINE_MESSAGE(0x6005, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"From now on, you're free to come\n"
"and go as you please through the \n"
"gate to the desert." BOX_BREAK "You'll find the " COLOR(YELLOW) "Spirit Temple" COLOR(DEFAULT) "," COLOR(YELLOW) " \n"
COLOR(DEFAULT) "where the exalted Nabooru lives,\n"
"out there in the desert."
)

DEFINE_MESSAGE(0x6006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE "Stupid Kid!" QUICKTEXT_DISABLE "\n"
"Get in there and keep quiet!"
)

DEFINE_MESSAGE(0x6007, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "I have no idea where you \n"
"come from, but you must have a\n"
"lot of guts to make it past all\n"
"the guards around here!" BOX_BREAK UNSKIPPABLE "All of my fellow carpenters\n"
"are imprisoned somewhere in here." BOX_BREAK UNSKIPPABLE "If you can get us out of here,\n"
"we'll repay the favor somehow!" BOX_BREAK UNSKIPPABLE "But be careful! There're sure\n"
"to be " COLOR(RED) "Gerudo " COLOR(DEFAULT) "guards somewhere \n"
TEXT_SPEED("\x02")  QUICKTEXT_ENABLE "around" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "here" QUICKTEXT_DISABLE "...." TEXT_SPEED("\x00")  BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE "Woo!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Watch out!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x6008, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x2E") "The Entrance to the Past" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x6009, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x24") "The Entrance to the Present" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x600A, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE  SHIFT("\x24") "The Entrance to the Future" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x600B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SFX("\x38\xEC") "I'll be your guide on your way,\n"
"but coming back, I won't play!\n"
"I'll show you the only way to go,\n"
"so follow me and don't be slow!" FADE("\x5A")
)

DEFINE_MESSAGE(0x600C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Past, present, future..." BOX_BREAK UNSKIPPABLE "The Master Sword is a ship with \n"
"which you can sail upstream and\n"
"downstream through time's river..." BOX_BREAK UNSKIPPABLE "The port for that ship is in the\n"
"Temple of Time..." BOX_BREAK UNSKIPPABLE "To restore the Desert Colossus\n"
"and enter the " COLOR(YELLOW) "Spirit Temple" COLOR(DEFAULT) ", you\n"
"must travel back through time's\n"
"flow..." BOX_BREAK UNSKIPPABLE "Listen to this " COLOR(YELLOW) "Requiem of Spirit" COLOR(DEFAULT) "...\n"
"This melody will lead a child back\n"
"to the desert."
)

DEFINE_MESSAGE(0x600D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I am the Gerudo master of \n"
"horseback archery! On top of \n"
"that, I'm the Gerudo master of\n"
"horseback riding!" BOX_BREAK "Want to try horseback archery\n"
"for " COLOR(RED) "20 Rupees" COLOR(DEFAULT) "?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Yes\n"
"No" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x600E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"You have guts--I like you. \n"
"Follow me."
)

DEFINE_MESSAGE(0x600F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"It's out of the question if you \n"
"don't have a horse!"
)

DEFINE_MESSAGE(0x6010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "I won't have anything to do with a\n"
"coward like you!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x6011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ah, you are not as good as you \n"
"claim. Maybe next time."
)

DEFINE_MESSAGE(0x6012, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"You did well." BOX_BREAK "For today, I admit I lost. \n"
"It seems I have a lot of room for \n"
"improvement."
)

DEFINE_MESSAGE(0x6013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"This is the Gerudo's " COLOR(RED) "Training \n"
"Ground" COLOR(DEFAULT) "." BOX_BREAK "Nobody is allowed to enter \n"
"without a membership card."
)

DEFINE_MESSAGE(0x6014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"This is the Gerudo's " COLOR(RED) "Training\n"
"Ground" COLOR(DEFAULT) "." BOX_BREAK "Membership card verified." BOX_BREAK "One try for 10 Rupees!\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Try\n"
"Don't try" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x6015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"All right, I'll take your 10 Rupees.\n"
"Give it your best shot!" EVENT
)

DEFINE_MESSAGE(0x6016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"You don't have enough money!\n"
QUICKTEXT_ENABLE "Come back again." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x6017, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hey, rookie!" BOX_BREAK UNSKIPPABLE "Are you going into the desert?\n"
"I'll open this gate for you, but..." BOX_BREAK UNSKIPPABLE "You can't cross the desert \n"
"unless you pass the " COLOR(RED) "two trials" COLOR(DEFAULT) "." TEXTID("\x60\x18")
)

DEFINE_MESSAGE(0x6018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"The first trial is...the " COLOR(RED) "River of \n"
"Sand" COLOR(DEFAULT) "! You can't walk across this\n"
"river! After you cross it, follow\n"
"the flags we placed there." BOX_BREAK "The second trial is...the " COLOR(RED) "Phantom\n"
"Guide" COLOR(DEFAULT) "!" BOX_BREAK "Those without " COLOR(RED) "eyes that can see\n"
"the truth " COLOR(DEFAULT) "will only find themselves\n"
"returning here." BOX_BREAK "You are going anyway, aren't you?\n"
"I won't stop you...\n"
"Go ahead!" EVENT
)

DEFINE_MESSAGE(0x6019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Why did you come all the\n"
"way down here? What? You were\n"
"just about to ask me the same \n"
"thing?" TEXTID("\x60\x1A")
)

DEFINE_MESSAGE(0x601A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Well, now that you're down here, \n"
"you may as well make the best of \n"
"things!"
)

DEFINE_MESSAGE(0x601B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Good kid! Thanks!\n"
"I'm sorry that I can't give you\n"
"something as good in return, but...\n"
"take this anyway!"
)

DEFINE_MESSAGE(0x601C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"601C"
)

DEFINE_MESSAGE(0x601D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "I haven't seen you around, kid..." BOX_BREAK "What do you want?\n"
THREE_CHOICE  COLOR(ADJUSTABLE) "To see the temple\n"
"Looking for the Sages\n"
"Nothing, really" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x601E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"You're just a kid! The temple is\n"
"no place for kids!"
)

DEFINE_MESSAGE(0x601F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"A Sage? I don't know anyone\n"
"like that."
)

DEFINE_MESSAGE(0x6020, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "You have nothing to do? What \n"
"good timing! Can you do me a \n"
"favor, kid?" BOX_BREAK UNSKIPPABLE "Wait a second, I want to ask you\n"
"first--you wouldn't happen to be\n"
"one of Ganondorf's..." BOX_BREAK "followers...would you?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "What if I am?\n"
"I hate Ganondorf!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x6021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Wha-ha-ha!\n"
"Don't try to act cool, kid.\n"
"I was just asking!" BOX_BREAK UNSKIPPABLE "A kid like you could never be\n"
"one of Ganondorf's followers!" BOX_BREAK UNSKIPPABLE "Well, let's cut to the chase..." TEXTID("\x60\x23")
)

DEFINE_MESSAGE(0x6022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Uh-huh!" BOX_BREAK UNSKIPPABLE "You've got guts.\n"
"I think I like you." TEXTID("\x60\x23")
)

DEFINE_MESSAGE(0x6023, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "First of all, let me introduce \n"
"myself. I'm " COLOR(RED) "Nabooru " COLOR(DEFAULT) "of the Gerudo.\n"
"I'm a lone wolf thief." BOX_BREAK UNSKIPPABLE "But don't get me wrong!" BOX_BREAK UNSKIPPABLE "Though we're both thieves, I'm \n"
"completely different from\n"
"Ganondorf." BOX_BREAK UNSKIPPABLE "With his followers, he stole\n"
"from women and children, and he \n"
"even killed people!" BOX_BREAK UNSKIPPABLE "A kid like you may not know this, \n"
"but the Gerudo race consists only\n"
"of women. Only one man is born\n"
"every hundred years..." BOX_BREAK UNSKIPPABLE "Even though our laws say that\n"
"lone male Gerudo must become\n"
"King of the Gerudo, I'll never\n"
"bow to such an evil man!" BOX_BREAK UNSKIPPABLE "By the way, what is your name, \n"
"kid?" BOX_BREAK UNSKIPPABLE  NAME "?!" BOX_BREAK UNSKIPPABLE "What kind of name is that?\n"
"Well...anyway..." TEXTID("\x60\x24")
)

DEFINE_MESSAGE(0x6024, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "I want to ask you a favor..." BOX_BREAK UNSKIPPABLE "Will you go through this tiny hole\n"
"and get a treasure that's inside?" BOX_BREAK UNSKIPPABLE "The treasure is the " COLOR(BLUE) "Silver\n"
"Gauntlets" COLOR(DEFAULT) ". If you equip them, you\n"
"can easily push and pull very \n"
"heavy things!" BOX_BREAK UNSKIPPABLE "No, no, no, kid! Don't even think\n"
"about taking this treasure for \n"
"yourself!" BOX_BREAK UNSKIPPABLE "The Silver Gauntlets won't fit a\n"
"little kid like you if you try to \n"
"equip them! I want you to be a \n"
"good boy and give them to me!" BOX_BREAK UNSKIPPABLE "Ganondorf and his minions are\n"
"using the Spirit Temple as a \n"
"hideout." BOX_BREAK UNSKIPPABLE "Only the Silver Gauntlets will \n"
"allow me to sneak deep into the\n"
"temple." BOX_BREAK UNSKIPPABLE "Once there, I'm going to steal all\n"
"the treasure inside and mess up\n"
"their plans!" BOX_BREAK "How about it? Will you do it?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Yes\n"
"No" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x6025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Thanks, kid!" BOX_BREAK UNSKIPPABLE "You and I, let's give Ganondorf\n"
"and his followers a big surprise,\n"
"shall we?" TEXTID("\x60\x26")
)

DEFINE_MESSAGE(0x6026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"If you can successfully get the \n"
COLOR(BLUE) "Silver Gauntlets" COLOR(DEFAULT) "..." BOX_BREAK "I'll do something great" COLOR(RED) " " COLOR(DEFAULT) "for you!"
)

DEFINE_MESSAGE(0x6027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Well, what did I expect?\n"
"After all, you're just a kid!"
)

DEFINE_MESSAGE(0x6028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hey! Where are you taking me?!"
)

DEFINE_MESSAGE(0x6029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "Ho ho ho!\n"
"Looks like someone is here, Koume."
)

DEFINE_MESSAGE(0x602A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hee hee hee!\n"
"Looks like it, Kotake!"
)

DEFINE_MESSAGE(0x602B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "What an outrageous fellow he is,\n"
"to intrude so boldly into our \n"
"Temple...\n"
"Ho ho ho!"
)

DEFINE_MESSAGE(0x602C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "We should teach this outrageous\n"
"fellow a lesson!\n"
"Hee hee hee!"
)

DEFINE_MESSAGE(0x602D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Oh, loyal minion..."
)

DEFINE_MESSAGE(0x602E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Destroy this intruder on \n"
"our behalf!"
)

DEFINE_MESSAGE(0x602F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "Great Ganondorf's...Enemy...\n"
"Must die..."
)

DEFINE_MESSAGE(0x6030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Unnnh...\n"
"Where am I...?"
)

DEFINE_MESSAGE(0x6031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Well, well...\n"
"Looks like she's back to normal...\n"
"Koume..."
)

DEFINE_MESSAGE(0x6032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "She's just a little girl,\n"
"but she commands a lot of \n"
"respect among the Gerudo, Kotake..."
)

DEFINE_MESSAGE(0x6033, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Maybe we should make her work\n"
"for the great Ganondorf for\n"
"a little while longer!\n"
"Ho ho ho!"
)

DEFINE_MESSAGE(0x6034, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Then we should brainwash her\n"
"again!\n"
"Hee hee hee!"
)

DEFINE_MESSAGE(0x6035, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Kid, let me thank you." BOX_BREAK UNSKIPPABLE "Heheheh...look what the little\n"
"kid has become in the past seven\n"
"years--a competent swordsman!"
)

DEFINE_MESSAGE(0x6036, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
"If only I knew you would become \n"
"such a handsome man..." BOX_BREAK_DELAYED("\x50") "I should have kept the promise\n"
"I made back then..." FADE("\x50")
)

DEFINE_MESSAGE(0x6037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Here, I'll give you " COLOR(RED) "this" COLOR(DEFAULT) "...\n"
"It's a very important thing to me.\n"
"Let's have a competition later!"
)

DEFINE_MESSAGE(0x6038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME "...see you again!"
)

DEFINE_MESSAGE(0x6039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "By the way..." BOX_BREAK UNSKIPPABLE "I really messed up..." BOX_BREAK UNSKIPPABLE "I was brainwashed by those old\n"
"witches and used by Ganondorf to\n"
"do his evil will..." BOX_BREAK UNSKIPPABLE "But isn't it funny? That a person\n"
"like me could turn out to be the\n"
COLOR(YELLOW) "Sage of Spirit" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "And now, I'm going to fight\n"
"them as one of the six Sages!\n"
"Heh heh..." BOX_BREAK UNSKIPPABLE "I'm going to pay them back for\n"
"what they did to me!"
)

DEFINE_MESSAGE(0x603A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Kid..." BOX_BREAK UNSKIPPABLE "No...\n"
NAME ", the Hero of Time!" BOX_BREAK UNSKIPPABLE "Instead of keeping the promise I\n"
"made back then, I give you this\n"
COLOR(YELLOW) "Medallion" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Take it!"
)

DEFINE_MESSAGE(0x603B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x12") "Yeearggh!" QUICKTEXT_DISABLE " Let me go!!"
)

DEFINE_MESSAGE(0x603C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE  SHIFT("\x33") "You, " QUICKTEXT_ENABLE "you fiends!" QUICKTEXT_DISABLE "\n"
SHIFT("\x29") "Ganondorf's minions!"
)

DEFINE_MESSAGE(0x603D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x1E")  NAME "!" QUICKTEXT_DISABLE "\n"
SHIFT("\x20") "Get out of here! Now!"
)

DEFINE_MESSAGE(0x603E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x0C") "These witches! They're using\n"
SHIFT("\x2B") "black magic on me!"
)

DEFINE_MESSAGE(0x603F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, newcomer! This is our \n"
COLOR(RED) "horseback archery field" COLOR(DEFAULT) "." BOX_BREAK "After a lot of hard practice and\n"
"training, we finally have the skill\n"
"to hit the bull's-eye while riding\n"
"like the wind!" BOX_BREAK "When you finally learn how to ride\n"
"a horse, you should come back\n"
"and try it. It's a dangerous sport,\n"
"but it's fun!"
)

DEFINE_MESSAGE(0x6040, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey newcomer, you have a fine \n"
"horse!" BOX_BREAK "I don't know where you stole \n"
"it from, but..." BOX_BREAK "OK, how about challenging this \n"
COLOR(RED) "horseback archery" COLOR(DEFAULT) "?" BOX_BREAK "Once the horse starts galloping,\n"
"shoot the targets with your\n"
"arrows. " BOX_BREAK "Let's see how many points you \n"
"can score. You get 20 arrows." BOX_BREAK "If you can score " COLOR(RED) "1,000 points" COLOR(DEFAULT) ", I\n"
"will give you something good!" EVENT
)

DEFINE_MESSAGE(0x6041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Do you want to try for " COLOR(RED) "20 Rupees" COLOR(DEFAULT) "?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Yes\n"
"No" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x6042, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, rookie!\n"
"You're looking good!\n"
"Show me your skill again!" BOX_BREAK "You should set a new goal of\n"
COLOR(RED) "1,500 points" COLOR(DEFAULT) " and try again!" EVENT
)

DEFINE_MESSAGE(0x6043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"What? Do you want to try again?\n"
"Looks like you have some\n"
"potential!" EVENT
)

DEFINE_MESSAGE(0x6044, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I'll be darned! You are the ultimate\n"
"master!" BOX_BREAK "I will give you an item suitable\n"
"for the master." BOX_BREAK "This quiver is very important to \n"
"me. I want you to have it.\n"
"Take good care of it, OK?"
)

DEFINE_MESSAGE(0x6045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
POINTS " points...Hmm...\n"
"Wha-ha-ha! You have plenty of \n"
"room for improvement!" EVENT
)

DEFINE_MESSAGE(0x6046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Fantastic!\n"
"You are a true master!" BOX_BREAK "I will give this to you.\n"
"Keep improving yourself!"
)

DEFINE_MESSAGE(0x6047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
POINTS " points...\n"
"Quite impressive!" EVENT
)

DEFINE_MESSAGE(0x6048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Look at that stupid kid!\n"
"He came on his own to offer \n"
"himself as a sacrifice to the\n"
"great Ganondorf..." FADE("\x5A")
)

DEFINE_MESSAGE(0x6049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x05") "With my flame, I will burn him to\n"
SHIFT("\x46") "the bone!" FADE("\x3C")
)

DEFINE_MESSAGE(0x604A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"With my frost, I will freeze him to\n"
SHIFT("\x46") "his soul!" FADE("\x3C")
)

DEFINE_MESSAGE(0x604B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x1C") "Shoot, what a fresh kid!\n"
SHIFT("\x15") "This time, we'll get serious,\n"
SHIFT("\x3C") "right Kotake?" FADE("\x5A")
)

DEFINE_MESSAGE(0x604C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x4B") "What?" BOX_BREAK_DELAYED("\x14")  SHIFT("\x0A") "Hey, Koume, what is that above\n"
SHIFT("\x41") "your head?" FADE("\x3C")
)

DEFINE_MESSAGE(0x604D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x0B") "I don't know, but you have one\n"
SHIFT("\x14") "over your head too, Kotake!" FADE("\x3C")
)

DEFINE_MESSAGE(0x604E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x14") "But I'm only 400 years old!" FADE("\x28")
)

DEFINE_MESSAGE(0x604F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x14") "And I'm just 380 years old!" FADE("\x28")
)

DEFINE_MESSAGE(0x6050, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x0C") "We're twins! Don't try to lie\n"
SHIFT("\x35") "about your age!" QUICKTEXT_DISABLE  FADE("\x28")
)

DEFINE_MESSAGE(0x6051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x06") "You must have gone senile!" QUICKTEXT_DISABLE  FADE("\x14")
)

DEFINE_MESSAGE(0x6052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x1E") "Who are you calling senile?!\n"
SHIFT("\x16") "Is that how you treat your\n"
SHIFT("\x3D") "older sister?" QUICKTEXT_DISABLE  FADE("\x1E")
)

DEFINE_MESSAGE(0x6053, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x36") "We are twins! \n"
SHIFT("\x26") "How can you be older?" QUICKTEXT_DISABLE  FADE("\x1E")
)

DEFINE_MESSAGE(0x6054, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x3F") "Keeeyaaah!!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE  SHIFT("\x20") "How heartless you are!" QUICKTEXT_DISABLE  FADE("\x14")
)

DEFINE_MESSAGE(0x6055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x12") "How can you be so ungrateful?" QUICKTEXT_DISABLE  FADE("\x0A")
)

DEFINE_MESSAGE(0x6056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x35") "You're heartless!!" QUICKTEXT_DISABLE  FADE("\x04")
)

DEFINE_MESSAGE(0x6057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x33") "You ungrateful..." QUICKTEXT_DISABLE  FADE("\x04")
)

DEFINE_MESSAGE(0x6058, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE  SHIFT("\x21") "I'll come back to haunt you!" QUICKTEXT_DISABLE  FADE("\x28")
)

DEFINE_MESSAGE(0x6059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "OK, let's get serious now, Kotake!" QUICKTEXT_DISABLE  FADE("\x1E")
)

DEFINE_MESSAGE(0x605A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x37")  QUICKTEXT_ENABLE "Oh, OK, Koume." QUICKTEXT_DISABLE  BOX_BREAK_DELAYED("\x14")  SHIFT("\x30")  QUICKTEXT_ENABLE "Kotake" QUICKTEXT_DISABLE " and " QUICKTEXT_ENABLE "Koume's" QUICKTEXT_DISABLE "\n"
SHIFT("\x1C")  QUICKTEXT_ENABLE "Double" QUICKTEXT_DISABLE " Dynamite " QUICKTEXT_ENABLE "Attack!" QUICKTEXT_DISABLE  FADE("\x28")
)

DEFINE_MESSAGE(0x605B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Did you come here to save me? \n"
"Oh, that's just swell! I'm " COLOR(RED) "Ichiro\n"
"the carpenter" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "We were really interested in \n"
"joining their all-female group, but \n"
"they locked us up like this just\n"
"because we're men!" BOX_BREAK UNSKIPPABLE "We don't care about the Gerudo \n"
"anymore! They're so rude!" BOX_BREAK UNSKIPPABLE  COLOR(RED) "Three of my fellows" COLOR(DEFAULT) " have also \n"
"been captured, so please help \n"
"them escape, too!"
)

DEFINE_MESSAGE(0x605C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "You're a cute kid! Thank you for\n"
"coming to save me! I'm " COLOR(RED) "Jiro, the \n"
"carpenter" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "These women are so scary! I'd\n"
"rather work as a carpenter than\n"
"join them!" BOX_BREAK UNSKIPPABLE "I can't wait to say good-bye to\n"
"this place! " COLOR(RED) "Two of my buddies " COLOR(DEFAULT) "\n"
"are still being held prisoner. Will\n"
"you please get them out, too?"
)

DEFINE_MESSAGE(0x605D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Thanks, boy! You're fantastic!\n"
"I'm " COLOR(RED) "Sabooro, the carpenter" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "Have you seen our boss, boy?\n"
"He's probably worried about me!\n"
"I have to get back to him \n"
QUICKTEXT_ENABLE "immediately!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE  COLOR(RED) "One more of our workers " COLOR(DEFAULT) "is still\n"
"a prisoner. Please save him!"
)

DEFINE_MESSAGE(0x605E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "I was afraid you were going to \n"
"forget about me! Now I'm free!\n"
"Thanks! I'm " COLOR(RED) "Shiro the carpenter" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "For rescuing me, I'll tell you\n"
"something interesting about the\n"
"desert that I overheard the\n"
"Gerudos talking about." BOX_BREAK UNSKIPPABLE "They said, \"In order to cross the\n"
"Haunted Wasteland, you'll need the\n"
"'" COLOR(RED) "eye of truth" COLOR(DEFAULT) ".' The Colossus is on\n"
"the far side of the wasteland...\"" BOX_BREAK UNSKIPPABLE "OK, now I'm going back to my\n"
COLOR(RED) "tent near Gerudo Valley" COLOR(DEFAULT) ", so, \n"
"drop by sometime. You may find \n"
"something helpful there! Byeee!"
)

DEFINE_MESSAGE(0x605F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"The leader of the gang of thieves\n"
"is " COLOR(RED) "Nabooru" COLOR(DEFAULT) ". She is experimenting \n"
"in brainwashing many people at \n"
"the ruins in the desert."
)

DEFINE_MESSAGE(0x6060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oh, it was Ganondorf the Evil\n"
"King who was behind the gang of \n"
"thieves..."
)

DEFINE_MESSAGE(0x6061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "When " COLOR(RED) "Nabooru" COLOR(DEFAULT) " was a lone wolf \n"
"thief, she never stole from \n"
"the weak, but..." TEXTID("\x60\x62")
)

DEFINE_MESSAGE(0x6062, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Now, Nabooru's gang of thieves \n"
"stands for cruelty and brutality.\n"
"She claims to be a chivalrous \n"
"robber, but...no way!"
)

DEFINE_MESSAGE(0x6063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Like I suspected, Nabooru was \n"
"brainwashed by Ganondorf's \n"
"followers..."
)

DEFINE_MESSAGE(0x6064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "In Gerudo society, those who have\n"
"great skill in horseback riding and\n"
"archery are well respected." TEXTID("\x60\x65")
)

DEFINE_MESSAGE(0x6065, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"How about trying horseback \n"
"archery at the Gerudo's Fortress?" BOX_BREAK "If you have a horse, a Gerudo \n"
"from the fortress will set up \n"
"your challenge."
)

DEFINE_MESSAGE(0x6066, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"You did so great, young man!"
)

DEFINE_MESSAGE(0x6067, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Building a bridge over the valley\n"
"is a simple task for four\n"
"carpenters."
)

DEFINE_MESSAGE(0x6068, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Without the old witches, the gang\n"
"of thieves isn't all that scary!"
)

DEFINE_MESSAGE(0x6069, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"The " COLOR(RED) "Gerudo's Fortress " COLOR(DEFAULT) "is located \n"
"beyond this gate. A kid like you \n"
"has no business there."
)

DEFINE_MESSAGE(0x606A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SFX("\x68\x55") "I am a " COLOR(RED) "master craftsman" COLOR(DEFAULT) ". Those\n"
"Gerudo thieves...they broke the\n"
"bridge." BOX_BREAK UNSKIPPABLE "I want to fix it, but all of my \n"
"workers are gone!" BOX_BREAK UNSKIPPABLE "They said working as carpenters\n"
"isn't cool, and they went to the\n"
COLOR(RED) "Gerudo's Fortress " COLOR(DEFAULT) "to become \n"
"thieves..." TEXTID("\x60\x6B")
)

DEFINE_MESSAGE(0x606B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, you! If you're going to the \n"
"fortress, would you mind finding\n"
"out what my workers are doing\n"
"over there?"
)

DEFINE_MESSAGE(0x606C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, I heard you saved my men.\n"
"When they returned, we built this\n"
"bridge." BOX_BREAK "Look at this! \n"
"Isn't it a fine bridge?" BOX_BREAK "They may be wimpy carpenters, \n"
"but once they all got together,\n"
"they got the job done."
)

DEFINE_MESSAGE(0x606D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SFX("\x68\x55") "Hey, that saw! It's mine!" BOX_BREAK UNSKIPPABLE "But... I thought I left that saw\n"
"with my old lady... Oh well..." TEXTID("\x60\x6E")
)

DEFINE_MESSAGE(0x606E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"My Biggoron tool broke, so I was\n"
"going to Goron City to get it\n"
"repaired." BOX_BREAK "Your coming here is great timing.\n"
"Will you give me my saw?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Yes\n"
"No" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x606F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x47")  QUICKTEXT_ENABLE "What?!\n"
SHIFT("\x14") "You're a dirty, rotten thief!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x6070, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"This is the Gerudo's " COLOR(RED) "Training \n"
"Ground" COLOR(DEFAULT) ". Unqualified persons are \n"
"not allowed."
)

DEFINE_MESSAGE(0x6071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"This is the Gerudo's" COLOR(RED) " Training\n"
"Ground" COLOR(DEFAULT) ". You're qualified...\n"
"C'mon in and hone your skills\n"
"as much as you want." EVENT
)

DEFINE_MESSAGE(0x6072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"This is the Gerudo's" COLOR(RED) " Training \n"
"Ground" COLOR(DEFAULT) ". Even though you're \n"
"qualified, don't hog all the \n"
"treasure here for yourself!"
)

DEFINE_MESSAGE(0x6073, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"6073"
)

DEFINE_MESSAGE(0x6074, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Oh, that's too bad." BOX_BREAK "The mark that will lead you to the\n"
"Spirit Temple is the " COLOR(RED) "flag on\n"
"the left " COLOR(DEFAULT) "outside the shop." BOX_BREAK "If you change your mind, please\n"
"come back again!"
)

DEFINE_MESSAGE(0x6075, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ohh, not enough Rupees.\n"
"No discounts, even a Rupee."
)

DEFINE_MESSAGE(0x6076, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
"Heh heh.\n"
"You're already in the middle of \n"
"something, aren't you." BOX_BREAK "If you want to challenge me, you\n"
"have to come here with a clear\n"
"mind. No other distractions!"
)

DEFINE_MESSAGE(0x6077, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x41") "Well Come!" BOX_BREAK "I am selling stuff, strange and \n"
"rare, from all over the world to \n"
"everybody.\n"
"Today's special is..." BOX_BREAK "A dangerous, running object! \n"
"Terrifying! \n"
"I won't tell you what it is until \n"
"I see the money...." BOX_BREAK "How about " COLOR(RED) "200 Rupees" COLOR(DEFAULT) "?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Buy\n"
"Don't buy" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x6078, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Thank you very much!" BOX_BREAK "What I'm selling is..." TEXT_SPEED("\x02")  COLOR(RED) "Bombchu" COLOR(DEFAULT) "!" TEXT_SPEED("\x00")  BOX_BREAK "The mark that will lead you to\n"
"the Spirit Temple is the " COLOR(RED) "flag on\n"
"the left " COLOR(DEFAULT) "outside the shop.\n"
"Be seeing you!"
)

DEFINE_MESSAGE(0x6079, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Hey, what's up, " NAME "?\n"
"Surprised to see me?" BOX_BREAK UNSKIPPABLE "A long time in this world is\n"
"almost nothing to you, is it?\n"
"How mysterious!" BOX_BREAK UNSKIPPABLE "Even I thought that the tales of a\n"
"boy who could travel back and\n"
"forth through time was merely a\n"
"legend." BOX_BREAK UNSKIPPABLE  NAME ", you have fully \n"
"matured as an adult." TEXTID("\x60\x7A")
)

DEFINE_MESSAGE(0x607A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"From now on, the future of all the\n"
"people in Hyrule is on your \n"
"shoulders." BOX_BREAK "Maybe it's not my time anymore. \n"
"Here is my last advice." BOX_BREAK "Two witches inhabit this temple. In \n"
"order to destroy them, " COLOR(RED) "turn their \n"
"own magic power against them" COLOR(DEFAULT) ".\n"
"Hoo hoot!" TEXTID("\x60\x7B")
)

DEFINE_MESSAGE(0x607B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Do you want to hear what I said\n"
"again?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Yes\n"
"No" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x607C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "I will continue to watch you...\n"
"Hoo hoo hoo hoot!"
)

DEFINE_MESSAGE(0x607D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "I'm the wandering running man!\n"
"I've run all over this land in\n"
"search of true competitive spirit." BOX_BREAK UNSKIPPABLE "I beat all my challengers, man and\n"
"beast." BOX_BREAK UNSKIPPABLE "You're an athletic guy, and you\n"
"look like you might have a true\n"
"killer instinct, too." BOX_BREAK UNSKIPPABLE "Now that the bridge over Gerudo\n"
"Valley is complete, I'm looking for\n"
"a challenger to have a \n"
"commemorative race against." TEXTID("\x60\x7E")
)

DEFINE_MESSAGE(0x607E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
"The best time to go from here to \n"
"the " COLOR(ADJUSTABLE) "bridge in the Lost Woods " COLOR(DEFAULT) "was\n"
COLOR(RED)  HIGHSCORE(HS_MARATHON)  COLOR(DEFAULT) ".  That's my record." BOX_BREAK "Will you challenge my record?\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Yes\n"
"No" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x607F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
"Excellent!\n"
"Then..." BOX_BREAK "You go first.\n"
"I'll give you a headstart." BOX_BREAK "Now! " TEXT_SPEED("\x02") "Go ahead." TEXT_SPEED("\x00")
)

DEFINE_MESSAGE(0x6080, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
"Heh heh heh.\n"
"You'll never discover your\n"
"killer instinct with that\n"
"kind of attitude."
)

DEFINE_MESSAGE(0x6081, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
"Well, not perfect, but you\n"
"have some guts! Unfortunately,\n"
"you never can beat me. Your\n"
"record is a thing of the past." BOX_BREAK "Your time was " COLOR(RED)  HIGHSCORE(HS_MARATHON)  COLOR(DEFAULT) ", wasn't it?\n"
"That was close, but I beat you\n"
"by one second!" EVENT
)

DEFINE_MESSAGE(0x6082, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
"Heh heh heh.\n"
"Please. " TEXT_SPEED("\x02") "Go ahead." TEXT_SPEED("\x00")
)

DEFINE_MESSAGE(0x6083, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
"Oh, looks like you quit the race.\n"
"Heh heh heh. I bet you had almost \n"
"rediscovered your killer instinct!" FADE("\x3C")
)

DEFINE_MESSAGE(0x6084, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
"Heh heh.\n"
"You don't have enough killer\n"
"instinct yet." BOX_BREAK "Just train harder.\n"
QUICKTEXT_ENABLE "Good-bye, then!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x6085, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
TEXT_SPEED("\x01")  QUICKTEXT_ENABLE "Huff..." QUICKTEXT_DISABLE  QUICKTEXT_ENABLE "puff..." QUICKTEXT_DISABLE  QUICKTEXT_ENABLE "huff..." QUICKTEXT_DISABLE  TEXT_SPEED("\x00")  BOX_BREAK "Huff...huff...whew!\n"
"You did quite well!" BOX_BREAK "But you couldn't beat me!\n"
"Your time was " COLOR(RED)  MARATHON_TIME  COLOR(DEFAULT) ", but I\n"
"just beat you by one second!" BOX_BREAK "Huff...huff... \n"
"You'll have to challenge me\n"
"again sometime!" BOX_BREAK "Huff...huff...\n"
QUICKTEXT_ENABLE "Good-bye, then!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x6086, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
"I'm the wandering running man!\n"
"I've run all over this land in \n"
"search of competitors who have a\n"
"true killer instinct!" BOX_BREAK "I came here to run through the \n"
"Haunted Wasteland, but it doesn't\n"
"look like good timing for that." BOX_BREAK "Though I want to go back to \n"
"Hyrule Field, the bridge is...well,\n"
"you can see it from here. So I'm\n"
"stuck here, inside this tent." BOX_BREAK "I don't think I can accept your\n"
"challenge right now.\n"
"Heh heh!"
)

DEFINE_MESSAGE(0x6087, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"6087"
)

DEFINE_MESSAGE(0x6088, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"6088"
)

DEFINE_MESSAGE(0x6089, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"6089"
)

DEFINE_MESSAGE(0x608A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"608A"
)

DEFINE_MESSAGE(0x608B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"608B"
)

DEFINE_MESSAGE(0x608C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"608C"
)

DEFINE_MESSAGE(0x608D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"608D"
)

DEFINE_MESSAGE(0x608E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"608E"
)

DEFINE_MESSAGE(0x608F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"608F"
)

DEFINE_MESSAGE(0x7000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I can't catch that Cucco!"
)

DEFINE_MESSAGE(0x7001, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Huff huff! \n"
"I'm late! I'm late!\n"
"For a very important date!"
)

DEFINE_MESSAGE(0x7002, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Welcome to Hyrule Castle Town.\n"
"It's a peaceful, prosperous town."
)

DEFINE_MESSAGE(0x7003, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Kids shouldn't be wandering around\n"
"town at nighttime! Stay indoors\n"
"until morning!"
)

DEFINE_MESSAGE(0x7004, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Man, I am SO bored...\n"
"Things would sure be more\n"
"interesting if there were more...\n"
"troubles in the world..." BOX_BREAK "Hey, that's just between you and\n"
"me, OK?" BOX_BREAK "Anyway, maybe we can let off \n"
"some steam by breaking these \n"
"jars." BOX_BREAK "Stand near a jar and press " COLOR(BLUE) "[A]" COLOR(DEFAULT) " to\n"
"lift it. Press " COLOR(BLUE) "[A]" COLOR(DEFAULT) " again to toss it!"
)

DEFINE_MESSAGE(0x7005, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "That's great!" BOX_BREAK UNSKIPPABLE "I forgot to tell you..." EVENT
)

DEFINE_MESSAGE(0x7006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "There's a lot going on in the \n"
"castle right now. I can't allow\n"
"even a dog to get into the \n"
"castle!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x7007, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Unnngh...are you the boy from \n"
"the forest...?" BOX_BREAK UNSKIPPABLE "I-I-I've finally met you...\n"
"I-I-I have something to t-t-tell\n"
"you..." BOX_BREAK UNSKIPPABLE  COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", the Gerudo King of\n"
"Thieves, betrayed our King..." BOX_BREAK UNSKIPPABLE "Zelda's nanny, " COLOR(RED) "Impa" COLOR(DEFAULT) ", sensed danger\n"
"and escaped from the castle with\n"
"our Princess..." BOX_BREAK UNSKIPPABLE "I tried to stop Ganondorf's men\n"
"from chasing them...but..." BOX_BREAK UNSKIPPABLE "The Princess was...waiting for a\n"
"boy from the forest...that's you...\n"
"She wanted to give " COLOR(RED) "something " COLOR(DEFAULT) "to\n"
"the boy..." BOX_BREAK UNSKIPPABLE "If you received it from the \n"
"Princess, " TEXT_SPEED("\x03")  QUICKTEXT_ENABLE "hurry" QUICKTEXT_DISABLE "..." QUICKTEXT_ENABLE "to the" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Tem" QUICKTEXT_DISABLE  QUICKTEXT_ENABLE "ple" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "of" QUICKTEXT_DISABLE "\n"
"Time" COLOR(DEFAULT) "...." TEXT_SPEED("\x00")  EVENT
)

DEFINE_MESSAGE(0x7008, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"He's not moving anymore...."
)

DEFINE_MESSAGE(0x7009, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Can you see the man with the \n"
"evil eyes?" BOX_BREAK UNSKIPPABLE "That is " COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", the leader of \n"
"the Gerudos. They hail from the \n"
"desert far to the west." BOX_BREAK UNSKIPPABLE "Though he swears allegiance to my \n"
"father, I am sure he is not \n"
"sincere." BOX_BREAK UNSKIPPABLE "The dark clouds that covered \n"
"Hyrule in my dream...\n"
"They must symbolize that man!"
)

DEFINE_MESSAGE(0x700A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x0E") "Geh heh heh! Excellent work!" BOX_BREAK_DELAYED("\x3C")  SHIFT("\x08") "As I thought, you held the keys\n"
SHIFT("\x26") "to the Door of Time!" BOX_BREAK_DELAYED("\x5A")  SHIFT("\x05") "You have led me to the gates of\n"
SHIFT("\x2D") "the Sacred Realm..." BOX_BREAK_DELAYED("\x50")  SHIFT("\x10") "Yes, I owe it all to you, kid!" FADE("\x32")
)

DEFINE_MESSAGE(0x700B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Please! If you don't hurry,\n"
"he'll be gone!" EVENT
)

DEFINE_MESSAGE(0x700C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Please...with " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "...\n"
"Please sell me the " COLOR(RED) "contents" COLOR(DEFAULT) " of a\n"
"bottle...\n"
"Please...with " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "..."
)

DEFINE_MESSAGE(0x700D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"What a strange shop! \n"
"I wonder when it'll be open for\n"
"business. I read the sign there, \n"
"but it still seems weird!"
)

DEFINE_MESSAGE(0x700E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"It seems like it's taking forever\n"
"for dawn to come..." BOX_BREAK "The view of Hyrule Castle in \n"
"the morning sun is so fantastic!"
)

DEFINE_MESSAGE(0x700F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"To save the forest girl, you need\n"
COLOR(RED) "another skill" COLOR(DEFAULT) "... \n"
"Head to Kakariko Village!"
)

DEFINE_MESSAGE(0x7010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"It looks like you have the\n"
"skills you need... \n"
"The " COLOR(ADJUSTABLE) "forest girl" COLOR(DEFAULT) " is waiting for your\n"
"help...."
)

DEFINE_MESSAGE(0x7011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"If you want potions, you'd better \n"
"bring an empty bottle. Understand,\n"
"young man?" PERSISTENT
)

DEFINE_MESSAGE(0x7012, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
"I'm sorry, but this is just a model. \n"
"Because of the crisis in Goron \n"
"City, we haven't received any \n"
"shipments lately and we're out." PERSISTENT
)

DEFINE_MESSAGE(0x7013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"If you plan on scaling Death\n"
"Mountain, buy a " COLOR(LIGHTBLUE) "Hylian Shield" COLOR(DEFAULT) ".\n"
"You can defend yourself against\n"
"falling rocks with that shield." BOX_BREAK "But it might be a little bit \n"
"big for a kid...." PERSISTENT
)

DEFINE_MESSAGE(0x7014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I'm not dancing, you know...\n"
"My back itches! \n"
"Ooh! Aaah! Ooh!"
)

DEFINE_MESSAGE(0x7015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"They say we " COLOR(LIGHTBLUE) "Hylians " COLOR(DEFAULT) "have big ears\n"
"in order to hear the voices of the \n"
"gods...but I've never heard them!"
)

DEFINE_MESSAGE(0x7016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Kid, have you been to \n"
COLOR(YELLOW) "Lon Lon Ranch" COLOR(DEFAULT) "?" BOX_BREAK UNSKIPPABLE "Their milk is delicious!\n"
"There are many horses there, and\n"
"the young daughter of the ranch\n"
"owner is cute!" TEXTID("\x70\x17")
)

DEFINE_MESSAGE(0x7017, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"To get to " COLOR(YELLOW) "Lon Lon Ranch" COLOR(DEFAULT) ", after\n"
"you leave town, head due south\n"
"across the field. You should visit\n"
"the ranch at least once!"
)

DEFINE_MESSAGE(0x7018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "I wanted to see " COLOR(RED) "Princess Zelda" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "I avoided the guards..." BOX_BREAK UNSKIPPABLE "Swam through the moat..." BOX_BREAK UNSKIPPABLE "I was almost there when they\n"
"caught me!" TEXTID("\x70\x19")
)

DEFINE_MESSAGE(0x7019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I found a " COLOR(RED) "small drain hole " COLOR(DEFAULT) "on the\n"
"right side of the castle that I\n"
"thought I could sneak into, but I\n"
"got stuck there."
)

DEFINE_MESSAGE(0x701A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x37") "Ahem! " QUICKTEXT_ENABLE "Hrrrm!" QUICKTEXT_DISABLE  BOX_BREAK SHIFT("\x05") "This beard is my pride and joy!\n"
SHIFT("\x07") "Doesn't it look luxuriant, kid?!"
)

DEFINE_MESSAGE(0x701B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  SHIFT("\x37") "Ahem! " QUICKTEXT_ENABLE "Hrrrm!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE  SHIFT("\x05") "This beard is my pride and joy!\n"
SHIFT("\x07") "Doesn't it look luxuriant, kid?!" BOX_BREAK UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x51") "What?!" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "You're looking for the guy from\n"
"Lon Lon Ranch?" BOX_BREAK UNSKIPPABLE "Hmm, maybe..." TEXTID("\x70\x1C")
)

DEFINE_MESSAGE(0x701C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I saw a " COLOR(RED) "guy with a shabby-looking\n"
"beard " COLOR(DEFAULT) "delivering some boxes to \n"
"the castle."
)

DEFINE_MESSAGE(0x701D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Do you know about the " COLOR(LIGHTBLUE) "Temple \n"
"of Time " COLOR(DEFAULT) "that we have in the \n"
"northeast part of town?" TEXTID("\x70\x1E")
)

DEFINE_MESSAGE(0x701E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Legends say that the Temple of\n"
"Time is the entrance to the \n"
"Sacred Realm..." BOX_BREAK "Did you know that?"
)

DEFINE_MESSAGE(0x701F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Wha-ha-ha! What a crazy guy!" BOX_BREAK UNSKIPPABLE "Can you believe this guy was \n"
"crazy enough to try to sneak into\n"
"the castle to see " COLOR(RED) "Princess Zelda" COLOR(DEFAULT) "?" TEXTID("\x70\x20")
)

DEFINE_MESSAGE(0x7020, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"All because of this idiot, they've \n"
"tightened security at the castle.\n"
"Wha-ha-hah!"
)

DEFINE_MESSAGE(0x7021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "I made a lot of money!" BOX_BREAK UNSKIPPABLE "Maybe I should go look for\n"
"more things to sell!" TEXTID("\x70\x22")
)

DEFINE_MESSAGE(0x7022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I know! I should go to " COLOR(BLUE) "Lake Hylia" COLOR(DEFAULT) "!\n"
"Many things float down the river\n"
"and end up there!\n"
"Hah hah!"
)

DEFINE_MESSAGE(0x7023, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hey, forest boy! This is the " COLOR(LIGHTBLUE) "city\n"
"of Hyrule" COLOR(DEFAULT) "! Take your time and\n"
"enjoy the sights!" TEXTID("\x70\x24")
)

DEFINE_MESSAGE(0x7024, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"If you came here to see " COLOR(LIGHTBLUE) "Hyrule\n"
"Castle" COLOR(DEFAULT) ", take the street on your\n"
"right." BOX_BREAK "If you want to see the " COLOR(BLUE) "back \n"
"alleys" COLOR(DEFAULT) " of the town, take the\n"
"street to the left."
)

DEFINE_MESSAGE(0x7025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ohh..." BOX_BREAK "You are...so handsome..." BOX_BREAK "Just like the King of Hyrule..." BOX_BREAK "Hee hee..."
)

DEFINE_MESSAGE(0x7026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ohh..." BOX_BREAK "You are..." BOX_BREAK "more beautiful..." BOX_BREAK "than Princess Zelda..." BOX_BREAK "Ohh..."
)

DEFINE_MESSAGE(0x7027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Have you heard the legend of the\n"
"\"Shadow Folk\"?" BOX_BREAK UNSKIPPABLE "They are the " COLOR(BLUE) "Sheikah" COLOR(DEFAULT) "...the shadows\n"
"of the Hylians." BOX_BREAK UNSKIPPABLE "They say they swore allegiance to\n"
"the King of Hyrule and guarded\n"
"the Royal Family." BOX_BREAK UNSKIPPABLE "But with the long peace, no one\n"
"has seen a Sheikah around here \n"
"for a long time." BOX_BREAK UNSKIPPABLE "However..." TEXTID("\x70\x28")
)

DEFINE_MESSAGE(0x7028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I heard there is one " COLOR(BLUE) "Sheikah \n"
COLOR(DEFAULT) "woman living in the castle..."
)

DEFINE_MESSAGE(0x7029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"So you say you want to see\n"
COLOR(RED) "Princess Zelda" COLOR(DEFAULT) ", eh?" BOX_BREAK "You probably heard about her in\n"
"town and decided you had to meet\n"
"her... Well..." BOX_BREAK QUICKTEXT_ENABLE "Go home!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Get out of here!" QUICKTEXT_DISABLE "\n"
"The Princess would never grant an\n"
"audience to the likes of you!"
)

DEFINE_MESSAGE(0x702A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Z Z Z Z Z...." BOX_BREAK "Mumble mumble..." BOX_BREAK "Welcome...our ranch is so fun..." BOX_BREAK "C'mon and look around..."
)

DEFINE_MESSAGE(0x702B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  QUICKTEXT_ENABLE  SHIFT("\x2D") "What in tarnation?" QUICKTEXT_DISABLE  BOX_BREAK UNSKIPPABLE "Can't a person get a little shut-\n"
"eye around here?"
)

DEFINE_MESSAGE(0x702C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Hello, and who might you be?" BOX_BREAK UNSKIPPABLE "Yep, I'm " COLOR(RED) "Talon" COLOR(DEFAULT) ", the owner of Lon \n"
"Lon Ranch." BOX_BREAK UNSKIPPABLE "I went to the castle to deliver\n"
"some milk, but I sat down here to\n"
"rest, and I guess I fell asleep..." BOX_BREAK UNSKIPPABLE  SHIFT("\x4C")  SFX("\x68\x52") "What?!\n"
"Malon was looking for me?\n"
"I'm gonna catch it from her now!" BOX_BREAK UNSKIPPABLE "I messed up bad, leaving Malon\n"
"behind to wait for me!" BOX_BREAK UNSKIPPABLE "She's really gonna let me have it!" EVENT
)

DEFINE_MESSAGE(0x702D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE  SHIFT("\x37") "Hey you! Stop!\n"
SHIFT("\x28") "You, kid, over there!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x702E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x5F") "!" BOX_BREAK_DELAYED("\x0A")  UNSKIPPABLE  SHIFT("\x4E")  QUICKTEXT_ENABLE "Who?!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x702F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x3A") "Who are you?" BOX_BREAK UNSKIPPABLE "How did you get past the guards?" EVENT
)

DEFINE_MESSAGE(0x7030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Do you have it? \n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Yes\n"
"No" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x7031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Well, that's odd...\n"
"I thought you might be the one\n"
"from my dream...\n"
"You really don't have it?" BOX_BREAK "Tell me the truth..." EVENT
)

DEFINE_MESSAGE(0x7032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x2D") "Just as I thought!" EVENT
)

DEFINE_MESSAGE(0x7033, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Please keep this a secret from\n"
"everyone...\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "OK\n"
"No" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x7034, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"C'mon...don't be a blabber-mouth!" EVENT
)

DEFINE_MESSAGE(0x7035, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "The legend goes like this..." EVENT
)

DEFINE_MESSAGE(0x7036, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x12") "The three goddesses hid the\n"
SHIFT("\x07")  COLOR(RED) "Triforce " COLOR(DEFAULT) "containing the power of\n"
SHIFT("\x0D") "the gods somewhere in Hyrule." BOX_BREAK_DELAYED("\x50")  UNSKIPPABLE  SHIFT("\x45") "The power\n"
SHIFT("\x03") "to grant the wish of the one who\n"
SHIFT("\x0A") "holds the Triforce in his hands." BOX_BREAK_DELAYED("\x50")  UNSKIPPABLE  SHIFT("\x03") "If someone with a righteous heart\n"
SHIFT("\x07") "makes a wish, it will lead Hyrule\n"
SHIFT("\x09") "to a golden age of prosperity...." BOX_BREAK_DELAYED("\x3C")  UNSKIPPABLE  SHIFT("\x06") "If someone with an evil mind has\n"
SHIFT("\x0A") "his wish granted, the world will\n"
SHIFT("\x02") "be consumed by evil...That is what\n"
SHIFT("\x35") "has been told...." BOX_BREAK_DELAYED("\x50")  UNSKIPPABLE  SHIFT("\x16") "So, the ancient Sages built\n"
SHIFT("\x02") "the " COLOR(LIGHTBLUE) "Temple of Time" COLOR(DEFAULT) " to protect the\n"
SHIFT("\x20") "Triforce from evil ones." FADE("\x5A")
)

DEFINE_MESSAGE(0x7037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"That's right... The Temple of Time\n"
"is the entrance through which you\n"
"can enter the Sacred Realm from\n"
"our world." BOX_BREAK "But the entrance is sealed with\n"
"a stone wall called the \n"
COLOR(LIGHTBLUE) "Door of Time" COLOR(DEFAULT) "." BOX_BREAK "And, in order to open the door,\n"
"it is said that you need to collect\n"
"three " COLOR(RED) "Spiritual Stones" COLOR(DEFAULT) "." BOX_BREAK "And another thing you need...is\n"
"the treasure that the Royal Family\n"
"keeps along with this legend..." EVENT
)

DEFINE_MESSAGE(0x7038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oh, I'm sorry. \n"
"I'm not very good at storytelling..." EVENT
)

DEFINE_MESSAGE(0x7039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE  QUICKTEXT_ENABLE "What happened?" QUICKTEXT_DISABLE " Did he see you?" BOX_BREAK UNSKIPPABLE "Don't worry." BOX_BREAK UNSKIPPABLE "He doesn't have any idea what\n"
"we're planning...yet!" EVENT
)

DEFINE_MESSAGE(0x703A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Please!\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "OK\n"
"I don't believe you." COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x703B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x42") "Thank you!" EVENT
)

DEFINE_MESSAGE(0x703C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"My attendant will guide you out of\n"
"the castle. Don't be afraid to talk\n"
"to her."
)

DEFINE_MESSAGE(0x703D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"The Spiritual Stone...\n"
"You finally found it!" BOX_BREAK "It is said that the races that hold\n"
"the Spiritual Stones open their\n"
"minds only to one who knows the\n"
COLOR(BLUE) "melody of the Royal Family" COLOR(DEFAULT) "." BOX_BREAK "But you already know that, don't\n"
"you?"
)

DEFINE_MESSAGE(0x703E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, have you heard that\n"
"Princess Zelda sees prophetic \n"
"visions in her dreams?"
)

DEFINE_MESSAGE(0x703F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Huh? What? Shoo, kid! Shoo!"
)

DEFINE_MESSAGE(0x7040, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"There are three hollows and \n"
"an inscription here...." BOX_BREAK QUICKTEXT_ENABLE "Ye who owns 3 Spiritual Stones " COLOR(BLUE) "\n"
COLOR(DEFAULT) "Stand with the " COLOR(LIGHTBLUE) "Ocarina of Time" COLOR(BLUE) "\n"
COLOR(DEFAULT) "And play the " COLOR(LIGHTBLUE) "Song of Time" COLOR(DEFAULT)  QUICKTEXT_DISABLE  BOX_BREAK "That is how the inscription reads." EVENT
)

DEFINE_MESSAGE(0x7041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"C'mon, can't you make it any\n"
"cheaper?"
)

DEFINE_MESSAGE(0x7042, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, let go! It's mine!\n"
"I found it first!"
)

DEFINE_MESSAGE(0x7043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, who bumped me?!"
)

DEFINE_MESSAGE(0x7044, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"We don't see a lot of Gerudos in\n"
"these parts...\n"
"Something fishy is going on!"
)

DEFINE_MESSAGE(0x7045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Wasn't that Princess Zelda riding\n"
"on the white horse?!"
)

DEFINE_MESSAGE(0x7046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I almost got kicked by that\n"
"black horse!"
)

DEFINE_MESSAGE(0x7047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"That guy riding on the black horse\n"
"must have been Ganondorf, who is\n"
"renowned as the Gerudo King of \n"
"Thieves."
)

DEFINE_MESSAGE(0x7048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"What happened?!"
)

DEFINE_MESSAGE(0x7049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Look at that guy--he's so scared!\n"
"What a wimp!\n"
"Ha ha hah!"
)

DEFINE_MESSAGE(0x704A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"I have a feeling something\n"
"terrible is going to happen...\n"
"Maybe I should leave town soon."
)

DEFINE_MESSAGE(0x704B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Something happened in the castle!\n"
"Kid, you'd better be careful!"
)

DEFINE_MESSAGE(0x704C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"With that " COLOR(RED) "key" COLOR(DEFAULT) ", proceed to the \n"
"room ahead. Go, go!"
)

DEFINE_MESSAGE(0x704D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"The one riding on the white horse\n"
"holding the little girl...\n"
"Wasn't that a legendary Sheikah?"
)

DEFINE_MESSAGE(0x704E, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE  SHIFT("\x2D")  NAME "..." BOX_BREAK UNSKIPPABLE  SHIFT("\x45") "Wake up...\n"
SHIFT("\x05")  NAME ", the chosen one..."
)

DEFINE_MESSAGE(0x704F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "I am " COLOR(RED) "Rauru" COLOR(DEFAULT) ", one of the ancient\n"
"Sages..." BOX_BREAK UNSKIPPABLE "Ages ago, we ancient Sages\n"
"built the Temple of Time to \n"
"protect the entrance to the\n"
"Sacred Realm..." BOX_BREAK UNSKIPPABLE "This is the " COLOR(RED) "Chamber of Sages" COLOR(DEFAULT) "," COLOR(RED) " \n"
COLOR(DEFAULT) "inside the Temple of Light..." BOX_BREAK UNSKIPPABLE "The Temple of Light, situated in\n"
"the very center of the Sacred \n"
"Realm, is the last stronghold \n"
"against Ganondorf's evil forces." BOX_BREAK UNSKIPPABLE "The " COLOR(RED) "Master Sword" COLOR(DEFAULT) "--the evil-\n"
"destroying sword that you pulled\n"
"out of the Pedestal of Time--was \n"
"the final key to the Sacred Realm." BOX_BREAK UNSKIPPABLE  NAME "...\n"
"Don't be alarmed...\n"
"Look at yourself...!"
)

DEFINE_MESSAGE(0x7050, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x23")  COLOR(LIGHTBLUE) "Look " NAME "!\n"
COLOR(DEFAULT)  SHIFT("\x32")  COLOR(LIGHTBLUE) "You're big now!!\n"
COLOR(DEFAULT)  SHIFT("\x31")  COLOR(LIGHTBLUE) "You've grown up!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x7051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "The Master Sword is a sacred\n"
"blade which evil ones may never\n"
"touch...." BOX_BREAK UNSKIPPABLE "Only one worthy of the title of\n"
"\"" COLOR(RED) "Hero of Time" COLOR(DEFAULT) "\"" COLOR(RED) " " COLOR(DEFAULT) "can pull it from \n"
"the Pedestal of Time...." BOX_BREAK UNSKIPPABLE "However, you were too young to \n"
"be the Hero of Time...." BOX_BREAK UNSKIPPABLE "Therefore, your spirit was \n"
"sealed here for seven years." BOX_BREAK UNSKIPPABLE "And now that you are old enough,\n"
"the time has come for you to\n"
"awaken" COLOR(RED) " " COLOR(DEFAULT) "as the Hero of Time!" BOX_BREAK "Well, do you understand your \n"
"destiny?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Yes\n"
"No" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x7052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Right, it looks like you are \n"
"confused... Let me tell you \n"
"again, from the beginning." TEXTID("\x70\x51")
)

DEFINE_MESSAGE(0x7053, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "But, remember..." BOX_BREAK UNSKIPPABLE "Though you opened the Door of \n"
"Time in the name of peace..." BOX_BREAK UNSKIPPABLE  COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", the Gerudo King of\n"
"Thieves, used it to enter this \n"
"forbidden Sacred Realm!" BOX_BREAK UNSKIPPABLE "He obtained the Triforce from\n"
"the Temple of Light, and with its \n"
"power, he became the " COLOR(RED) "King of Evil" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "His evil power radiated from the\n"
"temples of Hyrule, and in seven\n"
"short years, it transformed Hyrule\n"
"into a world of monsters." BOX_BREAK UNSKIPPABLE "My power now has only little \n"
"influence, even in this Sacred\n"
"Realm..." BOX_BREAK UNSKIPPABLE "Namely, this Chamber of Sages." BOX_BREAK UNSKIPPABLE "But there is still hope..." BOX_BREAK UNSKIPPABLE "The power of the Sages remains." BOX_BREAK UNSKIPPABLE "When the power of all the " COLOR(RED) "Sages\n"
COLOR(DEFAULT) "is awakened..." BOX_BREAK UNSKIPPABLE "The " COLOR(RED) "Sages' Seals" COLOR(DEFAULT) " will contain\n"
"all the evil power in the void of \n"
"the Realm..." BOX_BREAK UNSKIPPABLE "I, Rauru, am one of the Sages...\n"
"And..." BOX_BREAK UNSKIPPABLE "Your power to fight together with\n"
"the Sages makes you the \n"
COLOR(RED) "Hero of Time" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "The Hero of Time, chosen by the\n"
"Master Sword!" BOX_BREAK UNSKIPPABLE "Keep my spirit with you...\n"
"And, find the power of the other\n"
"Sages and add their might to your\n"
"own!"
)

DEFINE_MESSAGE(0x7054, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE)  NAME "...we're back in the\n"
COLOR(DEFAULT) "Temple of Time" COLOR(LIGHTBLUE) "...\n"
"But have " COLOR(DEFAULT) "seven years" COLOR(LIGHTBLUE) " really\n"
"passed?" COLOR(DEFAULT)  BOX_BREAK UNSKIPPABLE  COLOR(LIGHTBLUE) "It looks like you won't be\n"
"able to use some of the " COLOR(DEFAULT) "weapons" COLOR(LIGHTBLUE) "\n"
"you found as a kid anymore..." BOX_BREAK COLOR(DEFAULT)  UNSKIPPABLE  COLOR(LIGHTBLUE) "Let's get out of here!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x7055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Heyyy, what...? \n"
"What's wrong with loitering\n"
"around all day?" BOX_BREAK "Huh, kid?"
)

DEFINE_MESSAGE(0x7056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "I've been waiting for you, \n"
"Hero of Time..."
)

DEFINE_MESSAGE(0x7057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "When evil rules all, an awakening\n"
"voice from the Sacred Realm will\n"
"call those destined to be Sages,\n"
"who dwell in the " COLOR(RED) "five temples" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "One in a " COLOR(ADJUSTABLE) "deep forest" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "One on a " COLOR(RED) "high mountain" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "One under a " COLOR(BLUE) "vast lake" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "One within the " COLOR(PURPLE) "house of the dead" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "One inside a " COLOR(YELLOW) "goddess of the sand" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "Together with the Hero of Time, \n"
"the awakened ones will bind the\n"
"evil and return the light of peace\n"
"to the world..." BOX_BREAK UNSKIPPABLE "This is the legend of the temples\n"
"passed down by my people, the\n"
COLOR(BLUE) "Sheikah" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x7058, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Oh, I'm sorry.\n"
"We're not open for business yet.\n"
"Please come back soon!" EVENT
)

DEFINE_MESSAGE(0x7059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Use the " COLOR(RED) "Master Sword" COLOR(DEFAULT) "!\n"
"Destroy Ganon with the sacred\n"
"sword!"
)

DEFINE_MESSAGE(0x705A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE "I have been waiting for you,\n"
NAME "."
)

DEFINE_MESSAGE(0x705B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME ", the Hero of Time..." BOX_BREAK UNSKIPPABLE "You have overcome many \n"
"hardships and awakened six Sages." BOX_BREAK UNSKIPPABLE "And now you have a final\n"
"challenge, a showdown with \n"
"Ganondorf, the King of Evil...."
)

DEFINE_MESSAGE(0x705C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x10") "If you would seek the sacred\n"
SHIFT("\x28") "triangle, listen well..." BOX_BREAK_DELAYED("\x3C")  UNSKIPPABLE  SHIFT("\x09") "The resting place of the sacred\n"
SHIFT("\x09") "triangle, the Sacred Realm, is a\n"
SHIFT("\x14") "mirror that reflects what is\n"
SHIFT("\x3B") "in the heart..." BOX_BREAK_DELAYED("\x46")  UNSKIPPABLE  SHIFT("\x05") "the heart of one who enters it...\n"
SHIFT("\x0C") "If an evil heart, the Realm will\n"
SHIFT("\x14") "become full of evil; if pure,\n"
SHIFT("\x04") "the Realm will become a paradise." BOX_BREAK_DELAYED("\x5A")  UNSKIPPABLE  SHIFT("\x02") "The Triforce...the sacred triangle...\n"
SHIFT("\x0A") "it is a balance that weighs the\n"
SHIFT("\x3C") "three forces:\n"
SHIFT("\x13") "Power, Wisdom and Courage." BOX_BREAK_DELAYED("\x5A")  UNSKIPPABLE  SHIFT("\x02") "If the heart of the one who holds\n"
SHIFT("\x06") "the sacred triangle has all three\n"
SHIFT("\x0A") "forces in balance, that one will\n"
SHIFT("\x03") "gain the True Force to govern all." BOX_BREAK_DELAYED("\x50")  UNSKIPPABLE  SHIFT("\x06") "But, if that one's heart is not in\n"
SHIFT("\x02") "balance, the Triforce will separate\n"
SHIFT("\x32") "into three parts:\n"
SHIFT("\x13") "Power, Wisdom and Courage." BOX_BREAK_DELAYED("\x50")  UNSKIPPABLE  SHIFT("\x04") "Only one part will remain for the\n"
SHIFT("\x02") "one who touched the Triforce...the\n"
SHIFT("\x07") "part representing the force that\n"
SHIFT("\x27") "one most believes in." BOX_BREAK_DELAYED("\x5A")  UNSKIPPABLE  SHIFT("\x04") "If that one seeks the True Force,\n"
SHIFT("\x0C") "that one must acquire the two\n"
SHIFT("\x44") "lost parts." BOX_BREAK_DELAYED("\x50")  UNSKIPPABLE  SHIFT("\x12") "Those two parts will be held\n"
SHIFT("\x07") "within others chosen by destiny,\n"
SHIFT("\x0A") "who will bear the Triforce mark\n"
SHIFT("\x11") "on the backs of their hands." FADE("\x5A")
)

DEFINE_MESSAGE(0x705D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Seven years ago, Ganondorf, the \n"
"King of Thieves, used the door \n"
"you opened in the Temple of Time\n"
"and entered the Sacred Realm." BOX_BREAK UNSKIPPABLE "But when he laid his hands on the\n"
"Triforce, the legend came true."
)

DEFINE_MESSAGE(0x705E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "The one who holds the " COLOR(RED) "Triforce \n"
"of Courage " COLOR(DEFAULT) "is...\n"
"You, " NAME "!"
)

DEFINE_MESSAGE(0x705F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "And the other, who holds the \n"
COLOR(RED) "Triforce of Wisdom" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "is the seventh Sage, who is\n"
"destined to be the leader of\n"
"them all..."
)

DEFINE_MESSAGE(0x7060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "It is I, the Princess of Hyrule,\n"
COLOR(RED) "Zelda" COLOR(DEFAULT) "."
)

DEFINE_MESSAGE(0x7061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "I apologize for meeting you in \n"
"disguise, but it was necessary to\n"
"hide from the King of Evil. \n"
"Please forgive me..."
)

DEFINE_MESSAGE(0x7062, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"I saw you as I was escaping \n"
"from the castle with my \n"
"attendant, Impa." FADE("\x50")
)

DEFINE_MESSAGE(0x7063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "As long as you had the Ocarina \n"
"in your possession, I thought \n"
"Ganondorf could never enter the\n"
"Sacred Realm, but..." BOX_BREAK UNSKIPPABLE "something I could never expect\n"
"happened..."
)

DEFINE_MESSAGE(0x7064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x24") "That rumbling...It can't be!?"
)

DEFINE_MESSAGE(0x7065, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Princess Zelda...you foolish \n"
"traitor!" BOX_BREAK UNSKIPPABLE "I commend you for avoiding my \n"
"pursuit for seven long years."
)

DEFINE_MESSAGE(0x7066, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "If you want to rescue Zelda,\n"
"come to my castle!"
)

DEFINE_MESSAGE(0x7067, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_TOP,
UNSKIPPABLE  NAME "...can you hear me?\n"
"It's Rauru, the Sage." BOX_BREAK UNSKIPPABLE "We six will gather our power to\n"
"create a bridge to the castle\n"
"where Ganondorf dwells..." BOX_BREAK UNSKIPPABLE "The castle's keep, which is \n"
"known as Ganon's Tower, is \n"
"protected by " COLOR(RED) "six evil barriers" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "Bring down the six barriers and\n"
"save Princess Zelda!!"
)

DEFINE_MESSAGE(0x7068, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"7068"
)

DEFINE_MESSAGE(0x7069, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"7069"
)

DEFINE_MESSAGE(0x706A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
"706a"
)

DEFINE_MESSAGE(0x706B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"706b"
)

DEFINE_MESSAGE(0x706C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hyrules Forntida Skapare!" BOX_BREAK_DELAYED("\x3C") "Öppna nu den förseglade dörren,\n"
"och sänd in Mörkrets Onda Inkarnation\n"
"i det Onda Rikets tomhet!!" FADE("\x5A")
)

DEFINE_MESSAGE(0x706D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE  NAME "!\n"
"Avsluta honom med tidens svärd,\n"
"Mäster Svärdet!"
)

DEFINE_MESSAGE(0x706E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Oh förseglade dörr öppnad av de \n"
"Vise... Stäng dig förevigt med \n"
"Mörkrets Onda Inkarnation\n"
"inuti!!"
)

DEFINE_MESSAGE(0x706F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Vi tackar dig, " NAME "..." BOX_BREAK UNSKIPPABLE "Tack vare dig, har Ganondorf\n"
"förseglats inom det Onda Riket!" BOX_BREAK UNSKIPPABLE "Och så, kommer fred att regera\n"
"i denna värld...för en tid."
)

DEFINE_MESSAGE(0x7070, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE  SHIFT("\x3C") "Tack...\n"
SHIFT("\x32")  NAME "..." BOX_BREAK_DELAYED("\x28")  UNSKIPPABLE  SHIFT("\x32") "Farväl...." FADE("\x3C")
)

DEFINE_MESSAGE(0x7071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vill du verkligen så gärna ta dig\n"
"genom den här porten? Låt mig tänka\n"
"över det... Okej, men i utbyte..." TEXTID("\x70\x72")
)

DEFINE_MESSAGE(0x7072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ge mig " COLOR(RED) "10 Rupees" COLOR(DEFAULT) "...\n"
"\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x7073, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Snälla, tro mig....\n"
"Mina profetsior har aldrig varit\n"
"felaktiga!" EVENT
)

DEFINE_MESSAGE(0x7074, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du förgjorde the onda\n"
"varelserna som hemsökte templet\n"
"och väckte upp Visen..." BOX_BREAK UNSKIPPABLE "Men det finns fortfarande fler Vise\n"
"som behöver din hjälp." BOX_BREAK UNSKIPPABLE "För att kunna väcka upp resten av\n"
"de Vise, måste du bli ännnu mera\n"
"kraftfull." BOX_BREAK UNSKIPPABLE "Du måste färdas över\n"
"berg..." BOX_BREAK UNSKIPPABLE "under vatten..." BOX_BREAK UNSKIPPABLE "och även genom tid..."
)

DEFINE_MESSAGE(0x7075, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Så länge du håller " COLOR(LIGHTBLUE) "Tidens\n"
"Okarina" COLOR(DEFAULT) " och " COLOR(LIGHTBLUE) "Mästersvärdet" COLOR(DEFAULT) "," BOX_BREAK UNSKIPPABLE "håller du tiden själv i dina\n"
"händer..." BOX_BREAK UNSKIPPABLE  NAME ", vi kommer mötas\n"
"igen!"
)

DEFINE_MESSAGE(0x7076, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Detta är en ny typ av bomb!\n"
"Den finns tillgänglig endast i begränsad\n"
"kvantitet, och när den är slutsåld\n"
"så är det färdigt!" EVENT
)

DEFINE_MESSAGE(0x7077, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag är " COLOR(RED) "Sheik" COLOR(DEFAULT) ".\n"
"En överlevare av Sheikah-folket..."
)

DEFINE_MESSAGE(0x7078, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "När jag ser dig stående där\n"
"med det mytomspunna " COLOR(RED) "Mästersvärdet\n"
COLOR(DEFAULT) ", ser du verkligen ut att vara den\n"
"legendariska Hjälten av Tid..."
)

DEFINE_MESSAGE(0x7079, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Om du tror på legenden, så\n"
"har du inget val. Du måste söka efter\n"
"de fem templen och väcka upp de\n"
COLOR(RED) "fem Vise" COLOR(DEFAULT) "...."
)

DEFINE_MESSAGE(0x707A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "En Vise väntar på sin tid att\n"
"vakna vid " COLOR(ADJUSTABLE) "Skogstemplet" COLOR(DEFAULT) ".\n"
"Denna Vise är en flicka jag är säker på\n"
"att du känner..." BOX_BREAK UNSKIPPABLE "På grund av den onda kraften i templet\n"
"kan hon inte höra kallet från\n"
"det Helgade Riket\n"
BOX_BREAK UNSKIPPABLE "Men tyvärr, utrustad som du\n"
"är just nu, kan du inte ens\n"
"ta dig in i templet..." BOX_BREAK UNSKIPPABLE "Men, om du tror på vad jag säger,\n"
"borde du bege dig till " COLOR(RED) "Kakarikobyn \n"
COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "Hänger du med, \n"
NAME "?"
)

DEFINE_MESSAGE(0x707B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
"Jag tänkte att jag borde anförtro\n"
"Okarinan till dig... Jag tänkte att det\n"
"vore vår bästa chans..." FADE("\x50")
)

DEFINE_MESSAGE(0x707C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Innan det...Jag har saker jag vill\n"
"berätta endast till dig. Lyssna, är du snäll." BOX_BREAK UNSKIPPABLE "En annan okänd legend om \n"
"Triforce som försts vidare av\n"
"skuggfolket, Sheikah-folket...."
)

DEFINE_MESSAGE(0x707D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Triforce kraften separerades i tre\n"
"delar. Endast " COLOR(RED) "Styrkans Triforce" COLOR(DEFAULT) "\n"
"återblev i Ganondorfs hand."
)

DEFINE_MESSAGE(0x707E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Kraften från Styrkans Triforce var tillräcklig\n"
"för att göra det möjligt för honom att\n"
"bli en mäktig, ond kung, men hans mörka\n"
"ambitioner kunde inte tillfredsställas."
)

DEFINE_MESSAGE(0x707F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "För att uppnå fullständigt herravälde över\n"
"världen, började Ganondorf söka efter\n"
COLOR(RED) "de av ödet utvalda" COLOR(DEFAULT) " att \n"
"hålla de två andra Triforce delarna."
)

DEFINE_MESSAGE(0x7080, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "På den dagen, för sju år sedan,\n"
"attackerade Ganondorf Hyrule Slott."
)

DEFINE_MESSAGE(0x7081, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Efter att du öppnade Tidens\n"
"Dörr, förseglade Mästersvärdet dig\n"
"i det Helgade Riket..."
)

DEFINE_MESSAGE(0x7082, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Din själ förblev förseglad i det\n"
"Helgade Riket...och sedan föll Triforce kraften\n"
"i Ganondorfs händer. Han fortsatte genom\n"
"att invadera det Helgade Riket..." BOX_BREAK UNSKIPPABLE "Ganondorf hade blivit den Onda\n"
"Kungen, och det Helgade Riket\n"
"blev en värld av ondska. Alla dessa\n"
"är olycksamma sammanträffanden." BOX_BREAK UNSKIPPABLE "Jag dolde mig som en Sheikah\n"
"och hoppades att du en dag skulle återvända.\n"
"Jag väntade i sju år..."
)

DEFINE_MESSAGE(0x7083, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Och...nu är du tillbaka. Den mörka\n"
"tiden härledd av den Onda Kungen\n"
"Ganondorf kommer upphöra!"
)

DEFINE_MESSAGE(0x7084, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "De sex Vise kommer öppna den förseglade\n"
"dörren och lura Ganondorf tillbaka in\n"
"i det Helgade Riket." BOX_BREAK UNSKIPPABLE "Jag förseglar sedan dörren mellan\n"
"världarna utifrån." BOX_BREAK UNSKIPPABLE "På så vis, försvinner den Onda Kungen\n"
"Ganondorf från Hyrule." BOX_BREAK UNSKIPPABLE  NAME "...\n"
"För jag göra detta, behöver jag  ditt\n"
"mod igen. Var god och beskydda\n"
"mig när jag utför min del." BOX_BREAK UNSKIPPABLE "Och här är ett vapen som can \n"
"penetrera den Onda Kungens försvar...\n"
"Kraften given till de utvalda...\n"
BOX_BREAK UNSKIPPABLE  SHIFT("\x0F") "Den heliga " COLOR(LIGHTBLUE) "Pilen av Ljus" COLOR(DEFAULT) "!!!"
)

DEFINE_MESSAGE(0x7085, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Men du tappade ditt fokus...\n"
"Jag visste att du skulle dyka upp om\n"
"jag let den här pojken vandra omkring!"
)

DEFINE_MESSAGE(0x7086, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Mitt enda misstag var att lätt\n"
"underskatta killens kraft..."
)

DEFINE_MESSAGE(0x7087, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Nej...\n"
"Det var inte pojkens kraft jag\n"
"felbedömde, det var kraften av\n"
"Modets Triforce!" BOX_BREAK UNSKIPPABLE "Men, med visdomens Triforce\n"
"som Zelda besitter...\n"
"När jag beslagtar dessa två\n"
"Triforce Krafter..." BOX_BREAK UNSKIPPABLE "Då blir jag den sanna\n"
"härskaren, över världen!"
)

DEFINE_MESSAGE(0x7088, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Tidens Okarina öppnade dörren.\n"
"Hjälten av Tid, bärandes på\n"
"Mästersvärdet, nedsteg här." QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x7089, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"En flock hundar strövar omkring\n"
"här på gatorna nattetid,\n"
"verkar lite märkligt, eller hur?"
)

DEFINE_MESSAGE(0x708A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hördu, grabb, jag ska berätta något\n"
"som kan hjälpa..." BOX_BREAK "Jag hörde att det finns en " COLOR(RED) "mystisk\n"
"fontän" COLOR(DEFAULT) " någonstans i närheten\n"
"av slottet..."
)

DEFINE_MESSAGE(0x708B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "När du vill återvända till din\n"
"ursprungliga tid, returnera Mästersvärdet\n"
"till " COLOR(RED) "Tidens Pedestal" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "På så vis, färdas du tillbaka\n"
"i tiden, sju år...."
)

DEFINE_MESSAGE(0x708C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Det lär komma tillfällen när du\n"
"måste återevända hit snabbt...\n"
"Jag lär dig denna melodi som för att\n"
"förbereda dig inför dem..." BOX_BREAK UNSKIPPABLE "Sången som för dig tillbaka till\n"
"Tidens Tempel...\n"
COLOR(LIGHTBLUE) "Ljusets Preludium" COLOR(DEFAULT) "..."
)

DEFINE_MESSAGE(0x708D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag är " COLOR(RED) "Impa " COLOR(DEFAULT) "av Sheikah-folket.\n"
"Jag ansvarar över Prinsessan Zeldas\n"
"beskyddning. Alltng är precis\n"
"såsom Prinsessan förutspått."
)

DEFINE_MESSAGE(0x708E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om slottsvakterna får syn på dig\n"
"så blir det trubbel. Låt mig\n"
"leda ut dig ur slottet."
)

DEFINE_MESSAGE(0x708F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Du där! Orsaka inte något trubbel!" QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x7090, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Du är en tapper pojke...\n"
"Du beger dig ut på ett stort, nytt\n"
"äventyr, eller hur?" BOX_BREAK UNSKIPPABLE "Min roll i Prinsessans dröm\n"
"var att lära ut en " COLOR(RED) "melodi " COLOR(DEFAULT) "till\n"
"pojken från skogen." BOX_BREAK UNSKIPPABLE "Detta är en uråldrig " COLOR(BLUE) "melodi nedärvd\n"
"av den Kungliga Familjen" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "Jag har spelat den här sången\n"
"som vaggvisa för Prinsessan Zelda\n"
"sedan hon var en bebis..." BOX_BREAK UNSKIPPABLE "Det finns mystiska krafter i\n"
"de här noterna." BOX_BREAK UNSKIPPABLE "Lyssna nu noggrant..."
)

DEFINE_MESSAGE(0x7091, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "All den tragedi som befallit\n"
"Hyrule var på grund av mig..." BOX_BREAK UNSKIPPABLE "Jag var så ung...Jag kunde inte begripa\n"
"konsekvenserna av att försöka\n"
"behärska det Helgade Riket." BOX_BREAK UNSKIPPABLE "Dessutom drog jag in dig i det\n"
"hela, också." BOX_BREAK UNSKIPPABLE "Nu är det dags för mig att göra upp\n"
"för mina misstag..." BOX_BREAK UNSKIPPABLE "Du måste lägga Mästersvärdet till\n"
"vila och försegla Tidens Dörr..."
)

DEFINE_MESSAGE(0x7092, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Dock, genom denna gärning, förseglas\n"
"vägen mellan tiderna..."
)

DEFINE_MESSAGE(0x7093, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME ",\n"
"ge Okarinan till mig..." BOX_BREAK UNSKIPPABLE "Som en Vise, kan jag återvända dig\n"
"till din ursprungliga tid med den."
)

DEFINE_MESSAGE(0x7094, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
UNSKIPPABLE "När fred återvänder Hyrule..." BOX_BREAK UNSKIPPABLE "Är det dags för oss att\n"
"ta farväl..."
)

DEFINE_MESSAGE(0x7095, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Gå nu hem, " NAME ".\n"
"Återfå din förlorade tid!" BOX_BREAK UNSKIPPABLE "Hem... \n"
"där du är menad att vara...\n"
"så som du är menad att vara..."
)

DEFINE_MESSAGE(0x7096, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SHIFT("\x46")  QUICKTEXT_ENABLE "Tsk" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Tsk." QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x7097, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Nå ja, det kanske är för mycket\n"
"för ett barn att betala." EVENT
)

DEFINE_MESSAGE(0x7098, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Okej, jag låter dig passera,\n"
"skynda!" EVENT
)

DEFINE_MESSAGE(0x7099, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"HÅLL DET HEMLIGT \n"
"FRÅN ALLA."
)

DEFINE_MESSAGE(0x709A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Attan, jag är SÅ trött!" BOX_BREAK "Att vara nattvakt är så tråkigt!\n"
"Jag önskar att det kunde komma fram\n"
"några spöken eller någonting..." BOX_BREAK "Du, jag är väldigt intresserad\n"
"av spöken!" BOX_BREAK "Att studera dem är min största hobby,\n"
"men du vet aldrig...när det händer\n"
"sig att sådan kunskap kan komma\n"
"till stor nytta!"
)

DEFINE_MESSAGE(0x709B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Min älskade lilla hundvalps\n"
"pälskappa är väldigt speciell\n"
"jämfört med de andra byrackorna\n"
"här omkring!"
)

DEFINE_MESSAGE(0x709C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Min älskade valp kan springa snabbare\n"
"än alla de här byrackorna\n"
"här omkring!"
)

DEFINE_MESSAGE(0x709D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Jag kan inte hitta min hundvalp\n"
"någonstans! Du måste söka efter\n"
"den! Snälla!"
)

DEFINE_MESSAGE(0x709E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x4C")  QUICKTEXT_ENABLE "Arrrgh!" QUICKTEXT_DISABLE "\n"
"Det där är inte min hund! \n"
"Hur kunde du förväxla min valp\n"
"med det där skrället?!"
)

DEFINE_MESSAGE(0x709F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x46")  QUICKTEXT_ENABLE "Richard!" QUICKTEXT_DISABLE  BOX_BREAK "Det här är minsann min Richard!\n"
"Tack! Tack så mycket!\n"
"Jag ger dig den här som\n"
"belöning!"
)

DEFINE_MESSAGE(0x70A0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Det är farligt att gå ut nattetid\n"
"med dessa vildhundar som strövar\n"
"omkring...Nej, det var inte en\n"
"varning till dig! Jag är orolig\n"
"för min lilla hundvalp!"
)

DEFINE_MESSAGE(0x70A1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Hiyeee!\n"
"Välkommen till den " COLOR(RED) "Glada Maskbutiken" COLOR(DEFAULT) "!\n"
"Vi handlar inom masker som bringar\n"
"lycka till alla!" BOX_BREAK "Hur skulle du vilja vara\n"
"en lyckans försäljare? Jag lånar dig\n"
"en mask. Du säljer masken och\n"
"för " COLOR(RED) "pengarna " COLOR(DEFAULT) "tillbaka hit till mig." BOX_BREAK "Om du vill läsa det\n"
"finstilta, ta en titt på " COLOR(RED) "skylten \n"
COLOR(DEFAULT) "där borta." BOX_BREAK "Efter att du sålt alla masker,\n"
"kommer du själv att bli " COLOR(RED) " " COLOR(DEFAULT) "lycklig!" BOX_BREAK SHIFT("\x40") "Ha förtroende..." EVENT
)

DEFINE_MESSAGE(0x70A2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Välj ut en mask med vänster och höger\n"
"på " COLOR(LIGHTBLUE) "[Styr-Spaken]" COLOR(DEFAULT) ".\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Prata med butiksägaren.\n"
"Låna inte." COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x70A3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"En " COLOR(RED) "mask " COLOR(DEFAULT) "är ett " COLOR(YELLOW) "[C] Knapp " COLOR(DEFAULT) "föremål. Sätt\n"
"den till " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " och tryck " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " för att\n"
"bära den." BOX_BREAK "Om du talar med någon med masken\n"
"på, kanske du får en reaktion." BOX_BREAK "Om någon är intresserad av\n"
"en mask, kommer hen att fråga dig\n"
"om den. Någon kanske till och\n"
"med vill köpa masken." BOX_BREAK "Någonstans ute i världen, väntar någon\n"
"på dessa masker." BOX_BREAK SHIFT("\x32") "Ha bara förtroende..." EVENT
)

DEFINE_MESSAGE(0x70A4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag kanha sett en söt liten\n"
"tjej här någonstans...\n"
"Kanske hon gick till slottet?\n"
"Vem vet?"
)

DEFINE_MESSAGE(0x70A5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oh, jättebra! Du sålde den!\n"
"Var vänlig och betala tillbaka " COLOR(RED) "10 Rupees \n"
COLOR(DEFAULT) "för Keaton Masken nu." EVENT
)

DEFINE_MESSAGE(0x70A6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oh! Du har inte sålt den nyaste\n"
"masken ännu. Ha  bara förtroende...\n"
"Försök bara ett tag till." EVENT
)

DEFINE_MESSAGE(0x70A7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Betalning mottagen!" EVENT
)

DEFINE_MESSAGE(0x70A8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Va?!" QUICKTEXT_DISABLE "\n"
"Du har inte mina pengar?!" BOX_BREAK QUICKTEXT_ENABLE "Hur vågar du!" QUICKTEXT_DISABLE  BOX_BREAK "Det är bäst du för hit pengarna...\n"
"annars!" EVENT
)

DEFINE_MESSAGE(0x70A9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oh ja!" BOX_BREAK "Mycket bra gjort!\n"
"Alla maskerna är slut sålda." BOX_BREAK "Jag visste att jag kunde lita\n"
"på dig!" EVENT
)

DEFINE_MESSAGE(0x70AA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Som belöning...\n"
"Lånar jag ut till dig denna specialmask." BOX_BREAK UNSKIPPABLE "Detta är " COLOR(RED) "Sanningens Mask" COLOR(DEFAULT) ". Det är en\n"
"mystisk mask som gått i arv\n"
"hos Sheikah-folket." BOX_BREAK UNSKIPPABLE "Med den här masken kan du se in\n"
"i andra människors sinnen...\n"
"Den är användbar, men skrämmande!" BOX_BREAK UNSKIPPABLE "Vad som gör den skrämmande?" BOX_BREAK UNSKIPPABLE "Du kanske förstår när du blir\n"
"äldre och upptäcker de sanna\n"
"meningen med livet..." BOX_BREAK UNSKIPPABLE "Ho ho ho!" EVENT
)

DEFINE_MESSAGE(0x70AB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Från och med nu kan du låna\n"
"vilken mask du vill.\n"
"Ha bara förtroende..." EVENT
)

DEFINE_MESSAGE(0x70AC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Välkommen!\n"
"Vilken mask kan jag låna dig?" EVENT
)

DEFINE_MESSAGE(0x70AD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Välj en mask med vänster eller\n"
"höger på " COLOR(LIGHTBLUE) "[Styr-spaken]" COLOR(DEFAULT) ".\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Fråga om Sanningens Mask\n"
"Låna ingen mask" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x70AE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Detta är " COLOR(RED) "Sanningens Mask" COLOR(DEFAULT) ". Det är en\n"
"mystisk mask som gått i arv hos\n"
"Sheikah-folket." BOX_BREAK "Med den här masken kan du se in i\n"
"andra människors sinnen. Den är\n"
"användbar, men skrämmande!" BOX_BREAK "Vad som gör den skrämmande?" BOX_BREAK "Du förstår när du blir äldre!" BOX_BREAK "Ho ho ho!" EVENT
)

DEFINE_MESSAGE(0x70AF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Sanningens Mask -- Inte till Salu" COLOR(DEFAULT) "\n"
"Denna mask har speciella krafter." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70B0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Dödskallemask -- Pris 20 Rupees" COLOR(DEFAULT) "\n"
"En behornad Dödskallemask." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70B1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Spöklik Mask -- Pris 30 Rupees\n"
COLOR(DEFAULT) "En sorgsen mask i trä." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70B2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Keaton Mask -- Pris 10 Rupees\n"
COLOR(DEFAULT) "Keaton grejer är hätt, hätt, hätt!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70B3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Kaninhuva -- Pris 50 Rupees\n"
COLOR(DEFAULT) "Med svajande kaninöron!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70B4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Dödskallemask -- Gratis att Låna" COLOR(DEFAULT) "\n"
"En behornad Dödskallemask." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70B5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Spöklik Mask -- Gratis att Låna\n"
COLOR(DEFAULT) "En sorgsen mask i trä." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70B6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Keaton Mask -- Gratis att Låna\n"
COLOR(DEFAULT) "Keaton stuff is hot, hot, hot!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70B7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Kaninhuva -- Gratis att Låna\n"
COLOR(DEFAULT) "Med svajande kaninöron!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70B8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Goron Mask -- Gratis att Låna\n"
COLOR(DEFAULT) "Detta runda ansikte gör dig\n"
"lite lyckligare!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70B9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Zora Mask -- Gratis att Låna" COLOR(DEFAULT) "\n"
"Du ser väldigt cool ut när du\n"
"simmar om du bär denna mask!" QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70BA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Gerudo Mask -- Gratis att Låna\n"
COLOR(DEFAULT) "Dess charmerande ögon gör den till en\n"
"fenomenal kvinnlig förklädnad." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70BB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(RED) "Sanningens Mask -- Gratis att Låna" COLOR(DEFAULT) "\n"
"Mystisk mask som kan se in i\n"
"andra människors sinnen." QUICKTEXT_DISABLE  PERSISTENT
)

DEFINE_MESSAGE(0x70BC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Vill du låna" COLOR(RED) "Dödskallemasken" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70BD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Vill du låna den\n"
COLOR(RED) "Spöklika Masken" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70BE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Vill du låna\n"
COLOR(RED) "Keaton Masken" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70BF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Vill du låna\n"
COLOR(RED) "Bunny Hood" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70C0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Vill du låna\n"
COLOR(RED) "Goron Mask" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70C1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Vill du låna\n"
COLOR(RED) "Zora Mask" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70C2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Vill du låna\n"
COLOR(RED) "Gerudo Mask" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70C3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE "Vill du låna\n"
COLOR(RED) "Sanningens Mask" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70C4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oh, jättebra! Du sålde den!\n"
"Betala nu tillbaka " COLOR(RED) "20 Rupees \n"
COLOR(DEFAULT) "för Dödskallemasken." EVENT
)

DEFINE_MESSAGE(0x70C5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oh, jättebra! Du sålde den!\n"
"Betala nu tillbaka " COLOR(RED) "30 Rupees \n"
COLOR(DEFAULT) "för den Spöklika Masken." EVENT
)

DEFINE_MESSAGE(0x70C6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oh, jättebra! Du sålde den!\n"
"Betala nu tillbaka " COLOR(RED) "50 Rupees \n"
COLOR(DEFAULT) "för Kaninhuvan." EVENT
)

DEFINE_MESSAGE(0x70C7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Oh! Du har inte sålt masken\n"
"ännu. Ha bara förtroende ett \n"
"litet tag till." BOX_BREAK "Eller, vill du byta in den\n"
"mot en annan mask?\n"
TWO_CHOICE  COLOR(ADJUSTABLE) "Ja\n"
"Nej" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70C8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Triforce delarna resonerar...\n"
"De kombineras till en helhet igen..."
)

DEFINE_MESSAGE(0x70C9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "De två Triforce delarna som jag\n"
"inte kunde fånga den där dagen\n"
"för sju år sedan..." BOX_BREAK UNSKIPPABLE "Jag hade aldrig kunnat förvänta mig\n"
"att de fanns gömda inom er två!"
)

DEFINE_MESSAGE(0x70CA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Och nu, slutligen, är alla Triforce\n"
"delarna dsamlade här!"
)

DEFINE_MESSAGE(0x70CB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Dessa leksakerär för mycket för er!"
)

DEFINE_MESSAGE(0x70CC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag befaller er att återlämna dem\n"
"till mig!"
)

DEFINE_MESSAGE(0x70CD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SFX("\x68\x5F")  COLOR(LIGHTBLUE)  NAME "!\n"
"Jag kan inte hjälpa dig!\n"
"På grund av dessa mörkrets vågor\n"
"slipper jag inte nära!" BOX_BREAK COLOR(DEFAULT)  UNSKIPPABLE  COLOR(LIGHTBLUE) "Förlåt mig, " NAME "!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70CE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Den Onda Kungen Ganondorf...\n"
"besegrad av den här ungen?!"
)

DEFINE_MESSAGE(0x70CF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME "....!"
)

DEFINE_MESSAGE(0x70D0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Ganondorf...vilken ynklig man..." BOX_BREAK UNSKIPPABLE "Utan ett starkt, rättvärdigt sinne,\n"
"kunde han inte kontrollera kraften\n"
"från gudarna...och..."
)

DEFINE_MESSAGE(0x70D1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME ", lyssna på mig!\n"
"Tornet kommer att kollapsa!" BOX_BREAK UNSKIPPABLE "Med sina sista andetag, försöker\n"
"Ganondorf krossa oss under tornets\n"
"ruiner! Vi måste skynda oss att\n"
"fly!"
)

DEFINE_MESSAGE(0x70D2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Följ efter mig!"
)

DEFINE_MESSAGE(0x70D3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Det är över...Det är äntligen över..."
)

DEFINE_MESSAGE(0x70D4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  COLOR(LIGHTBLUE)  NAME "... \n"
"Förlåt mig för att jag inte kunde stöda\n"
"dig under striden förrut!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70D5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Vad var det där ljudet?"
)

DEFINE_MESSAGE(0x70D6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SFX("\x68\x5F")  COLOR(LIGHTBLUE) "Ingen chans att han håller mig\n"
"borta igen!\n"
COLOR(DEFAULT)  QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Den här gången strider vi tillsammans!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x70D7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  NAME "! Mästersvärdet \n"
"är här! \n"
QUICKTEXT_ENABLE "Skynda dig!!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x70D8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag använder mina krafter för att hålla\n"
"den Onda Kungen nere! Använd ditt svärd,\n"
"gör ett avslut på det här!"
)

DEFINE_MESSAGE(0x70D9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x41") "Sex Vise...\n"
QUICKTEXT_ENABLE  SHIFT("\x50") "Nu!!" QUICKTEXT_DISABLE  FADE("\x1E")
)

DEFINE_MESSAGE(0x70DA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  TEXT_SPEED("\x03") "DU..." TEXT_SPEED("\x00")  FADE("\x1E")
)

DEFINE_MESSAGE(0x70DB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  TEXT_SPEED("\x03") "FÖRBANNE DIG...ZELDA!\n"
TEXT_SPEED("\x02") "FÖRBANNE ER...VISE!!" TEXT_SPEED("\x00")  FADE("\x32")
)

DEFINE_MESSAGE(0x70DC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "FÖRBANNE DIG..." QUICKTEXT_ENABLE  NAME "!" QUICKTEXT_DISABLE  FADE("\x1E")
)

DEFINE_MESSAGE(0x70DD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "En dag...\n"
"När den här förseglingen bryts...." BOX_BREAK_DELAYED("\x50")  UNSKIPPABLE "Då kommer jag utrota era\n"
"efterkommande!!" FADE("\x50")
)

DEFINE_MESSAGE(0x70DE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Så länge Kraftens Triforce ligger\n"
"i min hand...." FADE("\x50")
)

DEFINE_MESSAGE(0x70DF, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
TEXT_SPEED("\x02") "Du..." TEXT_SPEED("\x00") "vem är du?" FADE("\x50")
)

DEFINE_MESSAGE(0x70E0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x0A") COLOR(ADJUSTABLE) "Skogsbarriären " COLOR(DEFAULT) "är skingrad!\n"
SHIFT("\x14") "Skynda dig, " NAME "!" FADE("\x28")
)

DEFINE_MESSAGE(0x70E1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x0F") COLOR(RED) "Eldbarriären " COLOR(DEFAULT) "är skingrad!\n"
SHIFT("\x14") "Skynda dig, Broder!" FADE("\x28")
)

DEFINE_MESSAGE(0x70E2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x0F") COLOR(BLUE) "Vattenbarriären " COLOR(DEFAULT) "är skingrad!\n"
SHIFT("\x46") "Skynda!" FADE("\x28")
)

DEFINE_MESSAGE(0x70E3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x0F") COLOR(PURPLE) "Skuggbarriären " COLOR(DEFAULT) "är skingrad!\n"
SHIFT("\x1E") "Snälla rädda Prinsessan!" FADE("\x28")
)

DEFINE_MESSAGE(0x70E4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x0F") COLOR(YELLOW) "Själsbarriären " COLOR(DEFAULT) "är skingrad!\n"
SHIFT("\x37") "Skyndadig, grabb!" FADE("\x28")
)

DEFINE_MESSAGE(0x70E5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
SHIFT("\x0F") COLOR(LIGHTBLUE) "Ljusbarriären " COLOR(DEFAULT) "är skingrad!\n"
SHIFT("\x4B") "Var snabb!" FADE("\x28")
)

DEFINE_MESSAGE(0x70E6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE)  NAME ", är inte det där...?!" COLOR(DEFAULT)
)

DEFINE_MESSAGE(0x70E7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
COLOR(LIGHTBLUE) "Det är det legendariska svärdet..." COLOR(DEFAULT)  FADE("\x1E")
)

DEFINE_MESSAGE(0x70E8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  SHIFT("\x29")  COLOR(LIGHTBLUE) "Mästersvärdet!!" COLOR(DEFAULT)  QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x70E9, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_BOTTOM,
UNSKIPPABLE "Hitta de andra Vise" COLOR(RED) "\n"
COLOR(DEFAULT) "Och rädda Hyrule!" FADE("\x50")
)

DEFINE_MESSAGE(0x70EA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Den där skrämmande mannen tog\n"
"sig bort härifrån illa kvickt!"
)

DEFINE_MESSAGE(0x70EB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh så läskig...\n"
"Åh så läskig..."
)

DEFINE_MESSAGE(0x70EC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hörru, vad vill du?\n"
"Jag har inte tid att tala\n"
"med dig!"
)

DEFINE_MESSAGE(0x70ED, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Snälla...med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "...\n"
"Snälla sälj något till mig...\n"
"Snälla...med " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "..."
)

DEFINE_MESSAGE(0x70EE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Nej...\n"
"Det är inte vad jag vill ha...\n"
"Jag vill ha " COLOR(RED) "någonting inuti en flaska" COLOR(DEFAULT) "...\n"
"Jag menade inte den där saken..."
)

DEFINE_MESSAGE(0x70EF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Nej...\n"
"Jag kan inte ta den där...\n"
"Detdär är inte vad jag ville köpa..."
)

DEFINE_MESSAGE(0x70F0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Oh, det där är " COLOR(LIGHTBLUE) "Blå Eld" COLOR(DEFAULT) "!\n"
"Jag köper det för " COLOR(RED) "150 Rupees" COLOR(DEFAULT) "!\n"
"Inga återköp, okej?"
)

DEFINE_MESSAGE(0x70F1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Oj, en " COLOR(PURPLE) "Fisk" COLOR(DEFAULT) "!\n"
"Jag köper den för " COLOR(RED) "100 Rupees" COLOR(DEFAULT) "!\n"
"Inga återköp, okej?"
)

DEFINE_MESSAGE(0x70F2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Oj, en gullig liten " COLOR(ADJUSTABLE) "Insekt" COLOR(DEFAULT) "!\n"
"Jag köper den för " COLOR(RED) "50 Rupees" COLOR(DEFAULT) "!\n"
"Inga återköp, okej?"
)

DEFINE_MESSAGE(0x70F3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ojdå, ensöt liten " COLOR(LIGHTBLUE) "Älva" COLOR(DEFAULT) "!\n"
"Jag kan köpa den för " COLOR(RED) "25 Rupees" COLOR(DEFAULT) "!\n"
"Inga återköp, okej?"
)

DEFINE_MESSAGE(0x70F4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Oj... du är allt en energisk\n"
"ung man. Du är modig, och\n"
"stilig, också." BOX_BREAK UNSKIPPABLE "Heh heh heh... dittnamn är\n"
NAME ", eller hur?" BOX_BREAK UNSKIPPABLE "Heh heh he...var inte förvånad.\n"
"Jag kan läsa folks tankar." BOX_BREAK UNSKIPPABLE "Om jag var lika stilig som dig\n"
"kunde jag driva ett helt annat slags\n"
"företag...heh he heh..." BOX_BREAK UNSKIPPABLE "Min butik är den enda " COLOR(RED) "Spökbutiken" COLOR(DEFAULT) "\n"
"i Hyrule." BOX_BREAK UNSKIPPABLE "Tack vare den store Ganondorf, \n"
"är det hög tid för affärer som dessa\n"
"...heh heh heh..." BOX_BREAK UNSKIPPABLE "Ah...Jag kan bara hoppas att \n"
"världen blir ännu värre!" BOX_BREAK UNSKIPPABLE "Spökena, som kallas " COLOR(RED) "Poes" COLOR(DEFAULT) ", är \n"
"själar av koncentrerat hat som\n"
"dyker upp på slättmarkerna och\n"
"gravgården. De hatar världen!" BOX_BREAK UNSKIPPABLE "Unge man, om du fångar en Poe, så\n"
"betalar jag dyra pengar för den...\n"
"Heh heh hee!"
)

DEFINE_MESSAGE(0x70F5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du, unge man, hur står det till\n"
"idag? Om du har en " COLOR(RED) "Poe" COLOR(DEFAULT) ", så köper \n"
"jag den." BOX_BREAK "Ditt kort har nu " COLOR(PURPLE)  HIGHSCORE(HS_POE_POINTS) " " COLOR(DEFAULT) "poäng.\n"
"Välkommen åter!\n"
"Heh heh heh!"
)

DEFINE_MESSAGE(0x70F6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Oh, Du har med dig en Poe idag!" BOX_BREAK UNSKIPPABLE  TEXT_SPEED("\x02") "........" TEXT_SPEED("\x00")  BOX_BREAK UNSKIPPABLE "Hmmm..." BOX_BREAK UNSKIPPABLE "Det här är en " COLOR(RED) "vanlig" COLOR(DEFAULT) " " COLOR(RED) "Poe" COLOR(DEFAULT) ".\n"
"Här är dina " COLOR(RED) "10 Rupees" COLOR(DEFAULT) ".\n"
"Ta dem." BOX_BREAK UNSKIPPABLE "Heh heh."
)

DEFINE_MESSAGE(0x70F7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Oh, Du har med dig en Poe idag!" BOX_BREAK UNSKIPPABLE "Hmmmm!" BOX_BREAK UNSKIPPABLE "Mycket intressant!\n"
"Det här är en " COLOR(RED) "Stor Poe" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Jag lköper den för " COLOR(RED) "50 Rupees" COLOR(DEFAULT) "." BOX_BREAK UNSKIPPABLE "Dessutom sätter jag " COLOR(RED) "100\n"
"poäng " COLOR(DEFAULT) "på ditt kort." BOX_BREAK UNSKIPPABLE "Om du tjänar ihop " COLOR(RED) "1,000 poäng" COLOR(DEFAULT) ", blir du\n"
"en lycklig man! Heh heh."
)

DEFINE_MESSAGE(0x70F8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
UNSKIPPABLE "Vänta lite! WOW!" BOX_BREAK UNSKIPPABLE "Du har tjänat ihop " COLOR(RED) "1,000 poäng" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Unge man, du är en äkta\n"
COLOR(RED) "Spökjägare" COLOR(DEFAULT) "!" BOX_BREAK UNSKIPPABLE "Är det vad du förväntade dig att jag\n"
"skulle säga? Heh heh heh!" BOX_BREAK UNSKIPPABLE "Tack vare dig, har jag extra\n"
"inventarier med " COLOR(RED) "Stora Poes" COLOR(DEFAULT) ", så det här\n"
"blir sista gången jag köper ett\n"
"spöke." BOX_BREAK UNSKIPPABLE "Du undrar över vad jag låvade\n"
"skulle hända när du tjänat in\n"
"1,000 poäng. Heh heh." BOX_BREAK UNSKIPPABLE "Oroa dig inte, jag har inte glömt.\n"
"Ta bara den här."
)

DEFINE_MESSAGE(0x70F9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Åh? Vad är det där?" BOX_BREAK UNSKIPPABLE  TEXT_SPEED("\x02")  QUICKTEXT_ENABLE "Är" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "det där" QUICKTEXT_DISABLE "..." TEXT_SPEED("\x00")  EVENT
)

DEFINE_MESSAGE(0x70FA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
QUICKTEXT_ENABLE  COLOR(DEFAULT) "en" COLOR(LIGHTBLUE) "Älva" COLOR(DEFAULT)  QUICKTEXT_DISABLE "?!" BOX_BREAK UNSKIPPABLE "Isåfall, är du...\n"
"Kommer du från skogen?" EVENT
)

DEFINE_MESSAGE(0x70FB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Men...då...du råkar inte att ha...\n"
COLOR(ADJUSTABLE) "Skogens Själasten"COLOR(DEFAULT) ", eller har du?\n"
"En grön, skimrande ädelsten..." EVENT
)

DEFINE_MESSAGE(0x70FC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag hade en dröm... I drömmen\n"
"vällde mörka moln ut över hela\n"
"landet Hyrule..." BOX_BREAK UNSKIPPABLE "Men plötsligt, sköt en ljusstråle\n"
"ut ur skogen, splittrade de mörka\n"
"molnen och sken upp marken..." BOX_BREAK UNSKIPPABLE "Ljuset omvandlades till en skepnad\n"
"som höll i en " COLOR(ADJUSTABLE) "grön och skinande sten" COLOR(DEFAULT) ",\n"
"följd av en " COLOR(LIGHTBLUE) "älva" COLOR(DEFAULT) "..." EVENT
)

DEFINE_MESSAGE(0x70FD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag vet att detta är en förutsägelse\n"
"att någon kommer anlända från\n"
COLOR(ADJUSTABLE) "skogen" COLOR(DEFAULT) "..." BOX_BREAK UNSKIPPABLE "Ja, jag tänkte att du kanske\n"
"är den rätta..." EVENT
)

DEFINE_MESSAGE(0x70FE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x3A") "Åh, förlåt mig!" BOX_BREAK UNSKIPPABLE "Jag blev för ivrig med berättelsen\n"
"och introducerade mig inte\n"
"ens ordentligt!" EVENT
)

DEFINE_MESSAGE(0x70FF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE  SHIFT("\x0C") "Jag är " COLOR(LIGHTBLUE) "Zelda" COLOR(DEFAULT) ", Prinsessan av Hyrule." EVENT
)

DEFINE_MESSAGE(0x7100, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Va? Har vi mötts förut?"
)

DEFINE_MESSAGE(0x7101, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Awww... Den är så gullig!\n"
"Kan du berätta var du\n"
"hittade den?"
)

DEFINE_MESSAGE(0x7102, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Yeeeah!\n"
"Hjälp mig!"
)

DEFINE_MESSAGE(0x7103, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Mm...jo? Så vadå?"
)

DEFINE_MESSAGE(0x7104, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag hatar rävar!"
)

DEFINE_MESSAGE(0x7105, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Så irriterande!"
)

DEFINE_MESSAGE(0x7106, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, du ser bra ut!"
)

DEFINE_MESSAGE(0x7107, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "AAAH! Vad är ditt problem?!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x7108, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Oooh...är det där en Zora?\n"
"De där kalla ögonen är\n"
"verkligen fascinerande..."
)

DEFINE_MESSAGE(0x7109, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh nej! Du är läskig!\n"
"Kom inte närmre!"
)

DEFINE_MESSAGE(0x710A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Wow...så nostalgiskt! Det\n"
"påminner mig om när jag var\n"
"en liten unge."
)

DEFINE_MESSAGE(0x710B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det är ganska lustigt...det\n"
"får mig faktiskt att skratta!\n"
"Hee hee!"
)

DEFINE_MESSAGE(0x710C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "Åh-oh!" QUICKTEXT_DISABLE " Förlåt mig, mor!\n"
"Oj...hey, det är du!\n"
"Skräm mig inte sådär!"
)

DEFINE_MESSAGE(0x710D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vilket stort huvud du har!"
)

DEFINE_MESSAGE(0x710E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Oj, gör inte sådär!\n"
"Jag är blyg..."
)

DEFINE_MESSAGE(0x710F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Är det en ansiktsmasktävling\n"
"pågång? \n"
QUICKTEXT_ENABLE "I'm going to vote for you!" QUICKTEXT_DISABLE
)

DEFINE_MESSAGE(0x7110, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh! En kanin!\n"
"På tal om kaniner, jag såg en\n"
"underlig man som jagade några\n"
"här i närheten..."
)

DEFINE_MESSAGE(0x7111, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Oooh, vilken vacker dam!\n"
"Men du är ganska kort,\n"
"inte sant?"
)

DEFINE_MESSAGE(0x7112, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Nå...jag kommer inte på något\n"
"roligt att säga...förlåt, grabben!"
)

DEFINE_MESSAGE(0x7113, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"En mask... När jag var en liten\n"
"unge, brukade jag också gå runt\n"
"med mask...Va? Du tycker dig inte\n"
"kunna föreställa dig mig göra det?"
)

DEFINE_MESSAGE(0x7114, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åhhhh...Jag förstår...\n"
"Det är en illusion..."
)

DEFINE_MESSAGE(0x7115, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hördu, grabb, väx inte upp och\n"
"bli som mig..."
)

DEFINE_MESSAGE(0x7116, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
QUICKTEXT_ENABLE "AAAAAAAAAAAH!\n"
"EN GERUDO!!!!" QUICKTEXT_DISABLE  BOX_BREAK "Va-? En mask?\n"
"Varför har du en sådan\n"
"där mask?!"
)

DEFINE_MESSAGE(0x7117, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ursäkta, jag är upptagen just nu."
)

DEFINE_MESSAGE(0x7118, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh wow! Det är en Keaton!\n"
"Heej, Keaton!"
)

DEFINE_MESSAGE(0x7119, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Så läskig!\n"
"Det finns en pojke i Kakarikobyn\n"
"som letar efter en mask precis\n"
"som den där!"
)

DEFINE_MESSAGE(0x711A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hmm...nåå...har du inte några\n"
"andra masker?"
)

DEFINE_MESSAGE(0x711B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vilken underlig mask!\n"
"Hee hah haa!"
)

DEFINE_MESSAGE(0x711C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hördu grabb! Ser du inte att vi är\n"
"upptagna?! Lämna oss ifred!"
)

DEFINE_MESSAGE(0x711D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tyvärr hördu. Jag vill inte ens\n"
"titta på andra kvinnor!"
)

DEFINE_MESSAGE(0x711E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hee hee.\n"
"Ge ingen uppmärksamhet åt den där\n"
"pysen, min kära... Låtsas bara att\n"
"vi är i våran egna, privata\n"
"lilla värld..."
)

DEFINE_MESSAGE(0x711F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, snälla!\n"
"Go bother someone \n"
"else!"
)

DEFINE_MESSAGE(0x7120, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"There's a rumor going around that\n"
"there is a Potion Shop that can\n"
"make the ultimate medicine!"
)

DEFINE_MESSAGE(0x7121, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag hörde ett rykte angående ett\n"
"monster som äter " COLOR(LIGHTBLUE) "Hylianka Sköldar" COLOR(DEFAULT) "\n"
"någonstans där ute i världen.\n"
"Har du någonsin sett nåt sånt?"
)

DEFINE_MESSAGE(0x7122, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag kom hit för att sälja bomber...\n"
"Var god och köp några!"
)

DEFINE_MESSAGE(0x7123, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
UNSKIPPABLE "Jag...Jag är rädd...\n"
"Jag har en känsla av att den där\n"
"mannen kommer att förstöra Hyrule." BOX_BREAK UNSKIPPABLE "Han har sådan fruktansvärd makt!" BOX_BREAK UNSKIPPABLE "Men det är tur att du har\n"
"kommit..." EVENT
)

DEFINE_MESSAGE(0x7124, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vad? Om du vill ha något,\n"
"just make it clear!"
)

DEFINE_MESSAGE(0x7125, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är upptagen! Ut ur vägen,\n"
"din luffare!"
)

DEFINE_MESSAGE(0x7126, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, du har riktigt\n"
"kvalitetsträ där, grabben!"
)

DEFINE_MESSAGE(0x7127, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hrrrrm!\n"
"Försvinn ur min åsyn!\n"
"Du din värdelösa..."
)

DEFINE_MESSAGE(0x7128, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"EEEEEEAAAAH!\n"
"Hoppsan, jag borde inte skrika till\n"
"sådär, chefen kan bli arg på mig!"
)

DEFINE_MESSAGE(0x7129, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Oj, ursäkta chefen! \n"
"Jag menade inte att slappa!\n"
"Jag börjar jobba!" BOX_BREAK "Åh, det är inte du, chefen?"
)

DEFINE_MESSAGE(0x712A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Gerudo är vackra och modiga...\n"
"De är bara så fascinerande!"
)

DEFINE_MESSAGE(0x712B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"En dag, när jag har större\n"
"skicklighet, tänker tälja en\n"
"mask precis som den där!"
)

DEFINE_MESSAGE(0x712C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, det där är masken\n"
"som alla pratar om!\n"
"Ser lite konstig ut..."
)

DEFINE_MESSAGE(0x712D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Wa-ha-hah!\n"
"Hur går affärerna,\n"
"Herr Hjälte?\n"
"Hah hah hah!"
)

DEFINE_MESSAGE(0x712E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är i tjänst.\n"
"Förstår du?\n"
"I TJÄNST!"
)

DEFINE_MESSAGE(0x712F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hmm, nåå, jag vet inte riktigt\n"
"vad jag ska säga angående det..."
)

DEFINE_MESSAGE(0x7130, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh wow! Gullig!\n"
"Men Cuccos är mycket gulligare!"
)

DEFINE_MESSAGE(0x7131, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Eh, va?\n"
"Är du ledsen?\n"
"Glad?\n"
"Jag kan inte avgöra..."
)

DEFINE_MESSAGE(0x7132, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Förlåt, men jag är nog inte\n"
"riktigt intresserad i det där."
)

DEFINE_MESSAGE(0x7133, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Den lilla killen som leker runt på\n"
"gravgården höll på säga något\n"
"om sitt ansikte..."
)

DEFINE_MESSAGE(0x7134, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är verkligen en god man.\n"
"Tror du mig inte?"
)

DEFINE_MESSAGE(0x7135, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"WHAAAA--!\n"
"Jag trodde du var den där gamla\n"
"haggan! Skräm mig inte sådär!"
)

DEFINE_MESSAGE(0x7136, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag minns min far berätta något\n"
"om en svärdsmed...men det\n"
"bekymrar ändå inte mig riktigt\n"
)

DEFINE_MESSAGE(0x7137, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är inte rädd för några skogs-\n"
"monster! Försöker du göra\n"
"narr av mig?"
)

DEFINE_MESSAGE(0x7138, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vad är det där? Jag kan inte se\n"
"så värst bra härifrån..."
)

DEFINE_MESSAGE(0x7139, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hej igen! Hur mår du idag?"
)

DEFINE_MESSAGE(0x713A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Allting är toppen idag!"
)

DEFINE_MESSAGE(0x713B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Trött...Jag är så trött..."
)

DEFINE_MESSAGE(0x713C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag bryr mig inte om några\n"
"rävar!"
)

DEFINE_MESSAGE(0x713D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det är så irriterande!\n"
"Det stör mina ögon!"
)

DEFINE_MESSAGE(0x713E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det där ser väldigt stiligt ut!"
)

DEFINE_MESSAGE(0x713F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Waaaaaaah!\n"
"Vad är fel med dig?\n"
"Har du dålig attityd, eller??"
)

DEFINE_MESSAGE(0x7140, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Din idiot! \n"
"Du borde ha ögonkontakt med folk\n"
"när du talar till dem!"
)

DEFINE_MESSAGE(0x7141, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Din idiot!\n"
"Du borde inte stå och stirra när\n"
"du talar med folk!"
)

DEFINE_MESSAGE(0x7142, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Din idiot!\n"
"Du borde väl ta av dig masken\n"
"när du pratar med folk!"
)

DEFINE_MESSAGE(0x7143, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Din idiot!\n"
"Jag vet inte varför jag kallar\n"
"dig det, men...du är en!"
)

DEFINE_MESSAGE(0x7144, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Var fick du tag på ded där?\n"
"Va?\n"
"Det är en mask?"
)

DEFINE_MESSAGE(0x7145, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Uh, lämna mig ifred...\n"
"Kan du inte se att jag är\n"
"upptagen för tillfället?"
)

DEFINE_MESSAGE(0x7146, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"En mask är precis som ett musik-\n"
"instrument... det reflecterar sin\n"
"ägares karaktär. Jag gillar din\n"
"originalitet, grabb!"
)

DEFINE_MESSAGE(0x7147, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vilket stort huvud!\n"
"Hur fick du ens rum genom dörren?!"
)

DEFINE_MESSAGE(0x7148, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag HATAR rävar, grabben!"
)

DEFINE_MESSAGE(0x7149, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om nu inte det där är det där\n"
"är det mest irriterande ansikte\n"
"jag sett i alla mina dar, så vet\n"
"jag inte vad det är!"
)

DEFINE_MESSAGE(0x714A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey, det där är ett vackert\n"
"ansikte du har där, pojk!"
)

DEFINE_MESSAGE(0x714B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Har du några klagomål?\n"
"Säg då till!"
)

DEFINE_MESSAGE(0x714C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Var goda, lek inte runt här\n"
"och skingra vår förbannelse!"
)

DEFINE_MESSAGE(0x714D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Om jag bar något sådant...\n"
"Då skulle jag vara en riktig\n"
"Skulltula!\n"
"AAAAAAAAAAH!"
)

DEFINE_MESSAGE(0x714E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Snälla ha förståelse om jag inte\n"
"skrattar... Det är svårt att vara\n"
"lycklig i det här tillståndet...\n"
"Lidandes av förbannelsen och så..."
)

DEFINE_MESSAGE(0x714F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x68\x67") "Hyaaaaah!\n"
"Det där är läskigt!\n"
"Jag vet att jag är läskig, men...\n"
"Det där är riktigt läskigt!"
)

DEFINE_MESSAGE(0x7150, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Huh?! Va--!" BOX_BREAK "Ah, det är bara en unge.\n"
"Skräm mig inte sådär!\n"
"Det kanske inte ser ut så, men\n"
"jag är faktiskt väldigt känslig!"
)

DEFINE_MESSAGE(0x7151, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jasså, ta en titt på trynet på\n"
"den här killen! Det är gigantiskt!\n"
"Mitt är också stort, dock..."
)

DEFINE_MESSAGE(0x7152, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vet du vad för slags mask\n"
"du har på dig...?\n"
"Och du har på dig den ändå?"
)

DEFINE_MESSAGE(0x7153, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag är i tjänst just nu... \n"
"Om du vill jag ska gräva, stör\n"
"mig inte."
)

DEFINE_MESSAGE(0x7154, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vad är det där? Det är något som\n"
"hoppar runt på fälten...\n"
"Jag har glömt vad de där\n"
"sakerna kallas..."
)

DEFINE_MESSAGE(0x7155, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hey! Det är en Keaton Mask!!\n"
"Jag bad min pappa att skaffa\n"
"en åt mig också!"
)

DEFINE_MESSAGE(0x7156, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Den där är inte alltför olik\n"
"Herr Dampé, är den?"
)

DEFINE_MESSAGE(0x7157, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det där ser inte alls ut som\n"
"Herr Dampé, huh?"
)

DEFINE_MESSAGE(0x7158, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x68\x63") "Ooh, häftig mask...men lite\n"
"läskig, tycker inte du det?"
)

DEFINE_MESSAGE(0x7159, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Oj! Den dät ser bekant ut...\n"
"Jag tror jag såg något liknande\n"
"i den Förlorade Skogen, eller?"
)

DEFINE_MESSAGE(0x715A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x68\x63") "Den där får mig att känna mig...\n"
"lycklig..."
)

DEFINE_MESSAGE(0x715B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh...öh...sniff...\n"
"Den där masken...\n"
"Den gör mig...ledsen..."
)

DEFINE_MESSAGE(0x715C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hah! Den där masken gör dig\n"
"intet gptt! Du är bara rädd\n"
"för mig, den store...eller hur?!"
)

DEFINE_MESSAGE(0x715D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Aaaaaah! Va?\n"
"Hörru, jag är inte rädd för dig!\n"
"Kom bara inte något närmre,\n"
"förstått?!"
)

DEFINE_MESSAGE(0x715E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hörru, Det där var en cool mask.\n"
"Jag vill ha den!\n"
"SKÄMTAR BARA! Hah!\n"
"Jag vill inte ha någon dum mask!"
)

DEFINE_MESSAGE(0x715F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Wah hah ha hah!\n"
"Den där passar dig verkligen!"
)

DEFINE_MESSAGE(0x7160, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Waaaah!\n"
"Ja-Jag tänker berätta för Mido\n"
"om det här!"
)

DEFINE_MESSAGE(0x7161, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Yeeeeah!\n"
"Ja-Jag tänker säga åt Mido att\n"
"klå upp dig!"
)

DEFINE_MESSAGE(0x7162, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Whooooah!\n"
"Är du något slags skogsspöke?\n"
)

DEFINE_MESSAGE(0x7163, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det där är så tufft!\n"
"Öh...säg inte åt Mido att jag\n"
"sag det!"
)

DEFINE_MESSAGE(0x7164, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Va?!\n"
"Du kom tillbaka!\n"
"Jag känner nog igen dig, till\n"
"och med med den där masken på!"
)

DEFINE_MESSAGE(0x7165, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag undrar vad Mido skulle säga\n"
"om han såg det där?\n"
"Jag skulle verkligen vilja se\n"
"hans reaktion!"
)

DEFINE_MESSAGE(0x7166, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag förstår...\n"
"Du tänker skrämma Mido med\n"
"den där masken, eller hur?!"
)

DEFINE_MESSAGE(0x7167, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hah hah hah!\n"
"Vilket lustigt ansikte!\n"
"Jag slår vad om att Saria skulle tycka\n"
"det är ganska lustigt, också!"
)

DEFINE_MESSAGE(0x7168, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tee hee hee!\n"
"En mask gjord i trä?\n"
"Det ser ju ut som att du bär\n"
"en sköld på ansiktet!"
)

DEFINE_MESSAGE(0x7169, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vilket konstigt ansikte!" BOX_BREAK "På tal om konstiga ansikten, ett\n"
"av skogsbarnen klagade på hans\n"
"ansikte..."
)

DEFINE_MESSAGE(0x716A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vilket enormt huvud du har!"
)

DEFINE_MESSAGE(0x716B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tee hee!\n"
"Var fick du tag på den där?\n"
"Utanför skogen?\n"
"Ingen chans! Jag tror dig inte!"
)

DEFINE_MESSAGE(0x716C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hee hee!\n"
"Ganska lustig, men den är inte\n"
"riktigt min stil..."
)

DEFINE_MESSAGE(0x716D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Pricken över i! \n"
"Att bära den här masken får mig\n"
"att känna mig riktigt tuff och\n"
"läskig! Hee hee!"
)

DEFINE_MESSAGE(0x716E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hee hee!\n"
"Det finns verkligen många olika\n"
"folkslag i den här världen!"
)

DEFINE_MESSAGE(0x716F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hee hee!\n"
"Jag behöver inte någon ny...\n"
"Jag gillar den jag har, tack!"
)

DEFINE_MESSAGE(0x7170, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x68\x6D") "Wow, den där får ditt huvud\n"
"att se jättestort ut!\n"
"Hee hee!"
)

DEFINE_MESSAGE(0x7171, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x68\x6B") "Vilken gullig liten mus!\n"
"Va?\n"
"Åh, är det inte en mus?"
)

DEFINE_MESSAGE(0x7172, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x68\x6C") "Vad är de där fladdriga sakerna\n"
"på ditt huvud?\n"
"Öron? Masken gör att du ser ut att\n"
"ha fyra öron!"
)

DEFINE_MESSAGE(0x7173, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
SFX("\x68\x69") "Det måste vara spännande att smyga\n"
"förbi vakterna medan du bär\n"
"den där masken!"
)

DEFINE_MESSAGE(0x7174, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hallå, älvpojken!\n"
"Va?\n"
"Du tror dig vara förklädd?\n"
"Men det är så uppenbart att du är!"
)

DEFINE_MESSAGE(0x7175, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Wow!\n"
"Vilka stora ögon du har!\n"
"Gorons är så gulliga, visst är dom!"
)

DEFINE_MESSAGE(0x7176, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åh, Jag känner igen den där!\n"
"Det är Keaton!\n"
"Han är väldigt poppis i Hyrule\n"
"Slottsstad just nu!"
)

DEFINE_MESSAGE(0x7177, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ah, broder!\n"
"Killar som killar!"
)

DEFINE_MESSAGE(0x7178, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vänta...vänta...\n"
"Jag vet vem du é...\n"
"Du é... Kin-ton!\n"
"Stämmer inte det?!"
)

DEFINE_MESSAGE(0x7179, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det är ett läskigt namn, inte sant?\n"
"Nästan lika läskigt som...Ingo!"
)

DEFINE_MESSAGE(0x717A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du, det där påminner om min fru...\n"
"Å andra sidan, kanske inte...\n"
"Det liknar inte henne alls!"
)

DEFINE_MESSAGE(0x717B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"GÄÄÄSP...\n"
"Jag är ganska trött just nu...\n"
"Visa mig senare..."
)

DEFINE_MESSAGE(0x717C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Försvinn, unge!\n"
"Ser du inte att jag är upptagen?!"
)

DEFINE_MESSAGE(0x717D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Humph!\n"
"Det är okej att leka på det viset\n"
"så länge du är ett barn, men\n"
"bara tills du växer upp!\n"
"Jobb, jobb och mera jobb!"
)

DEFINE_MESSAGE(0x717E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"YEAOH!\n"
"Humph. Det är bara en mask...\n"
"Försvinn, grabb! Gå härifrån!"
)

DEFINE_MESSAGE(0x717F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Heh heh heh...\n"
"Nåja, det fick honom att skina\n"
"upp lite, grabben.\n"
"Tack!"
)

DEFINE_MESSAGE(0x7180, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hmmm... Få se...\n"
"Ja, jag är ganska säker på det...\n"
"Den där blev tillverkad av plankan\n"
"från en kista. Ja, det blev den!"
)

DEFINE_MESSAGE(0x7181, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ahhh...jaa. Får jag se...\n"
"Väldigt bra hantverk.\n"
"Men jag tror inte det skulle vara\n"
"en bra ingrediens för min medicin."
)

DEFINE_MESSAGE(0x7182, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Mycket intressant! En Goron!\n"
"På tal om Goron, jag undrar\n"
"hur min gamla vän, Storgoron av\n"
"Döda Bergen, mår numera?"
)

DEFINE_MESSAGE(0x7183, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Väldigt egendomlig konstruktion...\n"
"Jag tror inte att den är vatten-\n"
"löslig, så den vore inte en bra\n"
"ingrediens i min medicin..."
)

DEFINE_MESSAGE(0x7184, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tugg tugg tugg...\n"
"Okej, okej, en mask.\n"
"Vill du köpa ett par bönor?"
)

DEFINE_MESSAGE(0x7185, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tugg tugg tugg...\n"
"Nepp, jag vill inte köpa den."
)

DEFINE_MESSAGE(0x7186, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tugg tugg tugg...\n"
"Nepp, den är inte riktigt min stil."
)

DEFINE_MESSAGE(0x7187, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Tugg tugg tugg...\n"
"Nåå...nej, jag tror inte jag\n"
"will ha den."
)

DEFINE_MESSAGE(0x7188, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vad vill du då?"
)

DEFINE_MESSAGE(0x7189, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du ser inte ut att kunna\n"
"simma väldigt väl..."
)

DEFINE_MESSAGE(0x718A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Rött hår...gulbrun hud...\n"
"Jag har sett sådant folk\n"
"någonstans tidigare..."
)

DEFINE_MESSAGE(0x718B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jovisst.\n"
"Du ser lite liten ut för\n"
"att vara en Zora..."
)

DEFINE_MESSAGE(0x718C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ho ho ho!\n"
"Ni Hylianer...Ni är såna skojiga\n"
"varelser!"
)

DEFINE_MESSAGE(0x718D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det där ansiktet...\n"
"det ger mig kalla kårar..."
)

DEFINE_MESSAGE(0x718E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Snacka om en nostalgisk färd!\n"
"Det påminner mig om min\n"
"barndomsvän, Storgoron!"
)

DEFINE_MESSAGE(0x718F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag tycker inte att det är\n"
"lustigt alls.\n"
"Hånar du mig??"
)

DEFINE_MESSAGE(0x7190, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du är en lustig kille!"
)

DEFINE_MESSAGE(0x7191, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ditt huvud--det är gigantiskt!"
)

DEFINE_MESSAGE(0x7192, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Gör inte sådär...\n"
"Det är skämmande för mig!"
)

DEFINE_MESSAGE(0x7193, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Åkej! Du bestämde dig för\n"
"att bli en Zora!\n"
"Är du faktiskt redo att gifta\n"
"dig med mig nu?"
)

DEFINE_MESSAGE(0x7194, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"WHOA!\n"
"Mitt hjärta...började slå\n"
"så hårt!"
)

DEFINE_MESSAGE(0x7195, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Det där är en obehaglig mask...\n"
"Adjö."
)

DEFINE_MESSAGE(0x7196, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hrrrrm...\n"
"Jag vet inte vag jag ska säga."
)

DEFINE_MESSAGE(0x7197, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du borde inte vara så petig\n"
"med vad du äter! Du äter väl\n"
"tillräckligt med gröna stenar?\n"
"Annars växer du aldrig till\n"
"och blir stor och stark!"
)

DEFINE_MESSAGE(0x7198, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Lämna mig ifred!"
)

DEFINE_MESSAGE(0x7199, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Försöker du få mig att skratta?\n"
"För det där är inte roligt..."
)

DEFINE_MESSAGE(0x719A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du gör mig hiskeligt förbannad!"
)

DEFINE_MESSAGE(0x719B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag hatar Gerudo!!"
)

DEFINE_MESSAGE(0x719C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Sluta besvära mig!\n"
"Försvinn!"
)

DEFINE_MESSAGE(0x719D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Wah hah hah!\n"
"Tror du att du är förklädd?\n"
"Så lustigt!"
)

DEFINE_MESSAGE(0x719E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ut ur vägen!\n"
"Försvinn härifrån!\n"
"Du ber verkligen om det, eller hur?"
)

DEFINE_MESSAGE(0x719F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hördu, pysen, du är modig\n"
"som går runt här klädd sådär!\n"
"Men, du lurar oss inte\n"
"så lätt!"
)

DEFINE_MESSAGE(0x71A0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Vad är det där?\n"
"Vad har det att göra med\n"
"oss?"
)

DEFINE_MESSAGE(0x71A1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ha ha hah!\n"
"Du har mod i överflöd,\n"
"eller hur, grabben?\n"
"Jag gillar dig!"
)

DEFINE_MESSAGE(0x71A2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Kom igen! Det är dags att\n"
"börja allvaret!"
)

DEFINE_MESSAGE(0x71A3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Så underligt...det ser nästan\n"
"ut som mig...\n"
"Nej...inte riktigt. Inte alls,\n"
"när du tittar riktigt noggrant."
)

DEFINE_MESSAGE(0x71A4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Hmm. Nej, nej, nej!\n"
"Öronen är inte alls rätt!\n"
"De borde vara, du vet, längre!"
)

DEFINE_MESSAGE(0x71A5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Är du inte ens lite rädd,\n"
"som går runt mitt i\n"
"natten och ser ut sådär?"
)

DEFINE_MESSAGE(0x71A6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Ha ha hah!\n"
"Du gillar verkligen de där,\n"
"eller hur?!"
)

DEFINE_MESSAGE(0x71A7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Jag tror jag har sett en sådan\n"
"där sten här någonstans...\n"
"Var var det nu riktigt?\n"
"Hmmmm...."
)

DEFINE_MESSAGE(0x71A8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Skynda dig, " NAME "!\n"
"Tornet kommer att kollapsa vilken\n"
"sekund som helst nu!!"
)

DEFINE_MESSAGE(0x71A9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Se upp för fallande rubbel!"
)

DEFINE_MESSAGE(0x71AA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
NAME "!\n"
"Hjälp mig!"
)

DEFINE_MESSAGE(0x71AB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
NAME "!\n"
"Utgången är bara en bit fram!"
)

DEFINE_MESSAGE(0x71AC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
"Tack, " NAME ".\n"
"Låt oss nu skynda!"
)

DEFINE_MESSAGE(0x71AD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Så synd!" BOX_BREAK "Träna hårt och kom tillbaka hit!" EVENT
)

DEFINE_MESSAGE(0x71AE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Nästan!!" BOX_BREAK "Nå ja...okej då!\n"
"Jag låter dig försöka en gång till\n"
"gratis...\n"
"Den här gången måste du klara det!" EVENT
)

DEFINE_MESSAGE(0x71AF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Underbart!!!\n"
"Bravo!!!\n"
"Perfekt!!!" BOX_BREAK "Här får du en fanastisk present!" EVENT
)

DEFINE_MESSAGE(0x71B0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE  COLOR(LIGHTBLUE) "Åh, nej! " COLOR(RED) "Tiden är ute!\n"
COLOR(LIGHTBLUE) "Saken du skulle leverera\n"
"har blivit dålig!\n"
"Vi försöker igen!" COLOR(DEFAULT)  QUICKTEXT_DISABLE  EVENT
)

DEFINE_MESSAGE(0x71B1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
QUICKTEXT_ENABLE "BOINNG! BOINNG!\n"
"Tiden är för tillfället: " TIME "!" QUICKTEXT_DISABLE  FADE("\x28")
)

DEFINE_MESSAGE(0x71B2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Du fick höra om oss från vakten\n"
"vid porten till Döda Bergen?\n"
"Nåmen, då måste jag ge dig\n"
"ett riktigt bra erbjudande!"
)

